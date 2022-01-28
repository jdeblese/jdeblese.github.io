import System.IO
import System.FilePath.Glob
import qualified Data.Text as T
import qualified Data.Text.IO as TIO
import Data.Char (isSpace)
import Data.Functor ((<&>))
import Data.List
import CMarkGFM

-- trav :: Int -> Node -> String
-- trav i (Node _ ty ls) = (replicate i '\SP') ++ (show ty) ++ "\n" ++ (foldl (++) "" (map (trav $ i + 2) ls))

-- fix :: Node -> Node
-- --fix (Node pi (TEXT txt) ls) = Node pi (TEXT $ if txt == T.pack "[POSTS]" then T.pack "Boo!" else txt) $ map fix ls
-- fix (Node pi PARAGRAPH [c]) = if testChild c then Node Nothing (TEXT (T.pack "Boo!")) [] else Node pi PARAGRAPH $ [fix c]
--     where testChild :: Node -> Bool
--           testChild (Node pi (TEXT txt) ls) = txt == T.pack "[POSTS]"
--           testChild _ = False
-- fix (Node pi ty ls) = Node pi ty $ map fix ls

main = do
    posts <- reverse . sort <$> glob "../posts/[0-9]*[0-9]"
    postHtml <- T.concat <$> mapM postToText posts
    readFile "header.html" >>= putStr
    readToNode "../The Scrapyard" >>= TIO.putStr . nToHtml
    TIO.putStr $ makeTag "div" [("class", "h-feed")] $ T.append ramblings postHtml
    readFile "footer.html" >>= putStr
    where  
        ramblings = makeTag "h3" [("class", "p-name")] $ T.pack "Miscellaneous Ramblings"
        postToText :: FilePath -> IO T.Text
        postToText fn = withFile fn ReadMode parsePostToHtml
        addPosts posts (Node _ DOCUMENT ls) = Node Nothing DOCUMENT (ls ++ [Node Nothing (HTML_BLOCK posts) []])
        readToNode :: String -> IO Node
        readToNode fn = cmToNode <$> TIO.readFile fn

parsePostToHtml :: Handle -> IO T.Text
parsePostToHtml h = do
    title  <- TIO.hGetLine h
    date   <- TIO.hGetLine h
    author <- TIO.hGetLine h <&> head . nodeChildren . head . nodeChildren . cmToNode --Author link produces a PARAGRAPH in a DOCUMENT, and in there the LINK
    anchor <-     hGetLine h
    body   <- cmToHtml <$> TIO.hGetContents h

    return $ makeTag "article" [("class", "h-entry")] $ joinText [makeTitleHtml anchor title, makeBylineHtml author date anchor, inDiv "e-content" body]

    where   makeTitleHtml anchor title          = makeTag "h4" [("class", "p-name"), ("id", anchor)] title
            makeDateHtml anchor date            = makeTag "a"  [("class", "dt-published u-url"), ("href", '#' : anchor)] date
            makeBylineHtml author date anchor   = inDiv "byline" $ joinText [makeDateHtml anchor date, T.pack " - ", makeAuthorHtml author]
            makeAuthorHtml (Node _ (LINK addr title) [ls]) = makeTag "a" [("class", "p-author h-card"), ("href", T.unpack addr)] $ getNodeText ls

            getNodeText :: Node -> T.Text
            getNodeText (Node _ (TEXT t) _) = t

            inDiv :: String -> T.Text -> T.Text
            inDiv c = makeTag "div" [("class", c)]

            nodeChildren :: Node -> [Node]
            nodeChildren (Node _ _ ls) = ls


makeTag :: String -> [(String, String)] -> T.Text -> T.Text
makeTag cls attrs body = joinText $ map T.pack (["<", cls] ++ map attrToHtml attrs ++ [">"]) ++ [body] ++ map T.pack ["</", cls, ">\n"]
    where   attrToHtml :: (String, String) -> String
            attrToHtml (key, val) = ' ' : key ++ "=\"" ++ val ++ "\""


joinText = foldl T.append T.empty


cmToNode = commonmarkToNode [optUnsafe,optSmart] [extStrikethrough]
cmToHtml = commonmarkToHtml [optUnsafe,optSmart] [extStrikethrough]
nToHtml  = nodeToHtml       [optUnsafe,optSmart] [extStrikethrough]
