#!/usr/bin/env python3

import sys, codecs, misaka, re
from lxml import etree
from lxml.cssselect import CSSSelector
from io import StringIO
from jinja2 import Environment, PackageLoader, FileSystemLoader, select_autoescape

env = Environment(loader=FileSystemLoader('.'), autoescape=select_autoescape())

if __name__ == '__main__' :
	assert len(sys.argv) > 1
	mdfile = sys.argv[1]

	with codecs.open(mdfile, 'r', encoding='utf-8') as fh :
		markdown = fh.read()

	render = misaka.html(markdown)

	htmlparser = etree.HTMLParser(recover=True)
	tree = etree.parse(StringIO(render), htmlparser)

	toctags = ('h2', 'h3', 'h4')
	for tag in toctags :
		for e in CSSSelector(tag)(tree) :
			e.set('id', re.sub('[-: .]', '_', e.text.lower()))

	toctext = '<p></p>\n<div class="toc">'
	toclevel = -1
	sel = CSSSelector(','.join(toctags))(tree)
	for s in sel :
		assert s.tag in toctags
		idx = toctags.index(s.tag)
		# Child <ul> tags should be within the previous <li> tag
		if idx <= toclevel :
			toctext += '</li>\n'
		else :
			toctext += '\n'
		# Deal with higher-level tags
		while idx < toclevel :
			toctext += ' ' * toclevel + '</ul></li>\n'
			toclevel -= 1
		if idx == toclevel :
			toctext += ' ' * (toclevel + 1) + '<li>'
		# Deal with lower-level tags
		while idx > toclevel :
			toctext += ' ' * (toclevel + 1) + '<ul>\n'
			toclevel += 1
			toctext += ' ' * (toclevel + 1) + '<li>'
		toctext += '<a href="#%s">%s</a>'%(s.get('id'),s.text)
	toctext += '</li>\n'
	while toclevel > 0 :
		toctext += ' ' * toclevel + '</ul></li>\n'
		toclevel -= 1
	toctext += '</ul>\n</div>\n<p></p>\n'

	idx = markdown.find('[TOC]')
	#markdown = markdown[:idx] + toctext + markdown[idx+6:]
	if idx >= 0 :
		markdown = markdown[:idx] + toctext + markdown[idx+6:]
	render = misaka.html(markdown)
	tree = etree.parse(StringIO(render), htmlparser)

	# Need to redo this, since we reparsed the tree
	for tag in toctags :
		for e in CSSSelector(tag)(tree) :
			e.set('id', re.sub('[-: .]', '_', e.text.lower()))

	documentBody = tree.getroot()[0].getchildren()

	documentTitle = CSSSelector('h1')(tree)[0].text

	#print(etree.tostring(tree, pretty_print=True).decode('ascii'))
	#sys.stdout.write(etree.tostring(tree, pretty_print=True, method="html").decode('utf-8'))

	title = CSSSelector('h1')(tree)[0].text
	body = CSSSelector('body')(tree)[0]
	body = ''.join(etree.tostring(c, pretty_print=True, method='html').decode('utf-8') for c in body.getchildren())

	template = env.get_template('template.html')
	print(template.render(documentTitle=title, documentBody=body))

	#with codecs.open('template.html', 'r', encoding='utf-8') as fh :
	#	template = etree.parse(fh, htmlparser)
	#for action,elem in etree.iterwalk(template) :
	#	if elem.tag is etree.Comment :
	#		txt = elem.text.strip()
	#		if txt[0] == '%' and txt[-1] == '%' :
	#			parent = elem.getparent()
	#			idx = tuple(parent.getchildren()).index(elem)
	#			assert idx >= 0
	#			if txt[1:-1] == 'documentHTML' :
	#				parent.remove(elem)
	#				for e in documentBody :
	#					parent.insert(idx, e)
	#					idx += 1
	#			elif txt[1:-1] == 'documentTitle' :
	#				parent.remove(elem)
	#				parent.text = documentTitle
	#sys.stdout.write(etree.tostring(template.getroot(), pretty_print=True, method="html").decode('utf-8'))
