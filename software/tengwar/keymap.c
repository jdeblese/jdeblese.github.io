enum unicode_names {
    UM_TL_TINCO,                 UM_TL_PARMA,                 UM_TL_CALMA,                 UM_TL_QUESSE,                
    UM_TL_ANDO,                  UM_TL_UMBAR,                 UM_TL_ANGA,                  UM_TL_UNGWE,                 
    UM_TL_THULE,                 UM_TL_FORMEN,                UM_TL_HARMA,                 UM_TL_HWESTA,                
    UM_TL_ANTO,                  UM_TL_AMPA,                  UM_TL_ANCA,                  UM_TL_UNQUE,                 
    UM_TL_NUMEN,                 UM_TL_MALTA,                 UM_TL_NOLDO,                 UM_TL_NWALME,                
    UM_TL_ORE,                   UM_TL_VALA,                  UM_TL_ANNA,                  UM_TL_VILYA,                 
    UM_TL_EXTENDEDTINCO,         UM_TL_EXTENDEDPARMA,         UM_TL_EXTENDEDCALMA,         UM_TL_EXTENDEDQUESSE,        
    UM_TL_EXTENDEDANDO,          UM_TL_EXTENDEDUMBAR,         UM_TL_EXTENDEDANGA,          UM_TL_EXTENDEDUNGUE,         
    UM_TL_ROMEN,                 UM_TL_ARDA,                  UM_TL_LAMBE,                 UM_TL_ALDA,                  
    UM_TL_SILME,                 UM_TL_SILMENUQUERNA,         UM_TL_AARE,                  UM_TL_AARENUQUERNA,          
    UM_TL_HYARMEN,               UM_TL_HWESTASINDARINWA,      UM_TL_YANTA,                 UM_TL_URE,                  
    UM_TL_ARA,                   UM_TL_HALLA,                 UM_TL_TELCO,                 UM_TL_STEMLESSVALA,          
    UM_TL_STEMLESSANNA,          UM_TL_LIGATINGSHORTCARRIER,  UM_TL_ANNASINDARINWA,        UM_TL_OPENANNA,              
    UM_TL_REVERSEDPARMA,         UM_TL_REVERSEDFORMEN,        UM_TL_TALLSTEMLESSVALA,      UM_TL_MH,                    
    UM_TS_THREEDOTSABOVE,        UM_TS_THREEDOTSBELOW,        UM_TS_TWODOTSABOVE,          UM_TS_TWODOTSBELOW,          
    UM_TS_AMATICSE,              UM_TS_NUNTICSE,              UM_TS_ACUTE,                 UM_TS_DOUBLEACUTE,           
    UM_TS_DOUBLEACUTEBELOW,      UM_TS_RIGHTCURL,             UM_TS_RIGHTCURLBELOW,        UM_TS_LEFTCURL,              
    UM_TS_LEFTCURLBELOW,         UM_TS_DOUBLERIGHTCURL,       UM_TS_DOUBLELEFTCURL,        UM_TS_NASALIZER,             
    UM_TS_DOUBLER,               UM_TS_TILDE,                 UM_TS_BREVE,                 UM_TS_GRAVE,                 
    UM_TS_YANTAABOVE,            UM_TS_THREEINVERTEDDOTSABOVE,UM_TS_LONGCARRIERBELOW,      UM_TS_ENDS
};

const uint32_t PROGMEM unicode_map[] = {
    [UM_TL_TINCO] = 0xe000,
    [UM_TL_PARMA] = 0xe001,
    [UM_TL_CALMA] = 0xe002,
    [UM_TL_QUESSE] = 0xe003,
    [UM_TL_ANDO] = 0xe004,
    [UM_TL_UMBAR] = 0xe005,
    [UM_TL_ANGA] = 0xe006,
    [UM_TL_UNGWE] = 0xe007,
    [UM_TL_THULE] = 0xe008,
    [UM_TL_FORMEN] = 0xe009,
    [UM_TL_HARMA] = 0xe00a,
    [UM_TL_HWESTA] = 0xe00b,
    [UM_TL_ANTO] = 0xe00c,
    [UM_TL_AMPA] = 0xe00d,
    [UM_TL_ANCA] = 0xe00e,
    [UM_TL_UNQUE] = 0xe00f,
    [UM_TL_NUMEN] = 0xe010,
    [UM_TL_MALTA] = 0xe011,
    [UM_TL_NOLDO] = 0xe012,
    [UM_TL_NWALME] = 0xe013,
    [UM_TL_ORE] = 0xe014,
    [UM_TL_VALA] = 0xe015,
    [UM_TL_ANNA] = 0xe016,
    [UM_TL_VILYA] = 0xe017,
    [UM_TL_EXTENDEDTINCO] = 0xe018,
    [UM_TL_EXTENDEDPARMA] = 0xe019,
    [UM_TL_EXTENDEDCALMA] = 0xe01a,
    [UM_TL_EXTENDEDQUESSE] = 0xe01b,
    [UM_TL_EXTENDEDANDO] = 0xe01c,
    [UM_TL_EXTENDEDUMBAR] = 0xe01d,
    [UM_TL_EXTENDEDANGA] = 0xe01e,
    [UM_TL_EXTENDEDUNGUE] = 0xe01f,
    [UM_TL_ROMEN] = 0xe020,
    [UM_TL_ARDA] = 0xe021,
    [UM_TL_LAMBE] = 0xe022,
    [UM_TL_ALDA] = 0xe023,
    [UM_TL_SILME] = 0xe024,
    [UM_TL_SILMENUQUERNA] = 0xe025,
    [UM_TL_AARE] = 0xe026,
    [UM_TL_AARENUQUERNA] = 0xe027,
    [UM_TL_HYARMEN] = 0xe028,
    [UM_TL_HWESTASINDARINWA] = 0xe029,
    [UM_TL_YANTA] = 0xe02a,
    [UM_TL_URE] = 0xe02b,
    [UM_TL_ARA] = 0xe02c,
    [UM_TL_HALLA] = 0xe02d,
    [UM_TL_TELCO] = 0xe02e,
    [UM_TL_STEMLESSVALA] = 0xe031,
    [UM_TL_STEMLESSANNA] = 0xe032,
    [UM_TL_LIGATINGSHORTCARRIER] = 0xe034,
    [UM_TL_ANNASINDARINWA] = 0xe035,
    [UM_TL_OPENANNA] = 0xe036,
    [UM_TL_REVERSEDPARMA] = 0xe037,
    [UM_TL_REVERSEDFORMEN] = 0xe038,
    [UM_TL_TALLSTEMLESSVALA] = 0xe039,
    [UM_TL_MH] = 0xe03a,
    [UM_TS_THREEDOTSABOVE] = 0xe040,
    [UM_TS_THREEDOTSBELOW] = 0xe041,
    [UM_TS_TWODOTSABOVE] = 0xe042,
    [UM_TS_TWODOTSBELOW] = 0xe043,
    [UM_TS_AMATICSE] = 0xe044,
    [UM_TS_NUNTICSE] = 0xe045,
    [UM_TS_ACUTE] = 0xe046,
    [UM_TS_DOUBLEACUTE] = 0xe048,
    [UM_TS_DOUBLEACUTEBELOW] = 0xe049,
    [UM_TS_RIGHTCURL] = 0xe04a,
    [UM_TS_RIGHTCURLBELOW] = 0xe04b,
    [UM_TS_LEFTCURL] = 0xe04c,
    [UM_TS_LEFTCURLBELOW] = 0xe04d,
    [UM_TS_DOUBLERIGHTCURL] = 0xe04e,
    [UM_TS_DOUBLELEFTCURL] = 0xe04f,
    [UM_TS_NASALIZER] = 0xe050,
    [UM_TS_DOUBLER] = 0xe051,
    [UM_TS_TILDE] = 0xe052,
    [UM_TS_BREVE] = 0xe053,
    [UM_TS_GRAVE] = 0xe054,
    [UM_TS_YANTAABOVE] = 0xe055,
    [UM_TS_THREEINVERTEDDOTSABOVE] = 0xe056,
    [UM_TS_LONGCARRIERBELOW] = 0xe057,
    [UM_TS_ENDS] = 0xe058,
};

#define TL_TINC UM(UM_TL_TINCO)
#define TL_PARM UM(UM_TL_PARMA)
#define TL_CALM UM(UM_TL_CALMA)
#define TL_QUES UM(UM_TL_QUESSE)
#define TL_ANDO UM(UM_TL_ANDO)
#define TL_UMBA UM(UM_TL_UMBAR)
#define TL_ANGA UM(UM_TL_ANGA)
#define TL_UNGW UM(UM_TL_UNGWE)
#define TL_THUL UM(UM_TL_THULE)
#define TL_FORM UM(UM_TL_FORMEN)
#define TL_HARM UM(UM_TL_HARMA)
#define TL_HWES UM(UM_TL_HWESTA)
#define TL_ANTO UM(UM_TL_ANTO)
#define TL_AMPA UM(UM_TL_AMPA)
#define TL_ANCA UM(UM_TL_ANCA)
#define TL_UNQU UM(UM_TL_UNQUE)
#define TL_NUME UM(UM_TL_NUMEN)
#define TL_MALT UM(UM_TL_MALTA)
#define TL_NOLD UM(UM_TL_NOLDO)
#define TL_NWAL UM(UM_TL_NWALME)
#define TL_ORE  UM(UM_TL_ORE)
#define TL_VALA UM(UM_TL_VALA)
#define TL_ANNA UM(UM_TL_ANNA)
#define TL_VILY UM(UM_TL_VILYA)
#define TL_ETIN UM(UM_TL_EXTENDEDTINCO)
#define TL_EPAR UM(UM_TL_EXTENDEDPARMA)
#define TL_ECAL UM(UM_TL_EXTENDEDCALMA)
#define TL_EQUE UM(UM_TL_EXTENDEDQUESSE)
#define TL_EAND UM(UM_TL_EXTENDEDANDO)
#define TL_EUMB UM(UM_TL_EXTENDEDUMBAR)
#define TL_EANG UM(UM_TL_EXTENDEDANGA)
#define TL_EUNG UM(UM_TL_EXTENDEDUNGUE)
#define TL_ROME UM(UM_TL_ROMEN)
#define TL_ARDA UM(UM_TL_ARDA)
#define TL_LAMB UM(UM_TL_LAMBE)
#define TL_ALDA UM(UM_TL_ALDA)
#define TL_SILM UM(UM_TL_SILME)
#define TL_SINU UM(UM_TL_SILMENUQUERNA)
#define TL_AARE UM(UM_TL_AARE)
#define TL_AARN UM(UM_TL_AARENUQUERNA)
#define TL_HYAR UM(UM_TL_HYARMEN)
#define TL_HWSI UM(UM_TL_HWESTASINDARINWA)
#define TL_YANT UM(UM_TL_YANTA)
#define TL_URE  UM(UM_TL_URE)
#define TL_ARA  UM(UM_TL_ARA)
#define TL_HALL UM(UM_TL_HALLA)
#define TL_TELC UM(UM_TL_TELCO)
#define TL_SVAL UM(UM_TL_STEMLESSVALA)
#define TL_SANN UM(UM_TL_STEMLESSANNA)
#define TL_LIGA UM(UM_TL_LIGATINGSHORTCARRIER)
#define TL_ANSI UM(UM_TL_ANNASINDARINWA)
#define TL_OANN UM(UM_TL_OPENANNA)
#define TL_RPAR UM(UM_TL_REVERSEDPARMA)
#define TL_RFOR UM(UM_TL_REVERSEDFORMEN)
#define TL_TSVA UM(UM_TL_TALLSTEMLESSVALA)
#define TS_TDAB UM(UM_TS_THREEDOTSABOVE)
#define TS_TDBE UM(UM_TS_THREEDOTSBELOW)
#define TS_DDAB UM(UM_TS_TWODOTSABOVE)
#define TS_DDBE UM(UM_TS_TWODOTSBELOW)
#define TS_AMAT UM(UM_TS_AMATICSE)
#define TS_NUNT UM(UM_TS_NUNTICSE)
#define TS_ACUT UM(UM_TS_ACUTE)
#define TS_DACU UM(UM_TS_DOUBLEACUTE)
#define TS_DACB UM(UM_TS_DOUBLEACUTEBELOW)
#define TS_RCUR UM(UM_TS_RIGHTCURL)
#define TS_RCUB UM(UM_TS_RIGHTCURLBELOW)
#define TS_LCUR UM(UM_TS_LEFTCURL)
#define TS_LCUB UM(UM_TS_LEFTCURLBELOW)
#define TS_DRCU UM(UM_TS_DOUBLERIGHTCURL)
#define TS_DLCU UM(UM_TS_DOUBLELEFTCURL)
#define TS_NASA UM(UM_TS_NASALIZER)
#define TS_DR   UM(UM_TS_DOUBLER)
#define TS_TILD UM(UM_TS_TILDE)
#define TS_BREV UM(UM_TS_BREVE)
#define TS_GRAV UM(UM_TS_GRAVE)
#define TS_YANT UM(UM_TS_YANTAABOVE)
#define TS_THRE UM(UM_TS_THREEINVERTEDDOTSABOVE)
#define TS_LONG UM(UM_TS_LONGCARRIERBELOW)
#define TS_ENDS UM(UM_TS_ENDS)

// (lower case, upper case) pairs
#define TEL_ARA UP(UM_TL_TELCO, UM_TL_ARA)
#define AND_END UP(UM_TL_ANDO, UM_TS_ENDS)
#define FOR_ACU UP(UM_TL_FORMEN, UM_TS_ACUTE)
#define UNG_AMA UP(UM_TL_UNGWE, UM_TS_AMATICSE)
#define HYA_TIL UP(UM_TL_HYARMEN, UM_TS_TILDE)
#define ANT_NAS UP(UM_TL_ANTO, UM_TS_NASALIZER)
#define QUE_NUN UP(UM_TL_QUESSE, UM_TS_NUNTICSE)
#define LAM_DDA UP(UM_TL_LAMBE, UM_TS_TWODOTSABOVE)
#define THU_DDB UP(UM_TL_THULE, UM_TS_TWODOTSBELOW)
#define OAN_ANN UP(UM_TL_OPENANNA, UM_TL_ANNA)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_all(
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
        _______,          OAN_ANN, TL_SVAL, TL_SANN, TL_ROME, TL_TINC, TL_ORE,  TL_VALA, TEL_ARA, TL_URE,  TL_PARM, TL_ANCA, TL_HWES, _______,
        _______,          TL_VILY, TL_SILM, AND_END, FOR_ACU, UNG_AMA, HYA_TIL, ANT_NAS, QUE_NUN, LAM_DDA, THU_DDB, TL_TSVA, _______,          _______,
        _______, _______, TL_AARE, TL_HARM, TL_CALM, TL_AMPA, TL_UMBA, TL_NUME, TL_MALT, TL_NWAL, TL_NOLD, TL_ANGA, _______, _______,          _______,
        _______, _______, _______,          _______,          _______,          _______,          _______, _______, _______, _______,          _______

    ),
};
