/*
 * Built-in preprocessor rules.
 *
 * Copyright 2006-present Przemyslaw Czerpak <druzus / at / priv.onet.pl>
 *
 * This file is generated automatically by Harbour preprocessor
 * and is covered by the same license as Harbour PP
 */

#define _HB_PP_INTERNAL
#include "hbpp.h"

static HB_PP_TOKEN s_dm001[ 6 ] = {
   { s_dm001 + 1, NULL       , "_DFSET",             6, 1, 0xc015, 0 },
   { s_dm001 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_dm001 + 3, NULL       , "x",                  1, 1, 0xc001, 1 },
   { s_dm001 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_dm001 + 5, NULL       , "y",                  1, 1, 0xc001, 2 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_dr001[ 15 ] = {
   { s_dr001 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_dr001 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_dr001 + 3, NULL       , "_SET_DATEFORMAT",   15, 1, 0xc015, 0 },
   { s_dr001 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_dr001 + 5, NULL       , "iif",                3, 1, 0xc015, 0 },
   { s_dr001 + 6, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_dr001 + 7, NULL       , "__SetCentury",      12, 1, 0xc015, 0 },
   { s_dr001 + 8, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_dr001 + 9, NULL       , ")",                  1, 0, 0xc033, 0 },
   { s_dr001 +10, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_dr001 +11, NULL       , "x",                  1, 1, 0xc00b, 1 },
   { s_dr001 +12, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_dr001 +13, NULL       , "y",                  1, 1, 0xc00b, 2 },
   { s_dr001 +14, NULL       , ")",                  1, 1, 0xc033, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_dm002[ 4 ] = {
   { s_dm002 + 1, NULL       , "HB_SYMBOL_UNUSED",  16, 1, 0xc015, 0 },
   { s_dm002 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_dm002 + 3, NULL       , "symbol",             6, 1, 0xc001, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_dr002[ 5 ] = {
   { s_dr002 + 1, NULL       , "(",                  1, 2, 0xc032, 0 },
   { s_dr002 + 2, NULL       , "(",                  1, 1, 0xc032, 0 },
   { s_dr002 + 3, NULL       , "symbol",             6, 1, 0xc00b, 1 },
   { s_dr002 + 4, NULL       , ")",                  1, 1, 0xc033, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_dm003[ 1 ] = {
   { NULL       , NULL       , "HB_SET_CASE_UPPER",  17, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr003[ 1 ] = {
   { NULL       , NULL       , "2",                  1, 5, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm004[ 1 ] = {
   { NULL       , NULL       , "HB_SET_CASE_LOWER",  17, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr004[ 1 ] = {
   { NULL       , NULL       , "1",                  1, 5, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm005[ 1 ] = {
   { NULL       , NULL       , "HB_SET_CASE_MIXED",  17, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr005[ 1 ] = {
   { NULL       , NULL       , "0",                  1, 5, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm006[ 1 ] = {
   { NULL       , NULL       , "HB_SET_COUNT",      12, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr006[ 7 ] = {
   { s_dr006 + 1, NULL       , "(",                  1,10, 0xc032, 0 },
   { s_dr006 + 2, NULL       , "_SET_DBCODEPAGE",   15, 1, 0xc015, 0 },
   { s_dr006 + 3, NULL       , "-",                  1, 1, 0xc051, 0 },
   { s_dr006 + 4, NULL       , "HB_SET_BASE",       11, 1, 0xc015, 0 },
   { s_dr006 + 5, NULL       , "+",                  1, 1, 0xc050, 0 },
   { s_dr006 + 6, NULL       , "1",                  1, 1, 0xc02a, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_dm007[ 1 ] = {
   { NULL       , NULL       , "HB_SET_BASE",       11, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr007[ 1 ] = {
   { NULL       , NULL       , "100",                3,11, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm008[ 1 ] = {
   { NULL       , NULL       , "_SET_DBCODEPAGE",   15, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr008[ 1 ] = {
   { NULL       , NULL       , "117",                3, 7, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm009[ 1 ] = {
   { NULL       , NULL       , "_SET_TIMEFORMAT",   15, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr009[ 1 ] = {
   { NULL       , NULL       , "116",                3, 7, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm010[ 1 ] = {
   { NULL       , NULL       , "_SET_OSCODEPAGE",   15, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr010[ 1 ] = {
   { NULL       , NULL       , "115",                3, 7, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm011[ 1 ] = {
   { NULL       , NULL       , "_SET_CODEPAGE",     13, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr011[ 1 ] = {
   { NULL       , NULL       , "114",                3, 9, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm012[ 1 ] = {
   { NULL       , NULL       , "_SET_HBOUTLOGINFO",  17, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr012[ 1 ] = {
   { NULL       , NULL       , "113",                3, 5, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm013[ 1 ] = {
   { NULL       , NULL       , "_SET_HBOUTLOG",     13, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr013[ 1 ] = {
   { NULL       , NULL       , "112",                3, 9, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm014[ 1 ] = {
   { NULL       , NULL       , "_SET_TRIMFILENAME",  17, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr014[ 1 ] = {
   { NULL       , NULL       , "111",                3, 5, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm015[ 1 ] = {
   { NULL       , NULL       , "_SET_EOL",           8, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr015[ 1 ] = {
   { NULL       , NULL       , "110",                3,14, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm016[ 1 ] = {
   { NULL       , NULL       , "_SET_DEFEXTENSIONS",  18, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr016[ 1 ] = {
   { NULL       , NULL       , "109",                3, 4, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm017[ 1 ] = {
   { NULL       , NULL       , "_SET_DBFLOCKSCHEME",  18, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr017[ 1 ] = {
   { NULL       , NULL       , "108",                3, 4, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm018[ 1 ] = {
   { NULL       , NULL       , "_SET_FORCEOPT",     13, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr018[ 1 ] = {
   { NULL       , NULL       , "107",                3, 9, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm019[ 1 ] = {
   { NULL       , NULL       , "_SET_HARDCOMMIT",   15, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr019[ 1 ] = {
   { NULL       , NULL       , "106",                3, 7, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm020[ 1 ] = {
   { NULL       , NULL       , "_SET_EOF",           8, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr020[ 1 ] = {
   { NULL       , NULL       , "105",                3,14, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm021[ 1 ] = {
   { NULL       , NULL       , "_SET_DIRSEPARATOR",  17, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr021[ 1 ] = {
   { NULL       , NULL       , "104",                3, 5, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm022[ 1 ] = {
   { NULL       , NULL       , "_SET_DIRCASE",      12, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr022[ 1 ] = {
   { NULL       , NULL       , "103",                3,10, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm023[ 1 ] = {
   { NULL       , NULL       , "_SET_FILECASE",     13, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr023[ 1 ] = {
   { NULL       , NULL       , "102",                3, 9, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm024[ 1 ] = {
   { NULL       , NULL       , "_SET_IDLEREPEAT",   15, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr024[ 1 ] = {
   { NULL       , NULL       , "101",                3, 7, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm025[ 1 ] = {
   { NULL       , NULL       , "_SET_LANGUAGE",     13, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr025[ 1 ] = {
   { NULL       , NULL       , "100",                3, 9, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm026[ 1 ] = {
   { NULL       , NULL       , "_SET_COUNT",        10, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr026[ 1 ] = {
   { NULL       , NULL       , "47",                 2,12, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm027[ 1 ] = {
   { NULL       , NULL       , "_SET_AUTOSHARE",    14, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr027[ 1 ] = {
   { NULL       , NULL       , "47",                 2, 8, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm028[ 1 ] = {
   { NULL       , NULL       , "_SET_AUTORDER",     13, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr028[ 1 ] = {
   { NULL       , NULL       , "46",                 2, 9, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm029[ 1 ] = {
   { NULL       , NULL       , "_SET_AUTOPEN",      12, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr029[ 1 ] = {
   { NULL       , NULL       , "45",                 2,10, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm030[ 1 ] = {
   { NULL       , NULL       , "_SET_OPTIMIZE",     13, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr030[ 1 ] = {
   { NULL       , NULL       , "44",                 2, 9, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm031[ 1 ] = {
   { NULL       , NULL       , "_SET_STRICTREAD",   15, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr031[ 1 ] = {
   { NULL       , NULL       , "43",                 2, 7, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm032[ 1 ] = {
   { NULL       , NULL       , "_SET_MFILEEXT",     13, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr032[ 1 ] = {
   { NULL       , NULL       , "42",                 2, 9, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm033[ 1 ] = {
   { NULL       , NULL       , "_SET_MBLOCKSIZE",   15, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr033[ 1 ] = {
   { NULL       , NULL       , "41",                 2, 7, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm034[ 1 ] = {
   { NULL       , NULL       , "_SET_VIDEOMODE",    14, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr034[ 1 ] = {
   { NULL       , NULL       , "40",                 2, 8, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm035[ 1 ] = {
   { NULL       , NULL       , "_SET_EVENTMASK",    14, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr035[ 1 ] = {
   { NULL       , NULL       , "39",                 2, 8, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm036[ 1 ] = {
   { NULL       , NULL       , "_SET_SCROLLBREAK",  16, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr036[ 1 ] = {
   { NULL       , NULL       , "38",                 2, 6, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm037[ 1 ] = {
   { NULL       , NULL       , "_SET_MCENTER",      12, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr037[ 1 ] = {
   { NULL       , NULL       , "37",                 2,10, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm038[ 1 ] = {
   { NULL       , NULL       , "_SET_MESSAGE",      12, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr038[ 1 ] = {
   { NULL       , NULL       , "36",                 2,10, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm039[ 1 ] = {
   { NULL       , NULL       , "_SET_WRAP",          9, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr039[ 1 ] = {
   { NULL       , NULL       , "35",                 2,13, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm040[ 1 ] = {
   { NULL       , NULL       , "_SET_DELIMCHARS",   15, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr040[ 1 ] = {
   { NULL       , NULL       , "34",                 2, 7, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm041[ 1 ] = {
   { NULL       , NULL       , "_SET_DELIMITERS",   15, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr041[ 1 ] = {
   { NULL       , NULL       , "33",                 2, 7, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm042[ 1 ] = {
   { NULL       , NULL       , "_SET_SCOREBOARD",   15, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr042[ 1 ] = {
   { NULL       , NULL       , "32",                 2, 7, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm043[ 1 ] = {
   { NULL       , NULL       , "_SET_INTENSITY",    14, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr043[ 1 ] = {
   { NULL       , NULL       , "31",                 2, 8, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm044[ 1 ] = {
   { NULL       , NULL       , "_SET_EXIT",          9, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr044[ 1 ] = {
   { NULL       , NULL       , "30",                 2,13, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm045[ 1 ] = {
   { NULL       , NULL       , "_SET_INSERT",       11, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr045[ 1 ] = {
   { NULL       , NULL       , "29",                 2,11, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm046[ 1 ] = {
   { NULL       , NULL       , "_SET_ESCAPE",       11, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr046[ 1 ] = {
   { NULL       , NULL       , "28",                 2,11, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm047[ 1 ] = {
   { NULL       , NULL       , "_SET_CONFIRM",      12, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr047[ 1 ] = {
   { NULL       , NULL       , "27",                 2,10, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm048[ 1 ] = {
   { NULL       , NULL       , "_SET_BELL",          9, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr048[ 1 ] = {
   { NULL       , NULL       , "26",                 2,13, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm049[ 1 ] = {
   { NULL       , NULL       , "_SET_MARGIN",       11, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr049[ 1 ] = {
   { NULL       , NULL       , "25",                 2,11, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm050[ 1 ] = {
   { NULL       , NULL       , "_SET_PRINTFILE",    14, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr050[ 1 ] = {
   { NULL       , NULL       , "24",                 2, 8, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm051[ 1 ] = {
   { NULL       , NULL       , "_SET_PRINTER",      12, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr051[ 1 ] = {
   { NULL       , NULL       , "23",                 2,10, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm052[ 1 ] = {
   { NULL       , NULL       , "_SET_EXTRAFILE",    14, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr052[ 1 ] = {
   { NULL       , NULL       , "22",                 2, 8, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm053[ 1 ] = {
   { NULL       , NULL       , "_SET_EXTRA",        10, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr053[ 1 ] = {
   { NULL       , NULL       , "21",                 2,12, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm054[ 1 ] = {
   { NULL       , NULL       , "_SET_DEVICE",       11, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr054[ 1 ] = {
   { NULL       , NULL       , "20",                 2,11, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm055[ 1 ] = {
   { NULL       , NULL       , "_SET_ALTFILE",      12, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr055[ 1 ] = {
   { NULL       , NULL       , "19",                 2,10, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm056[ 1 ] = {
   { NULL       , NULL       , "_SET_ALTERNATE",    14, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr056[ 1 ] = {
   { NULL       , NULL       , "18",                 2, 8, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm057[ 1 ] = {
   { NULL       , NULL       , "_SET_CONSOLE",      12, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr057[ 1 ] = {
   { NULL       , NULL       , "17",                 2,10, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm058[ 1 ] = {
   { NULL       , NULL       , "_SET_CURSOR",       11, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr058[ 1 ] = {
   { NULL       , NULL       , "16",                 2,11, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm059[ 1 ] = {
   { NULL       , NULL       , "_SET_COLOR",        10, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr059[ 1 ] = {
   { NULL       , NULL       , "15",                 2,12, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm060[ 1 ] = {
   { NULL       , NULL       , "_SET_TYPEAHEAD",    14, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr060[ 1 ] = {
   { NULL       , NULL       , "14",                 2, 8, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm061[ 1 ] = {
   { NULL       , NULL       , "_SET_DEBUG",        10, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr061[ 1 ] = {
   { NULL       , NULL       , "13",                 2,12, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm062[ 1 ] = {
   { NULL       , NULL       , "_SET_CANCEL",       11, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr062[ 1 ] = {
   { NULL       , NULL       , "12",                 2,11, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm063[ 1 ] = {
   { NULL       , NULL       , "_SET_DELETED",      12, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr063[ 1 ] = {
   { NULL       , NULL       , "11",                 2,10, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm064[ 1 ] = {
   { NULL       , NULL       , "_SET_UNIQUE",       11, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr064[ 1 ] = {
   { NULL       , NULL       , "10",                 2,11, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm065[ 1 ] = {
   { NULL       , NULL       , "_SET_SOFTSEEK",     13, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr065[ 1 ] = {
   { NULL       , NULL       , "9",                  1, 9, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm066[ 1 ] = {
   { NULL       , NULL       , "_SET_EXCLUSIVE",    14, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr066[ 1 ] = {
   { NULL       , NULL       , "8",                  1, 8, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm067[ 1 ] = {
   { NULL       , NULL       , "_SET_DEFAULT",      12, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr067[ 1 ] = {
   { NULL       , NULL       , "7",                  1,10, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm068[ 1 ] = {
   { NULL       , NULL       , "_SET_PATH",          9, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr068[ 1 ] = {
   { NULL       , NULL       , "6",                  1,13, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm069[ 1 ] = {
   { NULL       , NULL       , "_SET_EPOCH",        10, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr069[ 1 ] = {
   { NULL       , NULL       , "5",                  1,12, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm070[ 1 ] = {
   { NULL       , NULL       , "_SET_DATEFORMAT",   15, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr070[ 1 ] = {
   { NULL       , NULL       , "4",                  1, 7, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm071[ 1 ] = {
   { NULL       , NULL       , "_SET_DECIMALS",     13, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr071[ 1 ] = {
   { NULL       , NULL       , "3",                  1, 9, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm072[ 1 ] = {
   { NULL       , NULL       , "_SET_FIXED",        10, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr072[ 1 ] = {
   { NULL       , NULL       , "2",                  1,12, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm073[ 1 ] = {
   { NULL       , NULL       , "_SET_EXACT",        10, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr073[ 1 ] = {
   { NULL       , NULL       , "1",                  1,12, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm074[ 1 ] = {
   { NULL       , NULL       , "_SET_CH",            7, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dm075[ 1 ] = {
   { NULL       , NULL       , "HB_LEGACY_LEVEL5",  16, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dm076[ 1 ] = {
   { NULL       , NULL       , "HB_LEGACY_LEVEL4",  16, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dm077[ 1 ] = {
   { NULL       , NULL       , "HB_COMPAT_C53",     13, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dm078[ 1 ] = {
   { NULL       , NULL       , "HB_CLP_UNDOC",      12, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_dm079[ 1 ] = {
   { NULL       , NULL       , "HB_VER_SVNID",      12, 0, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr079[ 1 ] = {
   { NULL       , NULL       , "1904111533",        10, 0, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm080[ 1 ] = {
   { NULL       , NULL       , "HB_VER_REVID",      12, 0, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr080[ 1 ] = {
   { NULL       , NULL       , "1904111533",        10, 0, 0xc02a, 0 }
};
static HB_PP_TOKEN s_dm081[ 1 ] = {
   { NULL       , NULL       , "HB_VER_CHLID",      12, 0, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr081[ 1 ] = {
   { NULL       , NULL       , "ba87964f6754d037f86be597c07a08e02f4cb9e0",  40, 0, 0xc029, 0 }
};
static HB_PP_TOKEN s_dm082[ 1 ] = {
   { NULL       , NULL       , "HB_VER_LENTRY",     13, 0, 0xc015, 0 }
};
static HB_PP_TOKEN s_dr082[ 1 ] = {
   { NULL       , NULL       , "2019-04-11 17:33 UTC+0200 Przemyslaw Czerpak (druzus/at/poczta.onet.pl)",  71, 0, 0xc029, 0 }
};
static const HB_PP_DEFRULE s_def[ 82 ] = {
   { s_dm001, s_dr001, 3, 2, 0x0000 },
   { s_dm002, s_dr002, 3, 1, 0x0000 },
   { s_dm003, s_dr003, 3, 0, 0x0000 },
   { s_dm004, s_dr004, 3, 0, 0x0000 },
   { s_dm005, s_dr005, 3, 0, 0x0000 },
   { s_dm006, s_dr006, 3, 0, 0x0000 },
   { s_dm007, s_dr007, 3, 0, 0x0000 },
   { s_dm008, s_dr008, 3, 0, 0x0000 },
   { s_dm009, s_dr009, 3, 0, 0x0000 },
   { s_dm010, s_dr010, 3, 0, 0x0000 },
   { s_dm011, s_dr011, 3, 0, 0x0000 },
   { s_dm012, s_dr012, 3, 0, 0x0000 },
   { s_dm013, s_dr013, 3, 0, 0x0000 },
   { s_dm014, s_dr014, 3, 0, 0x0000 },
   { s_dm015, s_dr015, 3, 0, 0x0000 },
   { s_dm016, s_dr016, 3, 0, 0x0000 },
   { s_dm017, s_dr017, 3, 0, 0x0000 },
   { s_dm018, s_dr018, 3, 0, 0x0000 },
   { s_dm019, s_dr019, 3, 0, 0x0000 },
   { s_dm020, s_dr020, 3, 0, 0x0000 },
   { s_dm021, s_dr021, 3, 0, 0x0000 },
   { s_dm022, s_dr022, 3, 0, 0x0000 },
   { s_dm023, s_dr023, 3, 0, 0x0000 },
   { s_dm024, s_dr024, 3, 0, 0x0000 },
   { s_dm025, s_dr025, 3, 0, 0x0000 },
   { s_dm026, s_dr026, 3, 0, 0x0000 },
   { s_dm027, s_dr027, 3, 0, 0x0000 },
   { s_dm028, s_dr028, 3, 0, 0x0000 },
   { s_dm029, s_dr029, 3, 0, 0x0000 },
   { s_dm030, s_dr030, 3, 0, 0x0000 },
   { s_dm031, s_dr031, 3, 0, 0x0000 },
   { s_dm032, s_dr032, 3, 0, 0x0000 },
   { s_dm033, s_dr033, 3, 0, 0x0000 },
   { s_dm034, s_dr034, 3, 0, 0x0000 },
   { s_dm035, s_dr035, 3, 0, 0x0000 },
   { s_dm036, s_dr036, 3, 0, 0x0000 },
   { s_dm037, s_dr037, 3, 0, 0x0000 },
   { s_dm038, s_dr038, 3, 0, 0x0000 },
   { s_dm039, s_dr039, 3, 0, 0x0000 },
   { s_dm040, s_dr040, 3, 0, 0x0000 },
   { s_dm041, s_dr041, 3, 0, 0x0000 },
   { s_dm042, s_dr042, 3, 0, 0x0000 },
   { s_dm043, s_dr043, 3, 0, 0x0000 },
   { s_dm044, s_dr044, 3, 0, 0x0000 },
   { s_dm045, s_dr045, 3, 0, 0x0000 },
   { s_dm046, s_dr046, 3, 0, 0x0000 },
   { s_dm047, s_dr047, 3, 0, 0x0000 },
   { s_dm048, s_dr048, 3, 0, 0x0000 },
   { s_dm049, s_dr049, 3, 0, 0x0000 },
   { s_dm050, s_dr050, 3, 0, 0x0000 },
   { s_dm051, s_dr051, 3, 0, 0x0000 },
   { s_dm052, s_dr052, 3, 0, 0x0000 },
   { s_dm053, s_dr053, 3, 0, 0x0000 },
   { s_dm054, s_dr054, 3, 0, 0x0000 },
   { s_dm055, s_dr055, 3, 0, 0x0000 },
   { s_dm056, s_dr056, 3, 0, 0x0000 },
   { s_dm057, s_dr057, 3, 0, 0x0000 },
   { s_dm058, s_dr058, 3, 0, 0x0000 },
   { s_dm059, s_dr059, 3, 0, 0x0000 },
   { s_dm060, s_dr060, 3, 0, 0x0000 },
   { s_dm061, s_dr061, 3, 0, 0x0000 },
   { s_dm062, s_dr062, 3, 0, 0x0000 },
   { s_dm063, s_dr063, 3, 0, 0x0000 },
   { s_dm064, s_dr064, 3, 0, 0x0000 },
   { s_dm065, s_dr065, 3, 0, 0x0000 },
   { s_dm066, s_dr066, 3, 0, 0x0000 },
   { s_dm067, s_dr067, 3, 0, 0x0000 },
   { s_dm068, s_dr068, 3, 0, 0x0000 },
   { s_dm069, s_dr069, 3, 0, 0x0000 },
   { s_dm070, s_dr070, 3, 0, 0x0000 },
   { s_dm071, s_dr071, 3, 0, 0x0000 },
   { s_dm072, s_dr072, 3, 0, 0x0000 },
   { s_dm073, s_dr073, 3, 0, 0x0000 },
   { s_dm074, NULL   , 3, 0, 0x0000 },
   { s_dm075, NULL   , 3, 0, 0x0000 },
   { s_dm076, NULL   , 3, 0, 0x0000 },
   { s_dm077, NULL   , 3, 0, 0x0000 },
   { s_dm078, NULL   , 3, 0, 0x0000 },
   { s_dm079, s_dr079, 3, 0, 0x0000 },
   { s_dm080, s_dr080, 3, 0, 0x0000 },
   { s_dm081, s_dr081, 3, 0, 0x0000 },
   { s_dm082, s_dr082, 3, 0, 0x0000 }
};

static HB_PP_TOKEN s_cm001[ 3 ] = {
   { s_cm001 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm001 + 2, NULL       , "EOL",                3, 1, 0xc015, 0 },
   { NULL       , NULL       , "x",                  1, 0, 0xe001, 1 }
};
static HB_PP_TOKEN s_cr001[ 6 ] = {
   { s_cr001 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr001 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr001 + 3, NULL       , "_SET_EOL",           8, 1, 0xc015, 0 },
   { s_cr001 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr001 + 5, NULL       , "x",                  1, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm002[ 5 ] = {
   { s_cm002 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm002 + 2, NULL       , "HARDCOMMIT",        10, 1, 0xc015, 0 },
   { s_cm002 + 3, NULL       , "(",                  1, 1, 0xc032, 0 },
   { s_cm002 + 4, NULL       , "x",                  1, 0, 0xe001, 1 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cr002[ 6 ] = {
   { s_cr002 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr002 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr002 + 3, NULL       , "_SET_HARDCOMMIT",   15, 1, 0xc015, 0 },
   { s_cr002 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr002 + 5, NULL       , "x",                  1, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm003[ 8 ] = {
   { s_cm003 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm003 + 2, NULL       , "HARDCOMMIT",        10, 1, 0xc015, 0 },
   { NULL       , s_cm003 + 3, "x",                  1, 0, 0xc003, 1 },
   { s_cm003 + 4, NULL       , "ON",                 2, 0, 0xc015, 0 },
   { s_cm003 + 5, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm003 + 6, NULL       , "OFF",                3, 0, 0xc015, 0 },
   { s_cm003 + 7, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { NULL       , NULL       , "&",                  1, 0, 0xc039, 0 }
};
static HB_PP_TOKEN s_cr003[ 6 ] = {
   { s_cr003 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr003 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr003 + 3, NULL       , "_SET_HARDCOMMIT",   15, 1, 0xc015, 0 },
   { s_cr003 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr003 + 5, NULL       , "x",                  1, 1, 0xc00e, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm004[ 3 ] = {
   { s_cm004 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm004 + 2, NULL       , "DBFLOCKSCHEME",     13, 1, 0xc015, 0 },
   { NULL       , NULL       , "TO",                 2, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr004[ 6 ] = {
   { s_cr004 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr004 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr004 + 3, NULL       , "_SET_DBFLOCKSCHEME",  18, 1, 0xc015, 0 },
   { s_cr004 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr004 + 5, NULL       , "0",                  1, 1, 0xc02a, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm005[ 4 ] = {
   { s_cm005 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm005 + 2, NULL       , "DBFLOCKSCHEME",     13, 1, 0xc015, 0 },
   { s_cm005 + 3, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { NULL       , NULL       , "x",                  1, 0, 0xe001, 1 }
};
static HB_PP_TOKEN s_cr005[ 6 ] = {
   { s_cr005 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr005 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr005 + 3, NULL       , "_SET_DBFLOCKSCHEME",  18, 1, 0xc015, 0 },
   { s_cr005 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr005 + 5, NULL       , "x",                  1, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm006[ 3 ] = {
   { s_cm006 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm006 + 2, NULL       , "DIRSEPARATOR",      12, 1, 0xc015, 0 },
   { NULL       , NULL       , "x",                  1, 0, 0xe001, 1 }
};
static HB_PP_TOKEN s_cr006[ 6 ] = {
   { s_cr006 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr006 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr006 + 3, NULL       , "_SET_DIRSEPARATOR",  17, 1, 0xc015, 0 },
   { s_cr006 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr006 + 5, NULL       , "x",                  1, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm007[ 5 ] = {
   { s_cm007 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm007 + 2, NULL       , "DIRCASE",            7, 1, 0xc015, 0 },
   { s_cm007 + 3, NULL       , "(",                  1, 1, 0xc032, 0 },
   { s_cm007 + 4, NULL       , "x",                  1, 0, 0xe001, 1 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cr007[ 6 ] = {
   { s_cr007 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr007 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr007 + 3, NULL       , "_SET_DIRCASE",      12, 1, 0xc015, 0 },
   { s_cr007 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr007 + 5, NULL       , "x",                  1, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm008[ 3 ] = {
   { s_cm008 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm008 + 2, NULL       , "DIRCASE",            7, 1, 0xc015, 0 },
   { NULL       , NULL       , "x",                  1, 0, 0xe005, 1 }
};
static HB_PP_TOKEN s_cr008[ 6 ] = {
   { s_cr008 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr008 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr008 + 3, NULL       , "_SET_DIRCASE",      12, 1, 0xc015, 0 },
   { s_cr008 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr008 + 5, NULL       , "x",                  1, 1, 0xc00e, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm009[ 5 ] = {
   { s_cm009 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm009 + 2, NULL       , "FILECASE",           8, 1, 0xc015, 0 },
   { s_cm009 + 3, NULL       , "(",                  1, 1, 0xc032, 0 },
   { s_cm009 + 4, NULL       , "x",                  1, 0, 0xe001, 1 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cr009[ 6 ] = {
   { s_cr009 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr009 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr009 + 3, NULL       , "_SET_FILECASE",     13, 1, 0xc015, 0 },
   { s_cr009 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr009 + 5, NULL       , "x",                  1, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm010[ 3 ] = {
   { s_cm010 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm010 + 2, NULL       , "FILECASE",           8, 1, 0xc015, 0 },
   { NULL       , NULL       , "x",                  1, 0, 0xe005, 1 }
};
static HB_PP_TOKEN s_cr010[ 6 ] = {
   { s_cr010 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr010 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr010 + 3, NULL       , "_SET_FILECASE",     13, 1, 0xc015, 0 },
   { s_cr010 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr010 + 5, NULL       , "x",                  1, 1, 0xc00e, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm011[ 29 ] = {
   { s_cm011 + 1, NULL       , "@",                  1, 1, 0xc038, 0 },
   { s_cm011 + 2, NULL       , "top",                3, 0, 0xe001, 1 },
   { s_cm011 + 3, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm011 + 4, NULL       , "left",               4, 0, 0xe001, 2 },
   { s_cm011 + 5, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm011 + 6, NULL       , "bottom",             6, 0, 0xe001, 7 },
   { s_cm011 + 7, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm011 + 8, NULL       , "right",              5, 0, 0xe001, 8 },
   { s_cm011 + 9, NULL       , "GET",                3, 1, 0xc015, 0 },
   { s_cm011 +10, NULL       , "v",                  1, 0, 0xe001, 3 },
   { s_cm011 +11, NULL       , "TBROWSE",            7, 1, 0xc015, 0 },
   { s_cm011 +12, NULL       , "oBrowse",            7, 0, 0xe001, 6 },
   { s_cm011 +13, NULL       , "ALIAS",              5, 2, 0xc015, 0 },
   { s_cm011 +14, NULL       , "a",                  1, 0, 0xe001, 9 },
   { s_cm011 +17, s_cm011 +15, "[",                  1, 1, 0xe007, 0 },
   { s_cm011 +16, NULL       , "VALID",              5, 0, 0xc015, 0 },
   { NULL       , NULL       , "valid",              5, 0, 0xe001, 4 },
   { s_cm011 +20, s_cm011 +18, "[",                  1, 1, 0xe007, 0 },
   { s_cm011 +19, NULL       , "WHEN",               4, 0, 0xc015, 0 },
   { NULL       , NULL       , "when",               4, 0, 0xe001, 5 },
   { s_cm011 +23, s_cm011 +21, "[",                  1, 1, 0xe007, 0 },
   { s_cm011 +22, NULL       , "MESSAGE",            7, 0, 0xc015, 0 },
   { NULL       , NULL       , "msg",                3, 0, 0xe001, 10 },
   { s_cm011 +26, s_cm011 +24, "[",                  1, 1, 0xe007, 0 },
   { s_cm011 +25, NULL       , "SEND",               4, 0, 0xc015, 0 },
   { NULL       , NULL       , "snd",                3, 0, 0xe001, 11 },
   { NULL       , s_cm011 +27, "[",                  1, 1, 0xe007, 0 },
   { s_cm011 +28, NULL       , "GUISEND",            7, 0, 0xc015, 0 },
   { NULL       , NULL       , "gsnd",               4, 0, 0xe001, 12 }
};
static HB_PP_TOKEN s_cr011[ 136 ] = {
   { s_cr011 + 1, NULL       , "SetPos",             6, 1, 0xc015, 0 },
   { s_cr011 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr011 + 3, NULL       , "top",                3, 1, 0xc00b, 1 },
   { s_cr011 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr011 + 5, NULL       , "left",               4, 1, 0xc00b, 2 },
   { s_cr011 + 6, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr011 + 7, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr011 + 8, NULL       , "AAdd",               4, 1, 0xc015, 0 },
   { s_cr011 + 9, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr011 +10, NULL       , "GetList",            7, 1, 0xc015, 0 },
   { s_cr011 +11, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr011 +12, NULL       , "_GET_",              5, 1, 0xc015, 0 },
   { s_cr011 +13, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr011 +14, NULL       , "v",                  1, 1, 0xc00b, 3 },
   { s_cr011 +15, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr011 +16, NULL       , "v",                  1, 1, 0xc00e, 3 },
   { s_cr011 +17, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr011 +18, NULL       , "NIL",                3, 1, 0xc015, 0 },
   { s_cr011 +19, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr011 +20, NULL       , "valid",              5, 1, 0xc00f, 4 },
   { s_cr011 +21, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr011 +22, NULL       , "when",               4, 1, 0xc00f, 5 },
   { s_cr011 +23, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr011 +24, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr011 +25, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr011 +26, NULL       , "oBrowse",            7, 1, 0xc00b, 6 },
   { s_cr011 +27, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr011 +28, NULL       , "ntop",               4, 0, 0xc015, 0 },
   { s_cr011 +29, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr011 +30, NULL       , "ATail",              5, 1, 0xc015, 0 },
   { s_cr011 +31, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr011 +32, NULL       , "Getlist",            7, 1, 0xc015, 0 },
   { s_cr011 +33, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr011 +34, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr011 +35, NULL       , "row",                3, 0, 0xc015, 0 },
   { s_cr011 +36, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr011 +37, NULL       , "oBrowse",            7, 1, 0xc00b, 6 },
   { s_cr011 +38, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr011 +39, NULL       , "nleft",              5, 0, 0xc015, 0 },
   { s_cr011 +40, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr011 +41, NULL       , "ATail",              5, 1, 0xc015, 0 },
   { s_cr011 +42, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr011 +43, NULL       , "Getlist",            7, 1, 0xc015, 0 },
   { s_cr011 +44, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr011 +45, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr011 +46, NULL       , "col",                3, 0, 0xc015, 0 },
   { s_cr011 +47, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr011 +48, NULL       , "oBrowse",            7, 1, 0xc00b, 6 },
   { s_cr011 +49, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr011 +50, NULL       , "nbottom",            7, 0, 0xc015, 0 },
   { s_cr011 +51, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr011 +52, NULL       , "bottom",             6, 1, 0xc00b, 7 },
   { s_cr011 +53, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr011 +54, NULL       , "oBrowse",            7, 1, 0xc00b, 6 },
   { s_cr011 +55, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr011 +56, NULL       , "nright",             6, 0, 0xc015, 0 },
   { s_cr011 +57, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr011 +58, NULL       , "right",              5, 1, 0xc00b, 8 },
   { s_cr011 +59, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr011 +60, NULL       , "oBrowse",            7, 1, 0xc00b, 6 },
   { s_cr011 +61, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr011 +62, NULL       , "Configure",          9, 0, 0xc015, 0 },
   { s_cr011 +63, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr011 +64, NULL       , ")",                  1, 0, 0xc033, 0 },
   { s_cr011 +65, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr011 +66, NULL       , "ATail",              5, 1, 0xc015, 0 },
   { s_cr011 +67, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr011 +68, NULL       , "GetList",            7, 1, 0xc015, 0 },
   { s_cr011 +69, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr011 +70, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr011 +71, NULL       , "Control",            7, 0, 0xc015, 0 },
   { s_cr011 +72, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr011 +73, NULL       , "oBrowse",            7, 1, 0xc00b, 6 },
   { s_cr011 +74, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr011 +75, NULL       , "ATail",              5, 1, 0xc015, 0 },
   { s_cr011 +76, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr011 +77, NULL       , "GetList",            7, 1, 0xc015, 0 },
   { s_cr011 +78, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr011 +79, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr011 +80, NULL       , "reader",             6, 0, 0xc015, 0 },
   { s_cr011 +81, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr011 +82, NULL       , "{",                  1, 1, 0xc036, 0 },
   { s_cr011 +83, NULL       , "|",                  1, 0, 0xc01b, 0 },
   { s_cr011 +84, NULL       , "a",                  1, 1, 0xc015, 0 },
   { s_cr011 +85, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr011 +86, NULL       , "b",                  1, 1, 0xc015, 0 },
   { s_cr011 +87, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr011 +88, NULL       , "c",                  1, 1, 0xc015, 0 },
   { s_cr011 +89, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr011 +90, NULL       , "d",                  1, 1, 0xc015, 0 },
   { s_cr011 +91, NULL       , "|",                  1, 1, 0xc01b, 0 },
   { s_cr011 +92, NULL       , "a",                  1, 1, 0xc00b, 9 },
   { s_cr011 +93, NULL       , "->",                 2, 0, 0xc03b, 0 },
   { s_cr011 +94, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr011 +95, NULL       , "TBReader",           8, 1, 0xc015, 0 },
   { s_cr011 +96, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr011 +97, NULL       , "a",                  1, 1, 0xc015, 0 },
   { s_cr011 +98, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr011 +99, NULL       , "b",                  1, 1, 0xc015, 0 },
   { s_cr011 +100, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr011 +101, NULL       , "c",                  1, 1, 0xc015, 0 },
   { s_cr011 +102, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr011 +103, NULL       , "d",                  1, 1, 0xc015, 0 },
   { s_cr011 +104, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr011 +105, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr011 +106, NULL       , "}",                  1, 1, 0xc037, 0 },
   { s_cr011 +118, s_cr011 +107, "[",                  1, 1, 0xc012, 0 },
   { s_cr011 +108, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr011 +109, NULL       , "ATail",              5, 1, 0xc015, 0 },
   { s_cr011 +110, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr011 +111, NULL       , "GetList",            7, 1, 0xc015, 0 },
   { s_cr011 +112, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr011 +113, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr011 +114, NULL       , "Control",            7, 0, 0xc015, 0 },
   { s_cr011 +115, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr011 +116, NULL       , "Message",            7, 0, 0xc015, 0 },
   { s_cr011 +117, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { NULL       , NULL       , "msg",                3, 1, 0xc00b, 10 },
   { s_cr011 +126, s_cr011 +119, "[",                  1, 1, 0xc012, 0 },
   { s_cr011 +120, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr011 +121, NULL       , "ATail",              5, 1, 0xc015, 0 },
   { s_cr011 +122, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr011 +123, NULL       , "GetList",            7, 1, 0xc015, 0 },
   { s_cr011 +124, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr011 +125, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { NULL       , NULL       , "snd",                3, 0, 0xc00b, 11 },
   { NULL       , s_cr011 +127, "[",                  1, 1, 0xc012, 0 },
   { s_cr011 +128, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr011 +129, NULL       , "ATail",              5, 1, 0xc015, 0 },
   { s_cr011 +130, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr011 +131, NULL       , "GetList",            7, 1, 0xc015, 0 },
   { s_cr011 +132, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr011 +133, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr011 +134, NULL       , "Control",            7, 0, 0xc015, 0 },
   { s_cr011 +135, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { NULL       , NULL       , "gsnd",               4, 0, 0xc00b, 12 }
};
static HB_PP_TOKEN s_cm012[ 27 ] = {
   { s_cm012 + 1, NULL       , "@",                  1, 1, 0xc038, 0 },
   { s_cm012 + 2, NULL       , "top",                3, 0, 0xe001, 1 },
   { s_cm012 + 3, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm012 + 4, NULL       , "left",               4, 0, 0xe001, 2 },
   { s_cm012 + 5, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm012 + 6, NULL       , "bottom",             6, 0, 0xe001, 7 },
   { s_cm012 + 7, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm012 + 8, NULL       , "right",              5, 0, 0xe001, 8 },
   { s_cm012 + 9, NULL       , "GET",                3, 1, 0xc015, 0 },
   { s_cm012 +10, NULL       , "v",                  1, 0, 0xe001, 3 },
   { s_cm012 +11, NULL       , "TBROWSE",            7, 1, 0xc015, 0 },
   { s_cm012 +12, NULL       , "oBrowse",            7, 0, 0xe001, 6 },
   { s_cm012 +15, s_cm012 +13, "[",                  1, 1, 0xe007, 0 },
   { s_cm012 +14, NULL       , "VALID",              5, 0, 0xc015, 0 },
   { NULL       , NULL       , "valid",              5, 0, 0xe001, 4 },
   { s_cm012 +18, s_cm012 +16, "[",                  1, 1, 0xe007, 0 },
   { s_cm012 +17, NULL       , "WHEN",               4, 0, 0xc015, 0 },
   { NULL       , NULL       , "when",               4, 0, 0xe001, 5 },
   { s_cm012 +21, s_cm012 +19, "[",                  1, 1, 0xe007, 0 },
   { s_cm012 +20, NULL       , "MESSAGE",            7, 0, 0xc015, 0 },
   { NULL       , NULL       , "msg",                3, 0, 0xe001, 9 },
   { s_cm012 +24, s_cm012 +22, "[",                  1, 1, 0xe007, 0 },
   { s_cm012 +23, NULL       , "SEND",               4, 0, 0xc015, 0 },
   { NULL       , NULL       , "snd",                3, 0, 0xe001, 10 },
   { NULL       , s_cm012 +25, "[",                  1, 1, 0xe007, 0 },
   { s_cm012 +26, NULL       , "GUISEND",            7, 0, 0xc015, 0 },
   { NULL       , NULL       , "gsnd",               4, 0, 0xe001, 11 }
};
static HB_PP_TOKEN s_cr012[ 132 ] = {
   { s_cr012 + 1, NULL       , "SetPos",             6, 1, 0xc015, 0 },
   { s_cr012 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr012 + 3, NULL       , "top",                3, 1, 0xc00b, 1 },
   { s_cr012 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr012 + 5, NULL       , "left",               4, 1, 0xc00b, 2 },
   { s_cr012 + 6, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr012 + 7, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr012 + 8, NULL       , "AAdd",               4, 1, 0xc015, 0 },
   { s_cr012 + 9, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr012 +10, NULL       , "GetList",            7, 1, 0xc015, 0 },
   { s_cr012 +11, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr012 +12, NULL       , "_GET_",              5, 1, 0xc015, 0 },
   { s_cr012 +13, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr012 +14, NULL       , "v",                  1, 1, 0xc00b, 3 },
   { s_cr012 +15, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr012 +16, NULL       , "v",                  1, 1, 0xc00e, 3 },
   { s_cr012 +17, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr012 +18, NULL       , "NIL",                3, 1, 0xc015, 0 },
   { s_cr012 +19, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr012 +20, NULL       , "valid",              5, 1, 0xc00f, 4 },
   { s_cr012 +21, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr012 +22, NULL       , "when",               4, 1, 0xc00f, 5 },
   { s_cr012 +23, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr012 +24, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr012 +25, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr012 +26, NULL       , "oBrowse",            7, 1, 0xc00b, 6 },
   { s_cr012 +27, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr012 +28, NULL       , "ntop",               4, 0, 0xc015, 0 },
   { s_cr012 +29, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr012 +30, NULL       , "ATail",              5, 1, 0xc015, 0 },
   { s_cr012 +31, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr012 +32, NULL       , "Getlist",            7, 1, 0xc015, 0 },
   { s_cr012 +33, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr012 +34, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr012 +35, NULL       , "row",                3, 0, 0xc015, 0 },
   { s_cr012 +36, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr012 +37, NULL       , "oBrowse",            7, 1, 0xc00b, 6 },
   { s_cr012 +38, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr012 +39, NULL       , "nleft",              5, 0, 0xc015, 0 },
   { s_cr012 +40, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr012 +41, NULL       , "ATail",              5, 1, 0xc015, 0 },
   { s_cr012 +42, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr012 +43, NULL       , "Getlist",            7, 1, 0xc015, 0 },
   { s_cr012 +44, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr012 +45, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr012 +46, NULL       , "col",                3, 0, 0xc015, 0 },
   { s_cr012 +47, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr012 +48, NULL       , "oBrowse",            7, 1, 0xc00b, 6 },
   { s_cr012 +49, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr012 +50, NULL       , "nbottom",            7, 0, 0xc015, 0 },
   { s_cr012 +51, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr012 +52, NULL       , "bottom",             6, 1, 0xc00b, 7 },
   { s_cr012 +53, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr012 +54, NULL       , "oBrowse",            7, 1, 0xc00b, 6 },
   { s_cr012 +55, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr012 +56, NULL       , "nright",             6, 0, 0xc015, 0 },
   { s_cr012 +57, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr012 +58, NULL       , "right",              5, 1, 0xc00b, 8 },
   { s_cr012 +59, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr012 +60, NULL       , "oBrowse",            7, 1, 0xc00b, 6 },
   { s_cr012 +61, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr012 +62, NULL       , "Configure",          9, 0, 0xc015, 0 },
   { s_cr012 +63, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr012 +64, NULL       , ")",                  1, 0, 0xc033, 0 },
   { s_cr012 +65, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr012 +66, NULL       , "ATail",              5, 1, 0xc015, 0 },
   { s_cr012 +67, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr012 +68, NULL       , "GetList",            7, 1, 0xc015, 0 },
   { s_cr012 +69, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr012 +70, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr012 +71, NULL       , "Control",            7, 0, 0xc015, 0 },
   { s_cr012 +72, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr012 +73, NULL       , "oBrowse",            7, 1, 0xc00b, 6 },
   { s_cr012 +74, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr012 +75, NULL       , "ATail",              5, 1, 0xc015, 0 },
   { s_cr012 +76, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr012 +77, NULL       , "GetList",            7, 1, 0xc015, 0 },
   { s_cr012 +78, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr012 +79, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr012 +80, NULL       , "reader",             6, 0, 0xc015, 0 },
   { s_cr012 +81, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr012 +82, NULL       , "{",                  1, 1, 0xc036, 0 },
   { s_cr012 +83, NULL       , "|",                  1, 0, 0xc01b, 0 },
   { s_cr012 +84, NULL       , "a",                  1, 1, 0xc015, 0 },
   { s_cr012 +85, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr012 +86, NULL       , "b",                  1, 1, 0xc015, 0 },
   { s_cr012 +87, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr012 +88, NULL       , "c",                  1, 1, 0xc015, 0 },
   { s_cr012 +89, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr012 +90, NULL       , "d",                  1, 1, 0xc015, 0 },
   { s_cr012 +91, NULL       , "|",                  1, 1, 0xc01b, 0 },
   { s_cr012 +92, NULL       , "TBReader",           8, 1, 0xc015, 0 },
   { s_cr012 +93, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr012 +94, NULL       , "a",                  1, 1, 0xc015, 0 },
   { s_cr012 +95, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr012 +96, NULL       , "b",                  1, 1, 0xc015, 0 },
   { s_cr012 +97, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr012 +98, NULL       , "c",                  1, 1, 0xc015, 0 },
   { s_cr012 +99, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr012 +100, NULL       , "d",                  1, 1, 0xc015, 0 },
   { s_cr012 +101, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr012 +102, NULL       , "}",                  1, 1, 0xc037, 0 },
   { s_cr012 +114, s_cr012 +103, "[",                  1, 1, 0xc012, 0 },
   { s_cr012 +104, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr012 +105, NULL       , "ATail",              5, 1, 0xc015, 0 },
   { s_cr012 +106, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr012 +107, NULL       , "GetList",            7, 1, 0xc015, 0 },
   { s_cr012 +108, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr012 +109, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr012 +110, NULL       , "Control",            7, 0, 0xc015, 0 },
   { s_cr012 +111, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr012 +112, NULL       , "Message",            7, 0, 0xc015, 0 },
   { s_cr012 +113, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { NULL       , NULL       , "msg",                3, 1, 0xc00b, 9 },
   { s_cr012 +122, s_cr012 +115, "[",                  1, 1, 0xc012, 0 },
   { s_cr012 +116, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr012 +117, NULL       , "ATail",              5, 1, 0xc015, 0 },
   { s_cr012 +118, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr012 +119, NULL       , "GetList",            7, 1, 0xc015, 0 },
   { s_cr012 +120, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr012 +121, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { NULL       , NULL       , "snd",                3, 0, 0xc00b, 10 },
   { NULL       , s_cr012 +123, "[",                  1, 1, 0xc012, 0 },
   { s_cr012 +124, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr012 +125, NULL       , "ATail",              5, 1, 0xc015, 0 },
   { s_cr012 +126, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr012 +127, NULL       , "GetList",            7, 1, 0xc015, 0 },
   { s_cr012 +128, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr012 +129, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr012 +130, NULL       , "Control",            7, 0, 0xc015, 0 },
   { s_cr012 +131, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { NULL       , NULL       , "gsnd",               4, 0, 0xc00b, 11 }
};
static HB_PP_TOKEN s_cm013[ 39 ] = {
   { s_cm013 + 1, NULL       , "@",                  1, 1, 0xc038, 0 },
   { s_cm013 + 2, NULL       , "top",                3, 0, 0xe001, 1 },
   { s_cm013 + 3, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm013 + 4, NULL       , "left",               4, 0, 0xe001, 2 },
   { s_cm013 + 5, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm013 + 6, NULL       , "bottom",             6, 0, 0xe001, 6 },
   { s_cm013 + 7, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm013 + 8, NULL       , "right",              5, 0, 0xe001, 7 },
   { s_cm013 + 9, NULL       , "GET",                3, 1, 0xc015, 0 },
   { s_cm013 +10, NULL       , "v",                  1, 0, 0xe001, 3 },
   { s_cm013 +11, NULL       , "RADIOGROUP",        10, 1, 0xc015, 0 },
   { s_cm013 +12, NULL       , "buttons",            7, 0, 0xe001, 8 },
   { s_cm013 +15, s_cm013 +13, "[",                  1, 1, 0xe007, 0 },
   { s_cm013 +14, NULL       , "VALID",              5, 0, 0xc015, 0 },
   { NULL       , NULL       , "valid",              5, 0, 0xe001, 4 },
   { s_cm013 +18, s_cm013 +16, "[",                  1, 1, 0xe007, 0 },
   { s_cm013 +17, NULL       , "WHEN",               4, 0, 0xc015, 0 },
   { NULL       , NULL       , "when",               4, 0, 0xe001, 5 },
   { s_cm013 +21, s_cm013 +19, "[",                  1, 1, 0xe007, 0 },
   { s_cm013 +20, NULL       , "CAPTION",            7, 0, 0xc015, 0 },
   { NULL       , NULL       , "cap",                3, 0, 0xe001, 9 },
   { s_cm013 +24, s_cm013 +22, "[",                  1, 1, 0xe007, 0 },
   { s_cm013 +23, NULL       , "MESSAGE",            7, 0, 0xc015, 0 },
   { NULL       , NULL       , "msg",                3, 0, 0xe001, 10 },
   { s_cm013 +27, s_cm013 +25, "[",                  1, 1, 0xe007, 0 },
   { s_cm013 +26, NULL       , "COLOR",              5, 0, 0xc015, 0 },
   { NULL       , NULL       , "clr",                3, 0, 0xe001, 11 },
   { s_cm013 +30, s_cm013 +28, "[",                  1, 1, 0xe007, 0 },
   { s_cm013 +29, NULL       , "FOCUS",              5, 0, 0xc015, 0 },
   { NULL       , NULL       , "fb",                 2, 0, 0xe001, 12 },
   { s_cm013 +33, s_cm013 +31, "[",                  1, 1, 0xe007, 0 },
   { s_cm013 +32, NULL       , "STYLE",              5, 0, 0xc015, 0 },
   { NULL       , NULL       , "stl",                3, 0, 0xe001, 13 },
   { s_cm013 +36, s_cm013 +34, "[",                  1, 1, 0xe007, 0 },
   { s_cm013 +35, NULL       , "SEND",               4, 0, 0xc015, 0 },
   { NULL       , NULL       , "snd",                3, 0, 0xe001, 14 },
   { NULL       , s_cm013 +37, "[",                  1, 1, 0xe007, 0 },
   { s_cm013 +38, NULL       , "GUISEND",            7, 0, 0xc015, 0 },
   { NULL       , NULL       , "gsnd",               4, 0, 0xe001, 15 }
};
static HB_PP_TOKEN s_cr013[ 124 ] = {
   { s_cr013 + 1, NULL       , "SetPos",             6, 1, 0xc015, 0 },
   { s_cr013 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr013 + 3, NULL       , "top",                3, 1, 0xc00b, 1 },
   { s_cr013 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr013 + 5, NULL       , "left",               4, 1, 0xc00b, 2 },
   { s_cr013 + 6, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr013 + 7, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr013 + 8, NULL       , "AAdd",               4, 1, 0xc015, 0 },
   { s_cr013 + 9, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr013 +10, NULL       , "GetList",            7, 1, 0xc015, 0 },
   { s_cr013 +11, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr013 +12, NULL       , "_GET_",              5, 1, 0xc015, 0 },
   { s_cr013 +13, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr013 +14, NULL       , "v",                  1, 1, 0xc00b, 3 },
   { s_cr013 +15, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr013 +16, NULL       , "v",                  1, 1, 0xc00e, 3 },
   { s_cr013 +17, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr013 +18, NULL       , "NIL",                3, 1, 0xc015, 0 },
   { s_cr013 +19, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr013 +20, NULL       , "valid",              5, 1, 0xc00f, 4 },
   { s_cr013 +21, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr013 +22, NULL       , "when",               4, 1, 0xc00f, 5 },
   { s_cr013 +23, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr013 +24, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr013 +25, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr013 +26, NULL       , "ATail",              5, 1, 0xc015, 0 },
   { s_cr013 +27, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr013 +28, NULL       , "GetList",            7, 1, 0xc015, 0 },
   { s_cr013 +29, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr013 +30, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr013 +31, NULL       , "Control",            7, 0, 0xc015, 0 },
   { s_cr013 +32, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr013 +33, NULL       , "_RadioGrp_",        10, 1, 0xc015, 0 },
   { s_cr013 +34, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr013 +35, NULL       , "ATail",              5, 1, 0xc015, 0 },
   { s_cr013 +36, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr013 +37, NULL       , "Getlist",            7, 1, 0xc015, 0 },
   { s_cr013 +38, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr013 +39, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr013 +40, NULL       , "row",                3, 0, 0xc015, 0 },
   { s_cr013 +41, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr013 +42, NULL       , "ATail",              5, 1, 0xc015, 0 },
   { s_cr013 +43, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr013 +44, NULL       , "Getlist",            7, 1, 0xc015, 0 },
   { s_cr013 +45, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr013 +46, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr013 +47, NULL       , "col",                3, 0, 0xc015, 0 },
   { s_cr013 +48, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr013 +49, NULL       , "bottom",             6, 1, 0xc00b, 6 },
   { s_cr013 +50, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr013 +51, NULL       , "right",              5, 1, 0xc00b, 7 },
   { s_cr013 +52, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr013 +53, NULL       , "v",                  1, 1, 0xc00b, 3 },
   { s_cr013 +54, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr013 +55, NULL       , "buttons",            7, 1, 0xc00b, 8 },
   { s_cr013 +56, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr013 +57, NULL       , "cap",                3, 1, 0xc00b, 9 },
   { s_cr013 +58, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr013 +59, NULL       , "msg",                3, 1, 0xc00b, 10 },
   { s_cr013 +60, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr013 +61, NULL       , "clr",                3, 1, 0xc00b, 11 },
   { s_cr013 +62, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr013 +63, NULL       , "fb",                 2, 1, 0xc00f, 12 },
   { s_cr013 +64, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr013 +65, NULL       , "stl",                3, 1, 0xc00b, 13 },
   { s_cr013 +66, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr013 +67, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr013 +68, NULL       , "ATail",              5, 1, 0xc015, 0 },
   { s_cr013 +69, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr013 +70, NULL       , "GetList",            7, 1, 0xc015, 0 },
   { s_cr013 +71, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr013 +72, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr013 +73, NULL       , "reader",             6, 0, 0xc015, 0 },
   { s_cr013 +74, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr013 +75, NULL       , "{",                  1, 1, 0xc036, 0 },
   { s_cr013 +76, NULL       , "|",                  1, 0, 0xc01b, 0 },
   { s_cr013 +77, NULL       , "a",                  1, 1, 0xc015, 0 },
   { s_cr013 +78, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr013 +79, NULL       , "b",                  1, 1, 0xc015, 0 },
   { s_cr013 +80, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr013 +81, NULL       , "c",                  1, 1, 0xc015, 0 },
   { s_cr013 +82, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr013 +83, NULL       , "d",                  1, 1, 0xc015, 0 },
   { s_cr013 +84, NULL       , "|",                  1, 1, 0xc01b, 0 },
   { s_cr013 +85, NULL       , "GUIReader",          9, 1, 0xc015, 0 },
   { s_cr013 +86, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr013 +87, NULL       , "a",                  1, 1, 0xc015, 0 },
   { s_cr013 +88, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr013 +89, NULL       , "b",                  1, 1, 0xc015, 0 },
   { s_cr013 +90, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr013 +91, NULL       , "c",                  1, 1, 0xc015, 0 },
   { s_cr013 +92, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr013 +93, NULL       , "d",                  1, 1, 0xc015, 0 },
   { s_cr013 +94, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr013 +95, NULL       , "}",                  1, 1, 0xc037, 0 },
   { s_cr013 +96, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr013 +104, s_cr013 +97, "[",                  1, 1, 0xc012, 0 },
   { s_cr013 +98, NULL       , "ATail",              5, 1, 0xc015, 0 },
   { s_cr013 +99, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr013 +100, NULL       , "GetList",            7, 1, 0xc015, 0 },
   { s_cr013 +101, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr013 +102, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr013 +103, NULL       , "snd",                3, 0, 0xc00b, 14 },
   { NULL       , NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr013 +114, s_cr013 +105, "[",                  1, 1, 0xc012, 0 },
   { s_cr013 +106, NULL       , "ATail",              5, 1, 0xc015, 0 },
   { s_cr013 +107, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr013 +108, NULL       , "GetList",            7, 1, 0xc015, 0 },
   { s_cr013 +109, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr013 +110, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr013 +111, NULL       , "Control",            7, 0, 0xc015, 0 },
   { s_cr013 +112, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr013 +113, NULL       , "gsnd",               4, 0, 0xc00b, 15 },
   { NULL       , NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr013 +115, NULL       , "ATail",              5, 1, 0xc015, 0 },
   { s_cr013 +116, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr013 +117, NULL       , "GetList",            7, 1, 0xc015, 0 },
   { s_cr013 +118, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr013 +119, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr013 +120, NULL       , "Control",            7, 0, 0xc015, 0 },
   { s_cr013 +121, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr013 +122, NULL       , "Display",            7, 0, 0xc015, 0 },
   { s_cr013 +123, NULL       , "(",                  1, 0, 0xc032, 0 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm014[ 58 ] = {
   { s_cm014 + 1, NULL       , "@",                  1, 1, 0xc038, 0 },
   { s_cm014 + 2, NULL       , "row",                3, 0, 0xe001, 1 },
   { s_cm014 + 3, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm014 + 4, NULL       , "col",                3, 0, 0xe001, 2 },
   { s_cm014 + 5, NULL       , "GET",                3, 1, 0xc015, 0 },
   { s_cm014 + 6, NULL       , "v",                  1, 0, 0xe001, 3 },
   { s_cm014 + 7, NULL       , "PUSHBUTTON",        10, 1, 0xc015, 0 },
   { s_cm014 +10, s_cm014 + 8, "[",                  1, 1, 0xe007, 0 },
   { s_cm014 + 9, NULL       , "VALID",              5, 0, 0xc015, 0 },
   { NULL       , NULL       , "valid",              5, 0, 0xe001, 4 },
   { s_cm014 +13, s_cm014 +11, "[",                  1, 1, 0xe007, 0 },
   { s_cm014 +12, NULL       , "WHEN",               4, 0, 0xc015, 0 },
   { NULL       , NULL       , "when",               4, 0, 0xe001, 5 },
   { s_cm014 +16, s_cm014 +14, "[",                  1, 1, 0xe007, 0 },
   { s_cm014 +15, NULL       , "CAPTION",            7, 0, 0xc015, 0 },
   { NULL       , NULL       , "cap",                3, 0, 0xe001, 6 },
   { s_cm014 +19, s_cm014 +17, "[",                  1, 1, 0xe007, 0 },
   { s_cm014 +18, NULL       , "MESSAGE",            7, 0, 0xc015, 0 },
   { NULL       , NULL       , "msg",                3, 0, 0xe001, 7 },
   { s_cm014 +22, s_cm014 +20, "[",                  1, 1, 0xe007, 0 },
   { s_cm014 +21, NULL       , "COLOR",              5, 0, 0xc015, 0 },
   { NULL       , NULL       , "clr",                3, 0, 0xe001, 8 },
   { s_cm014 +25, s_cm014 +23, "[",                  1, 1, 0xe007, 0 },
   { s_cm014 +24, NULL       , "FOCUS",              5, 0, 0xc015, 0 },
   { NULL       , NULL       , "fb",                 2, 0, 0xe001, 9 },
   { s_cm014 +28, s_cm014 +26, "[",                  1, 1, 0xe007, 0 },
   { s_cm014 +27, NULL       , "STATE",              5, 0, 0xc015, 0 },
   { NULL       , NULL       , "sb",                 2, 0, 0xe001, 10 },
   { s_cm014 +31, s_cm014 +29, "[",                  1, 1, 0xe007, 0 },
   { s_cm014 +30, NULL       , "STYLE",              5, 0, 0xc015, 0 },
   { NULL       , NULL       , "stl",                3, 0, 0xe001, 11 },
   { s_cm014 +34, s_cm014 +32, "[",                  1, 1, 0xe007, 0 },
   { s_cm014 +33, NULL       , "SEND",               4, 0, 0xc015, 0 },
   { NULL       , NULL       , "snd",                3, 0, 0xe001, 19 },
   { s_cm014 +37, s_cm014 +35, "[",                  1, 1, 0xe007, 0 },
   { s_cm014 +36, NULL       , "GUISEND",            7, 0, 0xc015, 0 },
   { NULL       , NULL       , "gsnd",               4, 0, 0xe001, 20 },
   { s_cm014 +40, s_cm014 +38, "[",                  1, 1, 0xe007, 0 },
   { s_cm014 +39, NULL       , "BITMAP",             6, 0, 0xc015, 0 },
   { NULL       , NULL       , "bmap",               4, 0, 0xe001, 16 },
   { s_cm014 +46, s_cm014 +41, "[",                  1, 1, 0xe007, 0 },
   { s_cm014 +42, NULL       , "SIZE",               4, 0, 0xc015, 0 },
   { s_cm014 +43, NULL       , "X",                  1, 1, 0xc015, 0 },
   { s_cm014 +44, NULL       , "sX",                 2, 0, 0xe001, 12 },
   { s_cm014 +45, NULL       , "Y",                  1, 1, 0xc015, 0 },
   { NULL       , NULL       , "sY",                 2, 0, 0xe001, 13 },
   { s_cm014 +52, s_cm014 +47, "[",                  1, 1, 0xe007, 0 },
   { s_cm014 +48, NULL       , "CAPOFF",             6, 0, 0xc015, 0 },
   { s_cm014 +49, NULL       , "X",                  1, 1, 0xc015, 0 },
   { s_cm014 +50, NULL       , "cX",                 2, 0, 0xe001, 14 },
   { s_cm014 +51, NULL       , "Y",                  1, 1, 0xc015, 0 },
   { NULL       , NULL       , "cY",                 2, 0, 0xe001, 15 },
   { NULL       , s_cm014 +53, "[",                  1, 1, 0xe007, 0 },
   { s_cm014 +54, NULL       , "BMPOFF",             6, 0, 0xc015, 0 },
   { s_cm014 +55, NULL       , "X",                  1, 1, 0xc015, 0 },
   { s_cm014 +56, NULL       , "bX",                 2, 0, 0xe001, 17 },
   { s_cm014 +57, NULL       , "Y",                  1, 1, 0xc015, 0 },
   { NULL       , NULL       , "bY",                 2, 0, 0xe001, 18 }
};
static HB_PP_TOKEN s_cr014[ 118 ] = {
   { s_cr014 + 1, NULL       , "SetPos",             6, 1, 0xc015, 0 },
   { s_cr014 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr014 + 3, NULL       , "row",                3, 1, 0xc00b, 1 },
   { s_cr014 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr014 + 5, NULL       , "col",                3, 1, 0xc00b, 2 },
   { s_cr014 + 6, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr014 + 7, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr014 + 8, NULL       , "AAdd",               4, 1, 0xc015, 0 },
   { s_cr014 + 9, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr014 +10, NULL       , "GetList",            7, 1, 0xc015, 0 },
   { s_cr014 +11, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr014 +12, NULL       , "_GET_",              5, 1, 0xc015, 0 },
   { s_cr014 +13, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr014 +14, NULL       , "v",                  1, 1, 0xc00b, 3 },
   { s_cr014 +15, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr014 +16, NULL       , "v",                  1, 1, 0xc00e, 3 },
   { s_cr014 +17, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr014 +18, NULL       , "NIL",                3, 1, 0xc015, 0 },
   { s_cr014 +19, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr014 +20, NULL       , "valid",              5, 1, 0xc00f, 4 },
   { s_cr014 +21, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr014 +22, NULL       , "when",               4, 1, 0xc00f, 5 },
   { s_cr014 +23, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr014 +24, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr014 +25, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr014 +26, NULL       , "ATail",              5, 1, 0xc015, 0 },
   { s_cr014 +27, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr014 +28, NULL       , "GetList",            7, 1, 0xc015, 0 },
   { s_cr014 +29, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr014 +30, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr014 +31, NULL       , "Control",            7, 0, 0xc015, 0 },
   { s_cr014 +32, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr014 +33, NULL       , "_PushButt_",        10, 1, 0xc015, 0 },
   { s_cr014 +34, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr014 +35, NULL       , "cap",                3, 1, 0xc00b, 6 },
   { s_cr014 +36, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr014 +37, NULL       , "msg",                3, 1, 0xc00b, 7 },
   { s_cr014 +38, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr014 +39, NULL       , "clr",                3, 1, 0xc00b, 8 },
   { s_cr014 +40, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr014 +41, NULL       , "fb",                 2, 1, 0xc00f, 9 },
   { s_cr014 +42, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr014 +43, NULL       , "sb",                 2, 1, 0xc00f, 10 },
   { s_cr014 +44, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr014 +45, NULL       , "stl",                3, 1, 0xc00b, 11 },
   { s_cr014 +46, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr014 +47, NULL       , "sX",                 2, 1, 0xc00b, 12 },
   { s_cr014 +48, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr014 +49, NULL       , "sY",                 2, 1, 0xc00b, 13 },
   { s_cr014 +50, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr014 +51, NULL       , "cX",                 2, 1, 0xc00b, 14 },
   { s_cr014 +52, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr014 +53, NULL       , "cY",                 2, 1, 0xc00b, 15 },
   { s_cr014 +54, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr014 +55, NULL       , "bmap",               4, 1, 0xc00b, 16 },
   { s_cr014 +56, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr014 +57, NULL       , "bX",                 2, 1, 0xc00b, 17 },
   { s_cr014 +58, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr014 +59, NULL       , "bY",                 2, 1, 0xc00b, 18 },
   { s_cr014 +60, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr014 +61, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr014 +62, NULL       , "ATail",              5, 1, 0xc015, 0 },
   { s_cr014 +63, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr014 +64, NULL       , "GetList",            7, 1, 0xc015, 0 },
   { s_cr014 +65, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr014 +66, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr014 +67, NULL       , "reader",             6, 0, 0xc015, 0 },
   { s_cr014 +68, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr014 +69, NULL       , "{",                  1, 1, 0xc036, 0 },
   { s_cr014 +70, NULL       , "|",                  1, 0, 0xc01b, 0 },
   { s_cr014 +71, NULL       , "a",                  1, 1, 0xc015, 0 },
   { s_cr014 +72, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr014 +73, NULL       , "b",                  1, 1, 0xc015, 0 },
   { s_cr014 +74, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr014 +75, NULL       , "c",                  1, 1, 0xc015, 0 },
   { s_cr014 +76, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr014 +77, NULL       , "d",                  1, 1, 0xc015, 0 },
   { s_cr014 +78, NULL       , "|",                  1, 1, 0xc01b, 0 },
   { s_cr014 +79, NULL       , "GUIReader",          9, 1, 0xc015, 0 },
   { s_cr014 +80, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr014 +81, NULL       , "a",                  1, 1, 0xc015, 0 },
   { s_cr014 +82, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr014 +83, NULL       , "b",                  1, 1, 0xc015, 0 },
   { s_cr014 +84, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr014 +85, NULL       , "c",                  1, 1, 0xc015, 0 },
   { s_cr014 +86, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr014 +87, NULL       , "d",                  1, 1, 0xc015, 0 },
   { s_cr014 +88, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr014 +89, NULL       , "}",                  1, 1, 0xc037, 0 },
   { s_cr014 +90, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr014 +98, s_cr014 +91, "[",                  1, 1, 0xc012, 0 },
   { s_cr014 +92, NULL       , "ATail",              5, 1, 0xc015, 0 },
   { s_cr014 +93, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr014 +94, NULL       , "GetList",            7, 1, 0xc015, 0 },
   { s_cr014 +95, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr014 +96, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr014 +97, NULL       , "snd",                3, 0, 0xc00b, 19 },
   { NULL       , NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr014 +108, s_cr014 +99, "[",                  1, 1, 0xc012, 0 },
   { s_cr014 +100, NULL       , "ATail",              5, 1, 0xc015, 0 },
   { s_cr014 +101, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr014 +102, NULL       , "GetList",            7, 1, 0xc015, 0 },
   { s_cr014 +103, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr014 +104, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr014 +105, NULL       , "Control",            7, 0, 0xc015, 0 },
   { s_cr014 +106, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr014 +107, NULL       , "gsnd",               4, 0, 0xc00b, 20 },
   { NULL       , NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr014 +109, NULL       , "ATail",              5, 1, 0xc015, 0 },
   { s_cr014 +110, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr014 +111, NULL       , "GetList",            7, 1, 0xc015, 0 },
   { s_cr014 +112, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr014 +113, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr014 +114, NULL       , "Control",            7, 0, 0xc015, 0 },
   { s_cr014 +115, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr014 +116, NULL       , "Display",            7, 0, 0xc015, 0 },
   { s_cr014 +117, NULL       , "(",                  1, 0, 0xc032, 0 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm015[ 48 ] = {
   { s_cm015 + 1, NULL       , "@",                  1, 1, 0xc038, 0 },
   { s_cm015 + 2, NULL       , "top",                3, 0, 0xe001, 1 },
   { s_cm015 + 3, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm015 + 4, NULL       , "left",               4, 0, 0xe001, 2 },
   { s_cm015 + 5, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm015 + 6, NULL       , "bottom",             6, 0, 0xe001, 6 },
   { s_cm015 + 7, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm015 + 8, NULL       , "right",              5, 0, 0xe001, 7 },
   { s_cm015 + 9, NULL       , "GET",                3, 1, 0xc015, 0 },
   { s_cm015 +10, NULL       , "v",                  1, 0, 0xe001, 3 },
   { s_cm015 +11, NULL       , "LISTBOX",            7, 1, 0xc015, 0 },
   { s_cm015 +12, NULL       , "items",              5, 0, 0xe001, 8 },
   { s_cm015 +15, s_cm015 +13, "[",                  1, 1, 0xe007, 0 },
   { s_cm015 +14, NULL       , "VALID",              5, 0, 0xc015, 0 },
   { NULL       , NULL       , "valid",              5, 0, 0xe001, 4 },
   { s_cm015 +18, s_cm015 +16, "[",                  1, 1, 0xe007, 0 },
   { s_cm015 +17, NULL       , "WHEN",               4, 0, 0xc015, 0 },
   { NULL       , NULL       , "when",               4, 0, 0xe001, 5 },
   { s_cm015 +21, s_cm015 +19, "[",                  1, 1, 0xe007, 0 },
   { s_cm015 +20, NULL       , "CAPTION",            7, 0, 0xc015, 0 },
   { NULL       , NULL       , "cap",                3, 0, 0xe001, 9 },
   { s_cm015 +24, s_cm015 +22, "[",                  1, 1, 0xe007, 0 },
   { s_cm015 +23, NULL       , "MESSAGE",            7, 0, 0xc015, 0 },
   { NULL       , NULL       , "msg",                3, 0, 0xe001, 10 },
   { s_cm015 +27, s_cm015 +25, "[",                  1, 1, 0xe007, 0 },
   { s_cm015 +26, NULL       , "COLOR",              5, 0, 0xc015, 0 },
   { NULL       , NULL       , "clr",                3, 0, 0xe001, 11 },
   { s_cm015 +30, s_cm015 +28, "[",                  1, 1, 0xe007, 0 },
   { s_cm015 +29, NULL       , "FOCUS",              5, 0, 0xc015, 0 },
   { NULL       , NULL       , "fb",                 2, 0, 0xe001, 12 },
   { s_cm015 +33, s_cm015 +31, "[",                  1, 1, 0xe007, 0 },
   { s_cm015 +32, NULL       , "STATE",              5, 0, 0xc015, 0 },
   { NULL       , NULL       , "sb",                 2, 0, 0xe001, 13 },
   { s_cm015 +36, s_cm015 +34, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm015 +35, "dd",                 2, 0, 0xc003, 14 },
   { NULL       , NULL       , "DROPDOWN",           8, 0, 0xc015, 0 },
   { s_cm015 +39, s_cm015 +37, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm015 +38, "sbar",               4, 0, 0xc003, 15 },
   { NULL       , NULL       , "SCROLLBAR",          9, 0, 0xc015, 0 },
   { s_cm015 +42, s_cm015 +40, "[",                  1, 1, 0xe007, 0 },
   { s_cm015 +41, NULL       , "SEND",               4, 0, 0xc015, 0 },
   { NULL       , NULL       , "snd",                3, 0, 0xe001, 17 },
   { s_cm015 +45, s_cm015 +43, "[",                  1, 1, 0xe007, 0 },
   { s_cm015 +44, NULL       , "GUISEND",            7, 0, 0xc015, 0 },
   { NULL       , NULL       , "gsnd",               4, 0, 0xe001, 18 },
   { NULL       , s_cm015 +46, "[",                  1, 1, 0xe007, 0 },
   { s_cm015 +47, NULL       , "BITMAP",             6, 0, 0xc015, 0 },
   { NULL       , NULL       , "bmap",               4, 0, 0xe001, 16 }
};
static HB_PP_TOKEN s_cr015[ 130 ] = {
   { s_cr015 + 1, NULL       , "SetPos",             6, 1, 0xc015, 0 },
   { s_cr015 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr015 + 3, NULL       , "top",                3, 1, 0xc00b, 1 },
   { s_cr015 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr015 + 5, NULL       , "left",               4, 1, 0xc00b, 2 },
   { s_cr015 + 6, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr015 + 7, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr015 + 8, NULL       , "AAdd",               4, 1, 0xc015, 0 },
   { s_cr015 + 9, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr015 +10, NULL       , "GetList",            7, 1, 0xc015, 0 },
   { s_cr015 +11, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr015 +12, NULL       , "_GET_",              5, 1, 0xc015, 0 },
   { s_cr015 +13, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr015 +14, NULL       , "v",                  1, 1, 0xc00b, 3 },
   { s_cr015 +15, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr015 +16, NULL       , "v",                  1, 1, 0xc00e, 3 },
   { s_cr015 +17, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr015 +18, NULL       , "NIL",                3, 1, 0xc015, 0 },
   { s_cr015 +19, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr015 +20, NULL       , "valid",              5, 1, 0xc00f, 4 },
   { s_cr015 +21, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr015 +22, NULL       , "when",               4, 1, 0xc00f, 5 },
   { s_cr015 +23, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr015 +24, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr015 +25, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr015 +26, NULL       , "ATail",              5, 1, 0xc015, 0 },
   { s_cr015 +27, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr015 +28, NULL       , "GetList",            7, 1, 0xc015, 0 },
   { s_cr015 +29, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr015 +30, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr015 +31, NULL       , "Control",            7, 0, 0xc015, 0 },
   { s_cr015 +32, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr015 +33, NULL       , "_ListBox_",          9, 1, 0xc015, 0 },
   { s_cr015 +34, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr015 +35, NULL       , "ATail",              5, 1, 0xc015, 0 },
   { s_cr015 +36, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr015 +37, NULL       , "Getlist",            7, 1, 0xc015, 0 },
   { s_cr015 +38, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr015 +39, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr015 +40, NULL       , "row",                3, 0, 0xc015, 0 },
   { s_cr015 +41, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr015 +42, NULL       , "ATail",              5, 1, 0xc015, 0 },
   { s_cr015 +43, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr015 +44, NULL       , "Getlist",            7, 1, 0xc015, 0 },
   { s_cr015 +45, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr015 +46, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr015 +47, NULL       , "col",                3, 0, 0xc015, 0 },
   { s_cr015 +48, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr015 +49, NULL       , "bottom",             6, 1, 0xc00b, 6 },
   { s_cr015 +50, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr015 +51, NULL       , "right",              5, 1, 0xc00b, 7 },
   { s_cr015 +52, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr015 +53, NULL       , "v",                  1, 1, 0xc00b, 3 },
   { s_cr015 +54, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr015 +55, NULL       , "items",              5, 1, 0xc00b, 8 },
   { s_cr015 +56, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr015 +57, NULL       , "cap",                3, 1, 0xc00b, 9 },
   { s_cr015 +58, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr015 +59, NULL       , "msg",                3, 1, 0xc00b, 10 },
   { s_cr015 +60, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr015 +61, NULL       , "clr",                3, 1, 0xc00b, 11 },
   { s_cr015 +62, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr015 +63, NULL       , "fb",                 2, 1, 0xc00f, 12 },
   { s_cr015 +64, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr015 +65, NULL       , "sb",                 2, 1, 0xc00f, 13 },
   { s_cr015 +66, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr015 +67, NULL       , "dd",                 2, 1, 0xc010, 14 },
   { s_cr015 +68, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr015 +69, NULL       , "sbar",               4, 1, 0xc010, 15 },
   { s_cr015 +70, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr015 +71, NULL       , "bmap",               4, 1, 0xc00b, 16 },
   { s_cr015 +72, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr015 +73, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr015 +74, NULL       , "ATail",              5, 1, 0xc015, 0 },
   { s_cr015 +75, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr015 +76, NULL       , "GetList",            7, 1, 0xc015, 0 },
   { s_cr015 +77, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr015 +78, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr015 +79, NULL       , "reader",             6, 0, 0xc015, 0 },
   { s_cr015 +80, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr015 +81, NULL       , "{",                  1, 1, 0xc036, 0 },
   { s_cr015 +82, NULL       , "|",                  1, 0, 0xc01b, 0 },
   { s_cr015 +83, NULL       , "a",                  1, 1, 0xc015, 0 },
   { s_cr015 +84, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr015 +85, NULL       , "b",                  1, 1, 0xc015, 0 },
   { s_cr015 +86, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr015 +87, NULL       , "c",                  1, 1, 0xc015, 0 },
   { s_cr015 +88, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr015 +89, NULL       , "d",                  1, 1, 0xc015, 0 },
   { s_cr015 +90, NULL       , "|",                  1, 1, 0xc01b, 0 },
   { s_cr015 +91, NULL       , "GUIReader",          9, 1, 0xc015, 0 },
   { s_cr015 +92, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr015 +93, NULL       , "a",                  1, 1, 0xc015, 0 },
   { s_cr015 +94, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr015 +95, NULL       , "b",                  1, 1, 0xc015, 0 },
   { s_cr015 +96, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr015 +97, NULL       , "c",                  1, 1, 0xc015, 0 },
   { s_cr015 +98, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr015 +99, NULL       , "d",                  1, 1, 0xc015, 0 },
   { s_cr015 +100, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr015 +101, NULL       , "}",                  1, 1, 0xc037, 0 },
   { s_cr015 +102, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr015 +110, s_cr015 +103, "[",                  1, 1, 0xc012, 0 },
   { s_cr015 +104, NULL       , "ATail",              5, 1, 0xc015, 0 },
   { s_cr015 +105, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr015 +106, NULL       , "GetList",            7, 1, 0xc015, 0 },
   { s_cr015 +107, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr015 +108, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr015 +109, NULL       , "snd",                3, 0, 0xc00b, 17 },
   { NULL       , NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr015 +120, s_cr015 +111, "[",                  1, 1, 0xc012, 0 },
   { s_cr015 +112, NULL       , "ATail",              5, 1, 0xc015, 0 },
   { s_cr015 +113, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr015 +114, NULL       , "GetList",            7, 1, 0xc015, 0 },
   { s_cr015 +115, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr015 +116, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr015 +117, NULL       , "Control",            7, 0, 0xc015, 0 },
   { s_cr015 +118, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr015 +119, NULL       , "gsnd",               4, 0, 0xc00b, 18 },
   { NULL       , NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr015 +121, NULL       , "ATail",              5, 1, 0xc015, 0 },
   { s_cr015 +122, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr015 +123, NULL       , "GetList",            7, 1, 0xc015, 0 },
   { s_cr015 +124, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr015 +125, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr015 +126, NULL       , "Control",            7, 0, 0xc015, 0 },
   { s_cr015 +127, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr015 +128, NULL       , "Display",            7, 0, 0xc015, 0 },
   { s_cr015 +129, NULL       , "(",                  1, 0, 0xc032, 0 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm016[ 40 ] = {
   { s_cm016 + 1, NULL       , "@",                  1, 1, 0xc038, 0 },
   { s_cm016 + 2, NULL       , "row",                3, 0, 0xe001, 1 },
   { s_cm016 + 3, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm016 + 4, NULL       , "col",                3, 0, 0xe001, 2 },
   { s_cm016 + 5, NULL       , "GET",                3, 1, 0xc015, 0 },
   { s_cm016 + 6, NULL       , "v",                  1, 0, 0xe001, 3 },
   { s_cm016 + 7, NULL       , "CHECKBOX",           8, 1, 0xc015, 0 },
   { s_cm016 +10, s_cm016 + 8, "[",                  1, 1, 0xe007, 0 },
   { s_cm016 + 9, NULL       , "VALID",              5, 0, 0xc015, 0 },
   { NULL       , NULL       , "valid",              5, 0, 0xe001, 4 },
   { s_cm016 +13, s_cm016 +11, "[",                  1, 1, 0xe007, 0 },
   { s_cm016 +12, NULL       , "WHEN",               4, 0, 0xc015, 0 },
   { NULL       , NULL       , "when",               4, 0, 0xe001, 5 },
   { s_cm016 +16, s_cm016 +14, "[",                  1, 1, 0xe007, 0 },
   { s_cm016 +15, NULL       , "CAPTION",            7, 0, 0xc015, 0 },
   { NULL       , NULL       , "cap",                3, 0, 0xe001, 6 },
   { s_cm016 +19, s_cm016 +17, "[",                  1, 1, 0xe007, 0 },
   { s_cm016 +18, NULL       , "MESSAGE",            7, 0, 0xc015, 0 },
   { NULL       , NULL       , "msg",                3, 0, 0xe001, 7 },
   { s_cm016 +22, s_cm016 +20, "[",                  1, 1, 0xe007, 0 },
   { s_cm016 +21, NULL       , "COLOR",              5, 0, 0xc015, 0 },
   { NULL       , NULL       , "clr",                3, 0, 0xe001, 8 },
   { s_cm016 +25, s_cm016 +23, "[",                  1, 1, 0xe007, 0 },
   { s_cm016 +24, NULL       , "FOCUS",              5, 0, 0xc015, 0 },
   { NULL       , NULL       , "fb",                 2, 0, 0xe001, 9 },
   { s_cm016 +28, s_cm016 +26, "[",                  1, 1, 0xe007, 0 },
   { s_cm016 +27, NULL       , "STATE",              5, 0, 0xc015, 0 },
   { NULL       , NULL       , "sb",                 2, 0, 0xe001, 10 },
   { s_cm016 +31, s_cm016 +29, "[",                  1, 1, 0xe007, 0 },
   { s_cm016 +30, NULL       , "STYLE",              5, 0, 0xc015, 0 },
   { NULL       , NULL       , "stl",                3, 0, 0xe001, 11 },
   { s_cm016 +34, s_cm016 +32, "[",                  1, 1, 0xe007, 0 },
   { s_cm016 +33, NULL       , "SEND",               4, 0, 0xc015, 0 },
   { NULL       , NULL       , "snd",                3, 0, 0xe001, 13 },
   { s_cm016 +37, s_cm016 +35, "[",                  1, 1, 0xe007, 0 },
   { s_cm016 +36, NULL       , "GUISEND",            7, 0, 0xc015, 0 },
   { NULL       , NULL       , "gsnd",               4, 0, 0xe001, 14 },
   { NULL       , s_cm016 +38, "[",                  1, 1, 0xe007, 0 },
   { s_cm016 +39, NULL       , "BITMAPS",            7, 0, 0xc015, 0 },
   { NULL       , NULL       , "bmaps",              5, 0, 0xe001, 12 }
};
static HB_PP_TOKEN s_cr016[ 108 ] = {
   { s_cr016 + 1, NULL       , "SetPos",             6, 1, 0xc015, 0 },
   { s_cr016 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr016 + 3, NULL       , "row",                3, 1, 0xc00b, 1 },
   { s_cr016 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr016 + 5, NULL       , "col",                3, 1, 0xc00b, 2 },
   { s_cr016 + 6, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr016 + 7, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr016 + 8, NULL       , "AAdd",               4, 1, 0xc015, 0 },
   { s_cr016 + 9, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr016 +10, NULL       , "GetList",            7, 1, 0xc015, 0 },
   { s_cr016 +11, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr016 +12, NULL       , "_GET_",              5, 1, 0xc015, 0 },
   { s_cr016 +13, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr016 +14, NULL       , "v",                  1, 1, 0xc00b, 3 },
   { s_cr016 +15, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr016 +16, NULL       , "v",                  1, 1, 0xc00e, 3 },
   { s_cr016 +17, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr016 +18, NULL       , "NIL",                3, 1, 0xc015, 0 },
   { s_cr016 +19, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr016 +20, NULL       , "valid",              5, 1, 0xc00f, 4 },
   { s_cr016 +21, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr016 +22, NULL       , "when",               4, 1, 0xc00f, 5 },
   { s_cr016 +23, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr016 +24, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr016 +25, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr016 +26, NULL       , "ATail",              5, 1, 0xc015, 0 },
   { s_cr016 +27, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr016 +28, NULL       , "GetList",            7, 1, 0xc015, 0 },
   { s_cr016 +29, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr016 +30, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr016 +31, NULL       , "Control",            7, 0, 0xc015, 0 },
   { s_cr016 +32, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr016 +33, NULL       , "_CheckBox_",        10, 1, 0xc015, 0 },
   { s_cr016 +34, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr016 +35, NULL       , "v",                  1, 1, 0xc00b, 3 },
   { s_cr016 +36, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr016 +37, NULL       , "cap",                3, 1, 0xc00b, 6 },
   { s_cr016 +38, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr016 +39, NULL       , "msg",                3, 1, 0xc00b, 7 },
   { s_cr016 +40, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr016 +41, NULL       , "clr",                3, 1, 0xc00b, 8 },
   { s_cr016 +42, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr016 +43, NULL       , "fb",                 2, 1, 0xc00f, 9 },
   { s_cr016 +44, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr016 +45, NULL       , "sb",                 2, 1, 0xc00f, 10 },
   { s_cr016 +46, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr016 +47, NULL       , "stl",                3, 1, 0xc00b, 11 },
   { s_cr016 +48, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr016 +49, NULL       , "bmaps",              5, 1, 0xc00b, 12 },
   { s_cr016 +50, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr016 +51, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr016 +52, NULL       , "ATail",              5, 1, 0xc015, 0 },
   { s_cr016 +53, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr016 +54, NULL       , "GetList",            7, 1, 0xc015, 0 },
   { s_cr016 +55, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr016 +56, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr016 +57, NULL       , "reader",             6, 0, 0xc015, 0 },
   { s_cr016 +58, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr016 +59, NULL       , "{",                  1, 1, 0xc036, 0 },
   { s_cr016 +60, NULL       , "|",                  1, 0, 0xc01b, 0 },
   { s_cr016 +61, NULL       , "a",                  1, 1, 0xc015, 0 },
   { s_cr016 +62, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr016 +63, NULL       , "b",                  1, 1, 0xc015, 0 },
   { s_cr016 +64, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr016 +65, NULL       , "c",                  1, 1, 0xc015, 0 },
   { s_cr016 +66, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr016 +67, NULL       , "d",                  1, 1, 0xc015, 0 },
   { s_cr016 +68, NULL       , "|",                  1, 1, 0xc01b, 0 },
   { s_cr016 +69, NULL       , "GUIReader",          9, 1, 0xc015, 0 },
   { s_cr016 +70, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr016 +71, NULL       , "a",                  1, 1, 0xc015, 0 },
   { s_cr016 +72, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr016 +73, NULL       , "b",                  1, 1, 0xc015, 0 },
   { s_cr016 +74, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr016 +75, NULL       , "c",                  1, 1, 0xc015, 0 },
   { s_cr016 +76, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr016 +77, NULL       , "d",                  1, 1, 0xc015, 0 },
   { s_cr016 +78, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr016 +79, NULL       , "}",                  1, 1, 0xc037, 0 },
   { s_cr016 +80, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr016 +88, s_cr016 +81, "[",                  1, 1, 0xc012, 0 },
   { s_cr016 +82, NULL       , "ATail",              5, 1, 0xc015, 0 },
   { s_cr016 +83, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr016 +84, NULL       , "GetList",            7, 1, 0xc015, 0 },
   { s_cr016 +85, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr016 +86, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr016 +87, NULL       , "snd",                3, 0, 0xc00b, 13 },
   { NULL       , NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr016 +98, s_cr016 +89, "[",                  1, 1, 0xc012, 0 },
   { s_cr016 +90, NULL       , "ATail",              5, 1, 0xc015, 0 },
   { s_cr016 +91, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr016 +92, NULL       , "GetList",            7, 1, 0xc015, 0 },
   { s_cr016 +93, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr016 +94, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr016 +95, NULL       , "Control",            7, 0, 0xc015, 0 },
   { s_cr016 +96, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr016 +97, NULL       , "gsnd",               4, 0, 0xc00b, 14 },
   { NULL       , NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr016 +99, NULL       , "ATail",              5, 1, 0xc015, 0 },
   { s_cr016 +100, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr016 +101, NULL       , "GetList",            7, 1, 0xc015, 0 },
   { s_cr016 +102, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr016 +103, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr016 +104, NULL       , "Control",            7, 0, 0xc015, 0 },
   { s_cr016 +105, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr016 +106, NULL       , "Display",            7, 0, 0xc015, 0 },
   { s_cr016 +107, NULL       , "(",                  1, 0, 0xc032, 0 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm017[ 24 ] = {
   { s_cm017 + 1, NULL       , "@",                  1, 1, 0xc038, 0 },
   { s_cm017 + 2, NULL       , "row",                3, 0, 0xe001, 1 },
   { s_cm017 + 3, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm017 + 4, NULL       , "col",                3, 0, 0xe001, 2 },
   { s_cm017 + 5, NULL       , "GET",                3, 1, 0xc015, 0 },
   { s_cm017 + 6, NULL       , "v",                  1, 0, 0xe001, 3 },
   { s_cm017 + 9, s_cm017 + 7, "[",                  1, 1, 0xe007, 0 },
   { s_cm017 + 8, NULL       , "PICTURE",            7, 0, 0xc015, 0 },
   { NULL       , NULL       , "pic",                3, 0, 0xe001, 4 },
   { s_cm017 +12, s_cm017 +10, "[",                  1, 1, 0xe007, 0 },
   { s_cm017 +11, NULL       , "VALID",              5, 0, 0xc015, 0 },
   { NULL       , NULL       , "valid",              5, 0, 0xe001, 5 },
   { s_cm017 +15, s_cm017 +13, "[",                  1, 1, 0xe007, 0 },
   { s_cm017 +14, NULL       , "WHEN",               4, 0, 0xc015, 0 },
   { NULL       , NULL       , "when",               4, 0, 0xe001, 6 },
   { s_cm017 +18, s_cm017 +16, "[",                  1, 1, 0xe007, 0 },
   { s_cm017 +17, NULL       , "SEND",               4, 0, 0xc015, 0 },
   { NULL       , NULL       , "snd",                3, 0, 0xe001, 9 },
   { s_cm017 +21, s_cm017 +19, "[",                  1, 1, 0xe007, 0 },
   { s_cm017 +20, NULL       , "CAPTION",            7, 0, 0xc015, 0 },
   { NULL       , NULL       , "cap",                3, 0, 0xe001, 7 },
   { NULL       , s_cm017 +22, "[",                  1, 1, 0xe007, 0 },
   { s_cm017 +23, NULL       , "MESSAGE",            7, 0, 0xc015, 0 },
   { NULL       , NULL       , "msg",                3, 0, 0xe001, 8 }
};
static HB_PP_TOKEN s_cr017[ 96 ] = {
   { s_cr017 + 1, NULL       , "SetPos",             6, 1, 0xc015, 0 },
   { s_cr017 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr017 + 3, NULL       , "row",                3, 1, 0xc00b, 1 },
   { s_cr017 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr017 + 5, NULL       , "col",                3, 1, 0xc00b, 2 },
   { s_cr017 + 6, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr017 + 7, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr017 + 8, NULL       , "AAdd",               4, 1, 0xc015, 0 },
   { s_cr017 + 9, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr017 +10, NULL       , "GetList",            7, 1, 0xc015, 0 },
   { s_cr017 +11, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr017 +12, NULL       , "_GET_",              5, 1, 0xc015, 0 },
   { s_cr017 +13, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr017 +14, NULL       , "v",                  1, 1, 0xc00b, 3 },
   { s_cr017 +15, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr017 +16, NULL       , "v",                  1, 1, 0xc00d, 3 },
   { s_cr017 +17, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr017 +18, NULL       , "pic",                3, 1, 0xc00b, 4 },
   { s_cr017 +19, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr017 +20, NULL       , "valid",              5, 1, 0xc00f, 5 },
   { s_cr017 +21, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr017 +22, NULL       , "when",               4, 1, 0xc00f, 6 },
   { s_cr017 +23, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr017 +24, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr017 +25, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr017 +70, s_cr017 +26, "[",                  1, 1, 0xc012, 0 },
   { s_cr017 +27, NULL       , "ATail",              5, 1, 0xc015, 0 },
   { s_cr017 +28, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr017 +29, NULL       , "GetList",            7, 1, 0xc015, 0 },
   { s_cr017 +30, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr017 +31, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr017 +32, NULL       , "Caption",            7, 0, 0xc015, 0 },
   { s_cr017 +33, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr017 +34, NULL       , "cap",                3, 1, 0xc00b, 7 },
   { s_cr017 +35, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr017 +36, NULL       , "ATail",              5, 1, 0xc015, 0 },
   { s_cr017 +37, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr017 +38, NULL       , "GetList",            7, 1, 0xc015, 0 },
   { s_cr017 +39, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr017 +40, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr017 +41, NULL       , "CapRow",             6, 0, 0xc015, 0 },
   { s_cr017 +42, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr017 +43, NULL       , "ATail",              5, 1, 0xc015, 0 },
   { s_cr017 +44, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr017 +45, NULL       , "Getlist",            7, 1, 0xc015, 0 },
   { s_cr017 +46, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr017 +47, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr017 +48, NULL       , "row",                3, 0, 0xc015, 0 },
   { s_cr017 +49, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr017 +50, NULL       , "ATail",              5, 1, 0xc015, 0 },
   { s_cr017 +51, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr017 +52, NULL       , "GetList",            7, 1, 0xc015, 0 },
   { s_cr017 +53, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr017 +54, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr017 +55, NULL       , "CapCol",             6, 0, 0xc015, 0 },
   { s_cr017 +56, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr017 +57, NULL       , "ATail",              5, 1, 0xc015, 0 },
   { s_cr017 +58, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr017 +59, NULL       , "Getlist",            7, 1, 0xc015, 0 },
   { s_cr017 +60, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr017 +61, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr017 +62, NULL       , "col",                3, 0, 0xc015, 0 },
   { s_cr017 +63, NULL       , "-",                  1, 1, 0xc051, 0 },
   { s_cr017 +64, NULL       , "__CapLength",       11, 1, 0xc015, 0 },
   { s_cr017 +65, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr017 +66, NULL       , "cap",                3, 1, 0xc00b, 7 },
   { s_cr017 +67, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr017 +68, NULL       , "-",                  1, 1, 0xc051, 0 },
   { s_cr017 +69, NULL       , "1",                  1, 1, 0xc02a, 0 },
   { NULL       , NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr017 +80, s_cr017 +71, "[",                  1, 1, 0xc012, 0 },
   { s_cr017 +72, NULL       , "ATail",              5, 1, 0xc015, 0 },
   { s_cr017 +73, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr017 +74, NULL       , "GetList",            7, 1, 0xc015, 0 },
   { s_cr017 +75, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr017 +76, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr017 +77, NULL       , "message",            7, 0, 0xc015, 0 },
   { s_cr017 +78, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr017 +79, NULL       , "msg",                3, 1, 0xc00b, 8 },
   { NULL       , NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr017 +88, s_cr017 +81, "[",                  1, 1, 0xc012, 0 },
   { s_cr017 +82, NULL       , "ATail",              5, 1, 0xc015, 0 },
   { s_cr017 +83, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr017 +84, NULL       , "GetList",            7, 1, 0xc015, 0 },
   { s_cr017 +85, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr017 +86, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr017 +87, NULL       , "snd",                3, 0, 0xc00b, 9 },
   { NULL       , NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr017 +89, NULL       , "ATail",              5, 1, 0xc015, 0 },
   { s_cr017 +90, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr017 +91, NULL       , "GetList",            7, 1, 0xc015, 0 },
   { s_cr017 +92, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr017 +93, NULL       , ":",                  1, 0, 0xc03a, 0 },
   { s_cr017 +94, NULL       , "Display",            7, 0, 0xc015, 0 },
   { s_cr017 +95, NULL       , "(",                  1, 0, 0xc032, 0 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm018[ 17 ] = {
   { s_cm018 + 1, NULL       , "READ",               4, 1, 0xc015, 0 },
   { s_cm018 + 2, NULL       , "SAVE",               4, 1, 0xc015, 0 },
   { s_cm018 + 5, s_cm018 + 3, "[",                  1, 1, 0xe007, 0 },
   { s_cm018 + 4, NULL       , "MENU",               4, 0, 0xc015, 0 },
   { NULL       , NULL       , "oMenu",              5, 0, 0xe001, 1 },
   { NULL       , s_cm018 + 6, "[",                  1, 1, 0xe007, 0 },
   { s_cm018 + 7, NULL       , "MSG",                3, 0, 0xc015, 0 },
   { s_cm018 + 8, NULL       , "AT",                 2, 1, 0xc015, 0 },
   { s_cm018 + 9, NULL       , "row",                3, 0, 0xe001, 2 },
   { s_cm018 +10, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm018 +11, NULL       , "left",               4, 0, 0xe001, 3 },
   { s_cm018 +12, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm018 +13, NULL       , "right",              5, 0, 0xe001, 4 },
   { NULL       , s_cm018 +14, "[",                  1, 1, 0xe007, 0 },
   { s_cm018 +15, NULL       , "MSG",                3, 0, 0xc015, 0 },
   { s_cm018 +16, NULL       , "COLOR",              5, 1, 0xc015, 0 },
   { NULL       , NULL       , "color",              5, 0, 0xe001, 5 }
};
static HB_PP_TOKEN s_cr018[ 16 ] = {
   { s_cr018 + 1, NULL       , "ReadModal",          9, 1, 0xc015, 0 },
   { s_cr018 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr018 + 3, NULL       , "GetList",            7, 1, 0xc015, 0 },
   { s_cr018 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr018 + 5, NULL       , "NIL",                3, 1, 0xc015, 0 },
   { s_cr018 + 6, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr018 + 7, NULL       , "oMenu",              5, 1, 0xc00b, 1 },
   { s_cr018 + 8, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr018 + 9, NULL       , "row",                3, 1, 0xc00b, 2 },
   { s_cr018 +10, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr018 +11, NULL       , "left",               4, 1, 0xc00b, 3 },
   { s_cr018 +12, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr018 +13, NULL       , "right",              5, 1, 0xc00b, 4 },
   { s_cr018 +14, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr018 +15, NULL       , "color",              5, 1, 0xc00b, 5 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm019[ 16 ] = {
   { s_cm019 + 1, NULL       , "READ",               4, 1, 0xc015, 0 },
   { s_cm019 + 4, s_cm019 + 2, "[",                  1, 1, 0xe007, 0 },
   { s_cm019 + 3, NULL       , "MENU",               4, 0, 0xc015, 0 },
   { NULL       , NULL       , "oMenu",              5, 0, 0xe001, 1 },
   { NULL       , s_cm019 + 5, "[",                  1, 1, 0xe007, 0 },
   { s_cm019 + 6, NULL       , "MSG",                3, 0, 0xc015, 0 },
   { s_cm019 + 7, NULL       , "AT",                 2, 1, 0xc015, 0 },
   { s_cm019 + 8, NULL       , "row",                3, 0, 0xe001, 2 },
   { s_cm019 + 9, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm019 +10, NULL       , "left",               4, 0, 0xe001, 3 },
   { s_cm019 +11, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm019 +12, NULL       , "right",              5, 0, 0xe001, 4 },
   { NULL       , s_cm019 +13, "[",                  1, 1, 0xe007, 0 },
   { s_cm019 +14, NULL       , "MSG",                3, 0, 0xc015, 0 },
   { s_cm019 +15, NULL       , "COLOR",              5, 1, 0xc015, 0 },
   { NULL       , NULL       , "color",              5, 0, 0xe001, 5 }
};
static HB_PP_TOKEN s_cr019[ 25 ] = {
   { s_cr019 + 1, NULL       , "ReadModal",          9, 1, 0xc015, 0 },
   { s_cr019 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr019 + 3, NULL       , "GetList",            7, 1, 0xc015, 0 },
   { s_cr019 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr019 + 5, NULL       , "NIL",                3, 1, 0xc015, 0 },
   { s_cr019 + 6, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr019 + 7, NULL       , "oMenu",              5, 1, 0xc00b, 1 },
   { s_cr019 + 8, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr019 + 9, NULL       , "row",                3, 1, 0xc00b, 2 },
   { s_cr019 +10, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr019 +11, NULL       , "left",               4, 1, 0xc00b, 3 },
   { s_cr019 +12, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr019 +13, NULL       , "right",              5, 1, 0xc00b, 4 },
   { s_cr019 +14, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr019 +15, NULL       , "color",              5, 1, 0xc00b, 5 },
   { s_cr019 +16, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr019 +17, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr019 +18, NULL       , "GetList",            7, 1, 0xc015, 0 },
   { s_cr019 +19, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr019 +20, NULL       , "{",                  1, 1, 0xc036, 0 },
   { s_cr019 +21, NULL       , "}",                  1, 0, 0xc037, 0 },
   { s_cr019 +22, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr019 +23, NULL       , "(",                  1, 1, 0xc032, 0 },
   { s_cr019 +24, NULL       , "GetList",            7, 1, 0xc015, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm020[ 12 ] = {
   { s_cm020 + 1, NULL       , "@",                  1, 1, 0xc038, 0 },
   { s_cm020 + 2, NULL       , "row",                3, 0, 0xe001, 1 },
   { s_cm020 + 3, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm020 + 4, NULL       , "col",                3, 0, 0xe001, 2 },
   { s_cm020 + 5, NULL       , "GET",                3, 1, 0xc015, 0 },
   { s_cm020 + 6, NULL       , "v",                  1, 0, 0xe001, 3 },
   { s_cm020 + 8, s_cm020 + 7, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "exp",                3, 0, 0xe002, 4 },
   { s_cm020 + 9, NULL       , "COLOR",              5, 1, 0xc015, 0 },
   { s_cm020 +10, NULL       , "clr",                3, 0, 0xe001, 5 },
   { NULL       , s_cm020 +11, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "nextexp",            7, 0, 0xe002, 6 }
};
static HB_PP_TOKEN s_cr020[ 15 ] = {
   { s_cr020 + 1, NULL       , "@",                  1, 1, 0xc038, 0 },
   { s_cr020 + 2, NULL       , "row",                3, 1, 0xc00b, 1 },
   { s_cr020 + 3, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr020 + 4, NULL       , "col",                3, 1, 0xc00b, 2 },
   { s_cr020 + 5, NULL       , "GET",                3, 1, 0xc015, 0 },
   { s_cr020 + 6, NULL       , "v",                  1, 1, 0xc00b, 3 },
   { s_cr020 + 8, s_cr020 + 7, "[",                  1, 1, 0xc012, 0 },
   { NULL       , NULL       , "exp",                3, 1, 0xc00b, 4 },
   { s_cr020 + 9, NULL       , "SEND",               4, 1, 0xc015, 0 },
   { s_cr020 +10, NULL       , "colorDisp",          9, 1, 0xc015, 0 },
   { s_cr020 +11, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr020 +12, NULL       , "clr",                3, 1, 0xc00b, 5 },
   { s_cr020 +13, NULL       , ")",                  1, 1, 0xc033, 0 },
   { NULL       , s_cr020 +14, "[",                  1, 1, 0xc012, 0 },
   { NULL       , NULL       , "nextexp",            7, 1, 0xc00b, 6 }
};
static HB_PP_TOKEN s_cm021[ 14 ] = {
   { s_cm021 + 1, NULL       , "@",                  1, 1, 0xc038, 0 },
   { s_cm021 + 2, NULL       , "row",                3, 0, 0xe001, 1 },
   { s_cm021 + 3, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm021 + 4, NULL       , "col",                3, 0, 0xe001, 2 },
   { s_cm021 + 5, NULL       , "GET",                3, 1, 0xc015, 0 },
   { s_cm021 + 6, NULL       , "v",                  1, 0, 0xe001, 3 },
   { s_cm021 + 8, s_cm021 + 7, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "exp",                3, 0, 0xe002, 4 },
   { s_cm021 + 9, NULL       , "RANGE",              5, 1, 0xc015, 0 },
   { s_cm021 +10, NULL       , "l",                  1, 0, 0xe001, 5 },
   { s_cm021 +11, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm021 +12, NULL       , "h",                  1, 0, 0xe001, 6 },
   { NULL       , s_cm021 +13, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "nextexp",            7, 0, 0xe002, 7 }
};
static HB_PP_TOKEN s_cr021[ 25 ] = {
   { s_cr021 + 1, NULL       , "@",                  1, 1, 0xc038, 0 },
   { s_cr021 + 2, NULL       , "row",                3, 1, 0xc00b, 1 },
   { s_cr021 + 3, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr021 + 4, NULL       , "col",                3, 1, 0xc00b, 2 },
   { s_cr021 + 5, NULL       , "GET",                3, 1, 0xc015, 0 },
   { s_cr021 + 6, NULL       , "v",                  1, 1, 0xc00b, 3 },
   { s_cr021 + 8, s_cr021 + 7, "[",                  1, 1, 0xc012, 0 },
   { NULL       , NULL       , "exp",                3, 1, 0xc00b, 4 },
   { s_cr021 + 9, NULL       , "VALID",              5, 1, 0xc015, 0 },
   { s_cr021 +10, NULL       , "{",                  1, 1, 0xc036, 0 },
   { s_cr021 +11, NULL       , "|",                  1, 0, 0xc01b, 0 },
   { s_cr021 +12, NULL       , "_1",                 2, 1, 0xc015, 0 },
   { s_cr021 +13, NULL       , "|",                  1, 1, 0xc01b, 0 },
   { s_cr021 +14, NULL       , "RangeCheck",        10, 1, 0xc015, 0 },
   { s_cr021 +15, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr021 +16, NULL       , "_1",                 2, 1, 0xc015, 0 },
   { s_cr021 +17, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr021 +18, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr021 +19, NULL       , "l",                  1, 1, 0xc00b, 5 },
   { s_cr021 +20, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr021 +21, NULL       , "h",                  1, 1, 0xc00b, 6 },
   { s_cr021 +22, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr021 +23, NULL       , "}",                  1, 1, 0xc037, 0 },
   { NULL       , s_cr021 +24, "[",                  1, 1, 0xc012, 0 },
   { NULL       , NULL       , "nextexp",            7, 1, 0xc00b, 7 }
};
static HB_PP_TOKEN s_cm022[ 12 ] = {
   { s_cm022 + 1, NULL       , "@",                  1, 1, 0xc038, 0 },
   { s_cm022 + 2, NULL       , "row",                3, 0, 0xe001, 1 },
   { s_cm022 + 3, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm022 + 4, NULL       , "col",                3, 0, 0xe001, 2 },
   { s_cm022 + 5, NULL       , "SAY",                3, 1, 0xc015, 0 },
   { s_cm022 + 6, NULL       , "say",                3, 0, 0xe001, 3 },
   { s_cm022 + 8, s_cm022 + 7, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "sayexp",             6, 0, 0xe002, 4 },
   { s_cm022 + 9, NULL       , "GET",                3, 1, 0xc015, 0 },
   { s_cm022 +10, NULL       , "get",                3, 0, 0xe001, 5 },
   { NULL       , s_cm022 +11, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "getexp",             6, 0, 0xe002, 6 }
};
static HB_PP_TOKEN s_cr022[ 23 ] = {
   { s_cr022 + 1, NULL       , "@",                  1, 1, 0xc038, 0 },
   { s_cr022 + 2, NULL       , "row",                3, 1, 0xc00b, 1 },
   { s_cr022 + 3, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr022 + 4, NULL       , "col",                3, 1, 0xc00b, 2 },
   { s_cr022 + 5, NULL       , "SAY",                3, 1, 0xc015, 0 },
   { s_cr022 + 6, NULL       , "say",                3, 1, 0xc00b, 3 },
   { s_cr022 + 8, s_cr022 + 7, "[",                  1, 1, 0xc012, 0 },
   { NULL       , NULL       , "sayexp",             6, 1, 0xc00b, 4 },
   { s_cr022 + 9, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr022 +10, NULL       , "@",                  1, 1, 0xc038, 0 },
   { s_cr022 +11, NULL       , "Row",                3, 1, 0xc015, 0 },
   { s_cr022 +12, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr022 +13, NULL       , ")",                  1, 0, 0xc033, 0 },
   { s_cr022 +14, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr022 +15, NULL       , "Col",                3, 1, 0xc015, 0 },
   { s_cr022 +16, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr022 +17, NULL       , ")",                  1, 0, 0xc033, 0 },
   { s_cr022 +18, NULL       , "+",                  1, 1, 0xc050, 0 },
   { s_cr022 +19, NULL       , "1",                  1, 1, 0xc02a, 0 },
   { s_cr022 +20, NULL       , "GET",                3, 1, 0xc015, 0 },
   { s_cr022 +21, NULL       , "get",                3, 1, 0xc00b, 5 },
   { NULL       , s_cr022 +22, "[",                  1, 1, 0xc012, 0 },
   { NULL       , NULL       , "getexp",             6, 1, 0xc00b, 6 }
};
static HB_PP_TOKEN s_cm023[ 6 ] = {
   { s_cm023 + 1, NULL       , "@",                  1, 1, 0xc038, 0 },
   { s_cm023 + 3, s_cm023 + 2, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "exp",                3, 0, 0xe002, 1 },
   { s_cm023 + 4, NULL       , "COLOUR",             6, 1, 0xc015, 0 },
   { NULL       , s_cm023 + 5, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "nextexp",            7, 0, 0xe002, 2 }
};
static HB_PP_TOKEN s_cr023[ 6 ] = {
   { s_cr023 + 1, NULL       , "@",                  1, 1, 0xc038, 0 },
   { s_cr023 + 3, s_cr023 + 2, "[",                  1, 1, 0xc012, 0 },
   { NULL       , NULL       , "exp",                3, 1, 0xc00b, 1 },
   { s_cr023 + 4, NULL       , "COLOR",              5, 1, 0xc015, 0 },
   { NULL       , s_cr023 + 5, "[",                  1, 1, 0xc012, 0 },
   { NULL       , NULL       , "nextexp",            7, 1, 0xc00b, 2 }
};
static HB_PP_TOKEN s_cm024[ 2 ] = {
   { s_cm024 + 1, NULL       , "CLEAR",              5, 1, 0xc015, 0 },
   { NULL       , NULL       , "GETS",               4, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr024[ 13 ] = {
   { s_cr024 + 1, NULL       , "ReadKill",           8, 1, 0xc015, 0 },
   { s_cr024 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr024 + 3, NULL       , ".T.",                3, 1, 0xc02d, 0 },
   { s_cr024 + 4, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr024 + 5, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr024 + 6, NULL       , "GetList",            7, 1, 0xc015, 0 },
   { s_cr024 + 7, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr024 + 8, NULL       , "{",                  1, 1, 0xc036, 0 },
   { s_cr024 + 9, NULL       , "}",                  1, 0, 0xc037, 0 },
   { s_cr024 +10, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr024 +11, NULL       , "(",                  1, 1, 0xc032, 0 },
   { s_cr024 +12, NULL       , "GetList",            7, 1, 0xc015, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm025[ 2 ] = {
   { s_cm025 + 1, NULL       , "READ",               4, 1, 0xc015, 0 },
   { NULL       , NULL       , "SAVE",               4, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr025[ 4 ] = {
   { s_cr025 + 1, NULL       , "ReadModal",          9, 1, 0xc015, 0 },
   { s_cr025 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr025 + 3, NULL       , "GetList",            7, 1, 0xc015, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm026[ 1 ] = {
   { NULL       , NULL       , "READ",               4, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr026[ 13 ] = {
   { s_cr026 + 1, NULL       , "ReadModal",          9, 1, 0xc015, 0 },
   { s_cr026 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr026 + 3, NULL       , "GetList",            7, 1, 0xc015, 0 },
   { s_cr026 + 4, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr026 + 5, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr026 + 6, NULL       , "GetList",            7, 1, 0xc015, 0 },
   { s_cr026 + 7, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr026 + 8, NULL       , "{",                  1, 1, 0xc036, 0 },
   { s_cr026 + 9, NULL       , "}",                  1, 0, 0xc037, 0 },
   { s_cr026 +10, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr026 +11, NULL       , "(",                  1, 1, 0xc032, 0 },
   { s_cr026 +12, NULL       , "GetList",            7, 1, 0xc015, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm027[ 1 ] = {
   { NULL       , NULL       , "REINDEX",            7, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr027[ 3 ] = {
   { s_cr027 + 1, NULL       , "ordListRebuild",    14, 1, 0xc015, 0 },
   { s_cr027 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm028[ 10 ] = {
   { s_cm028 + 1, NULL       , "REINDEX",            7, 1, 0xc015, 0 },
   { s_cm028 + 4, s_cm028 + 2, "[",                  1, 1, 0xe007, 0 },
   { s_cm028 + 3, NULL       , "EVAL",               4, 0, 0xc015, 0 },
   { NULL       , NULL       , "eval",               4, 0, 0xe001, 1 },
   { s_cm028 + 7, s_cm028 + 5, "[",                  1, 1, 0xe007, 0 },
   { s_cm028 + 6, NULL       , "EVERY",              5, 0, 0xc015, 0 },
   { NULL       , NULL       , "every",              5, 0, 0xe001, 2 },
   { NULL       , s_cm028 + 8, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm028 + 9, "lNoOpt",             6, 0, 0xc003, 3 },
   { NULL       , NULL       , "NOOPTIMIZE",        10, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr028[ 25 ] = {
   { s_cr028 + 1, NULL       , "ordCondSet",        10, 1, 0xc015, 0 },
   { s_cr028 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr028 + 3, NULL       , ",",                  1, 1, 0xc01d, 0 },
   { s_cr028 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr028 + 5, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr028 + 6, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr028 + 7, NULL       , "eval",               4, 1, 0xc00f, 1 },
   { s_cr028 + 8, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr028 + 9, NULL       , "every",              5, 1, 0xc00b, 2 },
   { s_cr028 +10, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr028 +11, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr028 +12, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr028 +13, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr028 +14, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr028 +15, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr028 +16, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr028 +17, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr028 +18, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr028 +19, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr028 +20, NULL       , "lNoOpt",             6, 1, 0xc010, 3 },
   { s_cr028 +21, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr028 +22, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr028 +23, NULL       , "ordListRebuild",    14, 1, 0xc015, 0 },
   { s_cr028 +24, NULL       , "(",                  1, 0, 0xc032, 0 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm029[ 8 ] = {
   { s_cm029 + 1, NULL       , "INDEX",              5, 1, 0xc015, 0 },
   { s_cm029 + 2, NULL       , "ON",                 2, 1, 0xc015, 0 },
   { s_cm029 + 3, NULL       , "key",                3, 0, 0xe001, 2 },
   { s_cm029 + 4, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { s_cm029 + 5, NULL       , "file",               4, 0, 0xe005, 1 },
   { NULL       , s_cm029 + 6, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm029 + 7, "u",                  1, 0, 0xc003, 3 },
   { NULL       , NULL       , "UNIQUE",             6, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr029[ 17 ] = {
   { s_cr029 + 1, NULL       , "dbCreateIndex",     13, 1, 0xc015, 0 },
   { s_cr029 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr029 + 3, NULL       , "file",               4, 1, 0xc00e, 1 },
   { s_cr029 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr029 + 5, NULL       , "key",                3, 1, 0xc00d, 2 },
   { s_cr029 + 6, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr029 + 7, NULL       , "key",                3, 1, 0xc00f, 2 },
   { s_cr029 + 8, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr029 + 9, NULL       , "iif",                3, 1, 0xc015, 0 },
   { s_cr029 +10, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr029 +11, NULL       , "u",                  1, 1, 0xc010, 3 },
   { s_cr029 +12, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr029 +13, NULL       , ".T.",                3, 1, 0xc02d, 0 },
   { s_cr029 +14, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr029 +15, NULL       , "NIL",                3, 1, 0xc015, 0 },
   { s_cr029 +16, NULL       , ")",                  1, 1, 0xc033, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm030[ 64 ] = {
   { s_cm030 + 1, NULL       , "INDEX",              5, 1, 0xc015, 0 },
   { s_cm030 + 2, NULL       , "ON",                 2, 1, 0xc015, 0 },
   { s_cm030 + 3, NULL       , "key",                3, 0, 0xe001, 19 },
   { s_cm030 + 4, NULL       , "TAG",                3, 1, 0xc015, 0 },
   { s_cm030 + 5, NULL       , "tag",                3, 0, 0xe005, 18 },
   { s_cm030 + 8, s_cm030 + 6, "[",                  1, 1, 0xe007, 0 },
   { s_cm030 + 7, NULL       , "TO",                 2, 0, 0xc015, 0 },
   { NULL       , NULL       , "bag",                3, 0, 0xe005, 17 },
   { s_cm030 +11, s_cm030 + 9, "[",                  1, 1, 0xe007, 0 },
   { s_cm030 +10, NULL       , "FOR",                3, 0, 0xc015, 0 },
   { NULL       , NULL       , "for",                3, 0, 0xe001, 1 },
   { s_cm030 +14, s_cm030 +12, "[",                  1, 1, 0xe007, 0 },
   { s_cm030 +13, NULL       , "WHILE",              5, 0, 0xc015, 0 },
   { NULL       , NULL       , "while",              5, 0, 0xe001, 3 },
   { s_cm030 +17, s_cm030 +15, "[",                  1, 1, 0xe007, 0 },
   { s_cm030 +16, NULL       , "NEXT",               4, 0, 0xc015, 0 },
   { NULL       , NULL       , "next",               4, 0, 0xe001, 6 },
   { s_cm030 +20, s_cm030 +18, "[",                  1, 1, 0xe007, 0 },
   { s_cm030 +19, NULL       , "RECORD",             6, 0, 0xc015, 0 },
   { NULL       , NULL       , "rec",                3, 0, 0xe001, 7 },
   { s_cm030 +23, s_cm030 +21, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm030 +22, "rest",               4, 0, 0xc003, 8 },
   { NULL       , NULL       , "REST",               4, 0, 0xc015, 0 },
   { s_cm030 +26, s_cm030 +24, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm030 +25, "all",                3, 0, 0xc003, 2 },
   { NULL       , NULL       , "ALL",                3, 0, 0xc015, 0 },
   { s_cm030 +29, s_cm030 +27, "[",                  1, 1, 0xe007, 0 },
   { s_cm030 +28, NULL       , "EVAL",               4, 0, 0xc015, 0 },
   { NULL       , NULL       , "eval",               4, 0, 0xe001, 4 },
   { s_cm030 +32, s_cm030 +30, "[",                  1, 1, 0xe007, 0 },
   { s_cm030 +31, NULL       , "EVERY",              5, 0, 0xc015, 0 },
   { NULL       , NULL       , "every",              5, 0, 0xe001, 5 },
   { s_cm030 +35, s_cm030 +33, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm030 +34, "unique",             6, 0, 0xc003, 20 },
   { NULL       , NULL       , "UNIQUE",             6, 1, 0xc015, 0 },
   { s_cm030 +38, s_cm030 +36, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm030 +37, "ascend",             6, 0, 0xc003, 0 },
   { NULL       , NULL       , "ASCENDING",          9, 1, 0xc015, 0 },
   { s_cm030 +41, s_cm030 +39, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm030 +40, "descend",            7, 0, 0xc003, 9 },
   { NULL       , NULL       , "DESCENDING",        10, 1, 0xc015, 0 },
   { s_cm030 +44, s_cm030 +42, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm030 +43, "add",                3, 0, 0xc003, 10 },
   { NULL       , NULL       , "ADDITIVE",           8, 1, 0xc015, 0 },
   { s_cm030 +47, s_cm030 +45, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm030 +46, "cur",                3, 0, 0xc003, 11 },
   { NULL       , NULL       , "USECURRENT",        10, 1, 0xc015, 0 },
   { s_cm030 +50, s_cm030 +48, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm030 +49, "cust",               4, 0, 0xc003, 12 },
   { NULL       , NULL       , "CUSTOM",             6, 1, 0xc015, 0 },
   { s_cm030 +53, s_cm030 +51, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm030 +52, "noopt",              5, 0, 0xc003, 13 },
   { NULL       , NULL       , "NOOPTIMIZE",        10, 1, 0xc015, 0 },
   { s_cm030 +58, s_cm030 +54, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm030 +55, "mem",                3, 0, 0xc003, 14 },
   { s_cm030 +56, NULL       , "MEMORY",             6, 1, 0xc015, 0 },
   { s_cm030 +57, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { NULL       , NULL       , "TEMPORARY",          9, 1, 0xc015, 0 },
   { s_cm030 +61, s_cm030 +59, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm030 +60, "filter",             6, 0, 0xc003, 15 },
   { NULL       , NULL       , "USEFILTER",          9, 1, 0xc015, 0 },
   { NULL       , s_cm030 +62, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm030 +63, "ex",                 2, 0, 0xc003, 16 },
   { NULL       , NULL       , "EXCLUSIVE",          9, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr030[ 67 ] = {
   { s_cr030 + 1, NULL       , "ordCondSet",        10, 1, 0xc015, 0 },
   { s_cr030 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr030 + 3, NULL       , "for",                3, 1, 0xc00d, 1 },
   { s_cr030 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr030 + 5, NULL       , "for",                3, 1, 0xc00f, 1 },
   { s_cr030 + 6, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr030 + 8, s_cr030 + 7, "[",                  1, 1, 0xc012, 0 },
   { NULL       , NULL       , "all",                3, 1, 0xc010, 2 },
   { s_cr030 + 9, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr030 +10, NULL       , "while",              5, 1, 0xc00f, 3 },
   { s_cr030 +11, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr030 +12, NULL       , "eval",               4, 1, 0xc00f, 4 },
   { s_cr030 +13, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr030 +14, NULL       , "every",              5, 1, 0xc00b, 5 },
   { s_cr030 +15, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr030 +16, NULL       , "RecNo",              5, 1, 0xc015, 0 },
   { s_cr030 +17, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr030 +18, NULL       , ")",                  1, 0, 0xc033, 0 },
   { s_cr030 +19, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr030 +20, NULL       , "next",               4, 1, 0xc00b, 6 },
   { s_cr030 +21, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr030 +22, NULL       , "rec",                3, 1, 0xc00b, 7 },
   { s_cr030 +23, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr030 +25, s_cr030 +24, "[",                  1, 1, 0xc012, 0 },
   { NULL       , NULL       , "rest",               4, 1, 0xc010, 8 },
   { s_cr030 +26, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr030 +28, s_cr030 +27, "[",                  1, 1, 0xc012, 0 },
   { NULL       , NULL       , "descend",            7, 1, 0xc010, 9 },
   { s_cr030 +29, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr030 +30, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr030 +32, s_cr030 +31, "[",                  1, 1, 0xc012, 0 },
   { NULL       , NULL       , "add",                3, 1, 0xc010, 10 },
   { s_cr030 +33, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr030 +35, s_cr030 +34, "[",                  1, 1, 0xc012, 0 },
   { NULL       , NULL       , "cur",                3, 1, 0xc010, 11 },
   { s_cr030 +36, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr030 +38, s_cr030 +37, "[",                  1, 1, 0xc012, 0 },
   { NULL       , NULL       , "cust",               4, 1, 0xc010, 12 },
   { s_cr030 +39, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr030 +41, s_cr030 +40, "[",                  1, 1, 0xc012, 0 },
   { NULL       , NULL       , "noopt",              5, 1, 0xc010, 13 },
   { s_cr030 +42, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr030 +43, NULL       , "while",              5, 1, 0xc00d, 3 },
   { s_cr030 +44, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr030 +46, s_cr030 +45, "[",                  1, 1, 0xc012, 0 },
   { NULL       , NULL       , "mem",                3, 1, 0xc010, 14 },
   { s_cr030 +47, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr030 +49, s_cr030 +48, "[",                  1, 1, 0xc012, 0 },
   { NULL       , NULL       , "filter",             6, 1, 0xc010, 15 },
   { s_cr030 +50, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr030 +52, s_cr030 +51, "[",                  1, 1, 0xc012, 0 },
   { NULL       , NULL       , "ex",                 2, 1, 0xc010, 16 },
   { s_cr030 +53, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr030 +54, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr030 +55, NULL       , "ordCreate",          9, 1, 0xc015, 0 },
   { s_cr030 +56, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr030 +57, NULL       , "bag",                3, 1, 0xc00e, 17 },
   { s_cr030 +58, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr030 +59, NULL       , "tag",                3, 1, 0xc00e, 18 },
   { s_cr030 +60, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr030 +61, NULL       , "key",                3, 1, 0xc00d, 19 },
   { s_cr030 +62, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr030 +63, NULL       , "key",                3, 1, 0xc00f, 19 },
   { s_cr030 +64, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr030 +66, s_cr030 +65, "[",                  1, 1, 0xc012, 0 },
   { NULL       , NULL       , "unique",             6, 1, 0xc010, 20 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm031[ 64 ] = {
   { s_cm031 + 1, NULL       , "INDEX",              5, 1, 0xc015, 0 },
   { s_cm031 + 2, NULL       , "ON",                 2, 1, 0xc015, 0 },
   { s_cm031 + 3, NULL       , "key",                3, 0, 0xe001, 19 },
   { s_cm031 + 6, s_cm031 + 4, "[",                  1, 1, 0xe007, 0 },
   { s_cm031 + 5, NULL       , "TAG",                3, 0, 0xc015, 0 },
   { NULL       , NULL       , "tag",                3, 0, 0xe005, 18 },
   { s_cm031 + 7, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { s_cm031 + 8, NULL       , "bag",                3, 0, 0xe005, 17 },
   { s_cm031 +11, s_cm031 + 9, "[",                  1, 1, 0xe007, 0 },
   { s_cm031 +10, NULL       , "FOR",                3, 0, 0xc015, 0 },
   { NULL       , NULL       , "for",                3, 0, 0xe001, 1 },
   { s_cm031 +14, s_cm031 +12, "[",                  1, 1, 0xe007, 0 },
   { s_cm031 +13, NULL       , "WHILE",              5, 0, 0xc015, 0 },
   { NULL       , NULL       , "while",              5, 0, 0xe001, 3 },
   { s_cm031 +17, s_cm031 +15, "[",                  1, 1, 0xe007, 0 },
   { s_cm031 +16, NULL       , "NEXT",               4, 0, 0xc015, 0 },
   { NULL       , NULL       , "next",               4, 0, 0xe001, 6 },
   { s_cm031 +20, s_cm031 +18, "[",                  1, 1, 0xe007, 0 },
   { s_cm031 +19, NULL       , "RECORD",             6, 0, 0xc015, 0 },
   { NULL       , NULL       , "rec",                3, 0, 0xe001, 7 },
   { s_cm031 +23, s_cm031 +21, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm031 +22, "rest",               4, 0, 0xc003, 8 },
   { NULL       , NULL       , "REST",               4, 0, 0xc015, 0 },
   { s_cm031 +26, s_cm031 +24, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm031 +25, "all",                3, 0, 0xc003, 2 },
   { NULL       , NULL       , "ALL",                3, 0, 0xc015, 0 },
   { s_cm031 +29, s_cm031 +27, "[",                  1, 1, 0xe007, 0 },
   { s_cm031 +28, NULL       , "EVAL",               4, 0, 0xc015, 0 },
   { NULL       , NULL       , "eval",               4, 0, 0xe001, 4 },
   { s_cm031 +32, s_cm031 +30, "[",                  1, 1, 0xe007, 0 },
   { s_cm031 +31, NULL       , "EVERY",              5, 0, 0xc015, 0 },
   { NULL       , NULL       , "every",              5, 0, 0xe001, 5 },
   { s_cm031 +35, s_cm031 +33, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm031 +34, "unique",             6, 0, 0xc003, 20 },
   { NULL       , NULL       , "UNIQUE",             6, 1, 0xc015, 0 },
   { s_cm031 +38, s_cm031 +36, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm031 +37, "ascend",             6, 0, 0xc003, 0 },
   { NULL       , NULL       , "ASCENDING",          9, 1, 0xc015, 0 },
   { s_cm031 +41, s_cm031 +39, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm031 +40, "descend",            7, 0, 0xc003, 9 },
   { NULL       , NULL       , "DESCENDING",        10, 1, 0xc015, 0 },
   { s_cm031 +44, s_cm031 +42, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm031 +43, "add",                3, 0, 0xc003, 10 },
   { NULL       , NULL       , "ADDITIVE",           8, 1, 0xc015, 0 },
   { s_cm031 +47, s_cm031 +45, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm031 +46, "cur",                3, 0, 0xc003, 11 },
   { NULL       , NULL       , "USECURRENT",        10, 1, 0xc015, 0 },
   { s_cm031 +50, s_cm031 +48, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm031 +49, "cust",               4, 0, 0xc003, 12 },
   { NULL       , NULL       , "CUSTOM",             6, 1, 0xc015, 0 },
   { s_cm031 +53, s_cm031 +51, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm031 +52, "noopt",              5, 0, 0xc003, 13 },
   { NULL       , NULL       , "NOOPTIMIZE",        10, 1, 0xc015, 0 },
   { s_cm031 +58, s_cm031 +54, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm031 +55, "mem",                3, 0, 0xc003, 14 },
   { s_cm031 +56, NULL       , "MEMORY",             6, 1, 0xc015, 0 },
   { s_cm031 +57, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { NULL       , NULL       , "TEMPORARY",          9, 1, 0xc015, 0 },
   { s_cm031 +61, s_cm031 +59, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm031 +60, "filter",             6, 0, 0xc003, 15 },
   { NULL       , NULL       , "USEFILTER",          9, 1, 0xc015, 0 },
   { NULL       , s_cm031 +62, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm031 +63, "ex",                 2, 0, 0xc003, 16 },
   { NULL       , NULL       , "EXCLUSIVE",          9, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr031[ 67 ] = {
   { s_cr031 + 1, NULL       , "ordCondSet",        10, 1, 0xc015, 0 },
   { s_cr031 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr031 + 3, NULL       , "for",                3, 1, 0xc00d, 1 },
   { s_cr031 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr031 + 5, NULL       , "for",                3, 1, 0xc00f, 1 },
   { s_cr031 + 6, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr031 + 8, s_cr031 + 7, "[",                  1, 1, 0xc012, 0 },
   { NULL       , NULL       , "all",                3, 1, 0xc010, 2 },
   { s_cr031 + 9, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr031 +10, NULL       , "while",              5, 1, 0xc00f, 3 },
   { s_cr031 +11, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr031 +12, NULL       , "eval",               4, 1, 0xc00f, 4 },
   { s_cr031 +13, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr031 +14, NULL       , "every",              5, 1, 0xc00b, 5 },
   { s_cr031 +15, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr031 +16, NULL       , "RecNo",              5, 1, 0xc015, 0 },
   { s_cr031 +17, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr031 +18, NULL       , ")",                  1, 0, 0xc033, 0 },
   { s_cr031 +19, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr031 +20, NULL       , "next",               4, 1, 0xc00b, 6 },
   { s_cr031 +21, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr031 +22, NULL       , "rec",                3, 1, 0xc00b, 7 },
   { s_cr031 +23, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr031 +25, s_cr031 +24, "[",                  1, 1, 0xc012, 0 },
   { NULL       , NULL       , "rest",               4, 1, 0xc010, 8 },
   { s_cr031 +26, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr031 +28, s_cr031 +27, "[",                  1, 1, 0xc012, 0 },
   { NULL       , NULL       , "descend",            7, 1, 0xc010, 9 },
   { s_cr031 +29, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr031 +30, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr031 +32, s_cr031 +31, "[",                  1, 1, 0xc012, 0 },
   { NULL       , NULL       , "add",                3, 1, 0xc010, 10 },
   { s_cr031 +33, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr031 +35, s_cr031 +34, "[",                  1, 1, 0xc012, 0 },
   { NULL       , NULL       , "cur",                3, 1, 0xc010, 11 },
   { s_cr031 +36, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr031 +38, s_cr031 +37, "[",                  1, 1, 0xc012, 0 },
   { NULL       , NULL       , "cust",               4, 1, 0xc010, 12 },
   { s_cr031 +39, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr031 +41, s_cr031 +40, "[",                  1, 1, 0xc012, 0 },
   { NULL       , NULL       , "noopt",              5, 1, 0xc010, 13 },
   { s_cr031 +42, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr031 +43, NULL       , "while",              5, 1, 0xc00d, 3 },
   { s_cr031 +44, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr031 +46, s_cr031 +45, "[",                  1, 1, 0xc012, 0 },
   { NULL       , NULL       , "mem",                3, 1, 0xc010, 14 },
   { s_cr031 +47, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr031 +49, s_cr031 +48, "[",                  1, 1, 0xc012, 0 },
   { NULL       , NULL       , "filter",             6, 1, 0xc010, 15 },
   { s_cr031 +50, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr031 +52, s_cr031 +51, "[",                  1, 1, 0xc012, 0 },
   { NULL       , NULL       , "ex",                 2, 1, 0xc010, 16 },
   { s_cr031 +53, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr031 +54, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr031 +55, NULL       , "ordCreate",          9, 1, 0xc015, 0 },
   { s_cr031 +56, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr031 +57, NULL       , "bag",                3, 1, 0xc00e, 17 },
   { s_cr031 +58, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr031 +59, NULL       , "tag",                3, 1, 0xc00e, 18 },
   { s_cr031 +60, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr031 +61, NULL       , "key",                3, 1, 0xc00d, 19 },
   { s_cr031 +62, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr031 +63, NULL       , "key",                3, 1, 0xc00f, 19 },
   { s_cr031 +64, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr031 +66, s_cr031 +65, "[",                  1, 1, 0xc012, 0 },
   { NULL       , NULL       , "unique",             6, 1, 0xc010, 20 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm032[ 12 ] = {
   { s_cm032 + 1, NULL       , "DELETE",             6, 1, 0xc015, 0 },
   { s_cm032 + 2, NULL       , "TAG",                3, 1, 0xc015, 0 },
   { s_cm032 + 3, NULL       , "tag1",               4, 0, 0xe005, 1 },
   { s_cm032 + 6, s_cm032 + 4, "[",                  1, 1, 0xe007, 0 },
   { s_cm032 + 5, NULL       , "IN",                 2, 0, 0xc015, 0 },
   { NULL       , NULL       , "bag1",               4, 0, 0xe005, 2 },
   { NULL       , s_cm032 + 7, "[",                  1, 1, 0xe007, 0 },
   { s_cm032 + 8, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm032 + 9, NULL       , "tagN",               4, 0, 0xe005, 3 },
   { NULL       , s_cm032 +10, "[",                  1, 1, 0xe007, 0 },
   { s_cm032 +11, NULL       , "IN",                 2, 0, 0xc015, 0 },
   { NULL       , NULL       , "bagN",               4, 0, 0xe005, 4 }
};
static HB_PP_TOKEN s_cr032[ 14 ] = {
   { s_cr032 + 1, NULL       , "ordDestroy",        10, 1, 0xc015, 0 },
   { s_cr032 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr032 + 3, NULL       , "tag1",               4, 1, 0xc00e, 1 },
   { s_cr032 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr032 + 5, NULL       , "bag1",               4, 1, 0xc00e, 2 },
   { s_cr032 + 6, NULL       , ")",                  1, 1, 0xc033, 0 },
   { NULL       , s_cr032 + 7, "[",                  1, 0, 0xc012, 0 },
   { s_cr032 + 8, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr032 + 9, NULL       , "ordDestroy",        10, 1, 0xc015, 0 },
   { s_cr032 +10, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr032 +11, NULL       , "tagN",               4, 1, 0xc00e, 3 },
   { s_cr032 +12, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr032 +13, NULL       , "bagN",               4, 1, 0xc00e, 4 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm033[ 34 ] = {
   { s_cm033 + 1, NULL       , "LABEL",              5, 1, 0xc015, 0 },
   { s_cm033 + 2, NULL       , "FORM",               4, 1, 0xc015, 0 },
   { s_cm033 + 3, NULL       , "lbl",                3, 0, 0xe001, 1 },
   { s_cm033 + 6, s_cm033 + 4, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm033 + 5, "smp",                3, 0, 0xc003, 10 },
   { NULL       , NULL       , "SAMPLE",             6, 0, 0xc015, 0 },
   { s_cm033 + 9, s_cm033 + 7, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm033 + 8, "nocon",              5, 0, 0xc003, 4 },
   { NULL       , NULL       , "NOCONSOLE",          9, 0, 0xc015, 0 },
   { s_cm033 +13, s_cm033 +10, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm033 +11, "prn",                3, 0, 0xc003, 2 },
   { s_cm033 +12, NULL       , "TO",                 2, 0, 0xc015, 0 },
   { NULL       , NULL       , "PRINTER",            7, 1, 0xc015, 0 },
   { s_cm033 +17, s_cm033 +14, "[",                  1, 1, 0xe007, 0 },
   { s_cm033 +15, NULL       , "TO",                 2, 0, 0xc015, 0 },
   { s_cm033 +16, NULL       , "FILE",               4, 1, 0xc015, 0 },
   { NULL       , NULL       , "f",                  1, 0, 0xe005, 3 },
   { s_cm033 +20, s_cm033 +18, "[",                  1, 1, 0xe007, 0 },
   { s_cm033 +19, NULL       , "FOR",                3, 0, 0xc015, 0 },
   { NULL       , NULL       , "for",                3, 0, 0xe001, 5 },
   { s_cm033 +23, s_cm033 +21, "[",                  1, 1, 0xe007, 0 },
   { s_cm033 +22, NULL       , "WHILE",              5, 0, 0xc015, 0 },
   { NULL       , NULL       , "while",              5, 0, 0xe001, 6 },
   { s_cm033 +26, s_cm033 +24, "[",                  1, 1, 0xe007, 0 },
   { s_cm033 +25, NULL       , "NEXT",               4, 0, 0xc015, 0 },
   { NULL       , NULL       , "next",               4, 0, 0xe001, 7 },
   { s_cm033 +29, s_cm033 +27, "[",                  1, 1, 0xe007, 0 },
   { s_cm033 +28, NULL       , "RECORD",             6, 0, 0xc015, 0 },
   { NULL       , NULL       , "rec",                3, 0, 0xe001, 8 },
   { s_cm033 +32, s_cm033 +30, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm033 +31, "rest",               4, 0, 0xc003, 9 },
   { NULL       , NULL       , "REST",               4, 0, 0xc015, 0 },
   { NULL       , s_cm033 +33, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "ALL",                3, 0, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr033[ 22 ] = {
   { s_cr033 + 1, NULL       , "__LabelForm",       11, 1, 0xc015, 0 },
   { s_cr033 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr033 + 3, NULL       , "lbl",                3, 1, 0xc00e, 1 },
   { s_cr033 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr033 + 5, NULL       , "prn",                3, 1, 0xc010, 2 },
   { s_cr033 + 6, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr033 + 7, NULL       , "f",                  1, 1, 0xc00e, 3 },
   { s_cr033 + 8, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr033 + 9, NULL       , "nocon",              5, 1, 0xc010, 4 },
   { s_cr033 +10, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr033 +11, NULL       , "for",                3, 1, 0xc00f, 5 },
   { s_cr033 +12, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr033 +13, NULL       , "while",              5, 1, 0xc00f, 6 },
   { s_cr033 +14, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr033 +15, NULL       , "next",               4, 1, 0xc00b, 7 },
   { s_cr033 +16, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr033 +17, NULL       , "rec",                3, 1, 0xc00b, 8 },
   { s_cr033 +18, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr033 +19, NULL       , "rest",               4, 1, 0xc010, 9 },
   { s_cr033 +20, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr033 +21, NULL       , "smp",                3, 1, 0xc010, 10 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm034[ 43 ] = {
   { s_cm034 + 1, NULL       , "REPORT",             6, 1, 0xc015, 0 },
   { s_cm034 + 2, NULL       , "FORM",               4, 1, 0xc015, 0 },
   { s_cm034 + 3, NULL       , "frm",                3, 0, 0xe001, 1 },
   { s_cm034 + 6, s_cm034 + 4, "[",                  1, 1, 0xe007, 0 },
   { s_cm034 + 5, NULL       , "HEADING",            7, 0, 0xc015, 0 },
   { NULL       , NULL       , "head",               4, 0, 0xe001, 11 },
   { s_cm034 + 9, s_cm034 + 7, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm034 + 8, "plain",              5, 0, 0xc003, 10 },
   { NULL       , NULL       , "PLAIN",              5, 0, 0xc015, 0 },
   { s_cm034 +12, s_cm034 +10, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm034 +11, "noej",               4, 0, 0xc003, 12 },
   { NULL       , NULL       , "NOEJECT",            7, 0, 0xc015, 0 },
   { s_cm034 +15, s_cm034 +13, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm034 +14, "sum",                3, 0, 0xc003, 13 },
   { NULL       , NULL       , "SUMMARY",            7, 0, 0xc015, 0 },
   { s_cm034 +18, s_cm034 +16, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm034 +17, "nocon",              5, 0, 0xc003, 4 },
   { NULL       , NULL       , "NOCONSOLE",          9, 0, 0xc015, 0 },
   { s_cm034 +22, s_cm034 +19, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm034 +20, "prn",                3, 0, 0xc003, 2 },
   { s_cm034 +21, NULL       , "TO",                 2, 0, 0xc015, 0 },
   { NULL       , NULL       , "PRINTER",            7, 1, 0xc015, 0 },
   { s_cm034 +26, s_cm034 +23, "[",                  1, 1, 0xe007, 0 },
   { s_cm034 +24, NULL       , "TO",                 2, 0, 0xc015, 0 },
   { s_cm034 +25, NULL       , "FILE",               4, 1, 0xc015, 0 },
   { NULL       , NULL       , "f",                  1, 0, 0xe005, 3 },
   { s_cm034 +29, s_cm034 +27, "[",                  1, 1, 0xe007, 0 },
   { s_cm034 +28, NULL       , "FOR",                3, 0, 0xc015, 0 },
   { NULL       , NULL       , "for",                3, 0, 0xe001, 5 },
   { s_cm034 +32, s_cm034 +30, "[",                  1, 1, 0xe007, 0 },
   { s_cm034 +31, NULL       , "WHILE",              5, 0, 0xc015, 0 },
   { NULL       , NULL       , "while",              5, 0, 0xe001, 6 },
   { s_cm034 +35, s_cm034 +33, "[",                  1, 1, 0xe007, 0 },
   { s_cm034 +34, NULL       , "NEXT",               4, 0, 0xc015, 0 },
   { NULL       , NULL       , "next",               4, 0, 0xe001, 7 },
   { s_cm034 +38, s_cm034 +36, "[",                  1, 1, 0xe007, 0 },
   { s_cm034 +37, NULL       , "RECORD",             6, 0, 0xc015, 0 },
   { NULL       , NULL       , "rec",                3, 0, 0xe001, 8 },
   { s_cm034 +41, s_cm034 +39, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm034 +40, "rest",               4, 0, 0xc003, 9 },
   { NULL       , NULL       , "REST",               4, 0, 0xc015, 0 },
   { NULL       , s_cm034 +42, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "ALL",                3, 0, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr034[ 28 ] = {
   { s_cr034 + 1, NULL       , "__ReportForm",      12, 1, 0xc015, 0 },
   { s_cr034 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr034 + 3, NULL       , "frm",                3, 1, 0xc00e, 1 },
   { s_cr034 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr034 + 5, NULL       , "prn",                3, 1, 0xc010, 2 },
   { s_cr034 + 6, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr034 + 7, NULL       , "f",                  1, 1, 0xc00e, 3 },
   { s_cr034 + 8, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr034 + 9, NULL       , "nocon",              5, 1, 0xc010, 4 },
   { s_cr034 +10, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr034 +11, NULL       , "for",                3, 1, 0xc00f, 5 },
   { s_cr034 +12, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr034 +13, NULL       , "while",              5, 1, 0xc00f, 6 },
   { s_cr034 +14, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr034 +15, NULL       , "next",               4, 1, 0xc00b, 7 },
   { s_cr034 +16, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr034 +17, NULL       , "rec",                3, 1, 0xc00b, 8 },
   { s_cr034 +18, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr034 +19, NULL       , "rest",               4, 1, 0xc010, 9 },
   { s_cr034 +20, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr034 +21, NULL       , "plain",              5, 1, 0xc010, 10 },
   { s_cr034 +22, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr034 +23, NULL       , "head",               4, 1, 0xc00b, 11 },
   { s_cr034 +24, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr034 +25, NULL       , "noej",               4, 1, 0xc010, 12 },
   { s_cr034 +26, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr034 +27, NULL       , "sum",                3, 1, 0xc010, 13 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm035[ 32 ] = {
   { s_cm035 + 1, NULL       , "DISPLAY",            7, 1, 0xc015, 0 },
   { s_cm035 + 4, s_cm035 + 2, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm035 + 3, "off",                3, 0, 0xc003, 1 },
   { NULL       , NULL       , "OFF",                3, 0, 0xc015, 0 },
   { s_cm035 + 8, s_cm035 + 5, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm035 + 6, "prn",                3, 0, 0xc003, 9 },
   { s_cm035 + 7, NULL       , "TO",                 2, 0, 0xc015, 0 },
   { NULL       , NULL       , "PRINTER",            7, 1, 0xc015, 0 },
   { s_cm035 +12, s_cm035 + 9, "[",                  1, 1, 0xe007, 0 },
   { s_cm035 +10, NULL       , "TO",                 2, 0, 0xc015, 0 },
   { s_cm035 +11, NULL       , "FILE",               4, 1, 0xc015, 0 },
   { NULL       , NULL       , "f",                  1, 0, 0xe005, 10 },
   { s_cm035 +15, s_cm035 +13, "[",                  1, 1, 0xe007, 0 },
   { s_cm035 +14, NULL       , "FOR",                3, 0, 0xc015, 0 },
   { NULL       , NULL       , "for",                3, 0, 0xe001, 4 },
   { s_cm035 +18, s_cm035 +16, "[",                  1, 1, 0xe007, 0 },
   { s_cm035 +17, NULL       , "WHILE",              5, 0, 0xc015, 0 },
   { NULL       , NULL       , "while",              5, 0, 0xe001, 5 },
   { s_cm035 +21, s_cm035 +19, "[",                  1, 1, 0xe007, 0 },
   { s_cm035 +20, NULL       , "NEXT",               4, 0, 0xc015, 0 },
   { NULL       , NULL       , "next",               4, 0, 0xe001, 6 },
   { s_cm035 +24, s_cm035 +22, "[",                  1, 1, 0xe007, 0 },
   { s_cm035 +23, NULL       , "RECORD",             6, 0, 0xc015, 0 },
   { NULL       , NULL       , "rec",                3, 0, 0xe001, 7 },
   { s_cm035 +27, s_cm035 +25, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm035 +26, "rest",               4, 0, 0xc003, 8 },
   { NULL       , NULL       , "REST",               4, 0, 0xc015, 0 },
   { s_cm035 +30, s_cm035 +28, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm035 +29, "all",                3, 0, 0xc003, 3 },
   { NULL       , NULL       , "ALL",                3, 0, 0xc015, 0 },
   { NULL       , s_cm035 +31, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "v",                  1, 0, 0xe002, 2 }
};
static HB_PP_TOKEN s_cr035[ 24 ] = {
   { s_cr035 + 1, NULL       , "__dbList",           8, 1, 0xc015, 0 },
   { s_cr035 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr035 + 3, NULL       , "off",                3, 1, 0xc010, 1 },
   { s_cr035 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr035 + 5, NULL       , "{",                  1, 1, 0xc036, 0 },
   { s_cr035 + 6, NULL       , "v",                  1, 1, 0xc00f, 2 },
   { s_cr035 + 7, NULL       , "}",                  1, 1, 0xc037, 0 },
   { s_cr035 + 8, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr035 + 9, NULL       , "all",                3, 1, 0xc010, 3 },
   { s_cr035 +10, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr035 +11, NULL       , "for",                3, 1, 0xc00f, 4 },
   { s_cr035 +12, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr035 +13, NULL       , "while",              5, 1, 0xc00f, 5 },
   { s_cr035 +14, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr035 +15, NULL       , "next",               4, 1, 0xc00b, 6 },
   { s_cr035 +16, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr035 +17, NULL       , "rec",                3, 1, 0xc00b, 7 },
   { s_cr035 +18, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr035 +19, NULL       , "rest",               4, 1, 0xc010, 8 },
   { s_cr035 +20, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr035 +21, NULL       , "prn",                3, 1, 0xc010, 9 },
   { s_cr035 +22, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr035 +23, NULL       , "f",                  1, 1, 0xc00e, 10 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm036[ 31 ] = {
   { s_cm036 + 1, NULL       , "LIST",               4, 1, 0xc015, 0 },
   { s_cm036 + 4, s_cm036 + 2, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm036 + 3, "off",                3, 0, 0xc003, 1 },
   { NULL       , NULL       , "OFF",                3, 0, 0xc015, 0 },
   { s_cm036 + 8, s_cm036 + 5, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm036 + 6, "prn",                3, 0, 0xc003, 8 },
   { s_cm036 + 7, NULL       , "TO",                 2, 0, 0xc015, 0 },
   { NULL       , NULL       , "PRINTER",            7, 1, 0xc015, 0 },
   { s_cm036 +12, s_cm036 + 9, "[",                  1, 1, 0xe007, 0 },
   { s_cm036 +10, NULL       , "TO",                 2, 0, 0xc015, 0 },
   { s_cm036 +11, NULL       , "FILE",               4, 1, 0xc015, 0 },
   { NULL       , NULL       , "f",                  1, 0, 0xe005, 9 },
   { s_cm036 +15, s_cm036 +13, "[",                  1, 1, 0xe007, 0 },
   { s_cm036 +14, NULL       , "FOR",                3, 0, 0xc015, 0 },
   { NULL       , NULL       , "for",                3, 0, 0xe001, 3 },
   { s_cm036 +18, s_cm036 +16, "[",                  1, 1, 0xe007, 0 },
   { s_cm036 +17, NULL       , "WHILE",              5, 0, 0xc015, 0 },
   { NULL       , NULL       , "while",              5, 0, 0xe001, 4 },
   { s_cm036 +21, s_cm036 +19, "[",                  1, 1, 0xe007, 0 },
   { s_cm036 +20, NULL       , "NEXT",               4, 0, 0xc015, 0 },
   { NULL       , NULL       , "next",               4, 0, 0xe001, 5 },
   { s_cm036 +24, s_cm036 +22, "[",                  1, 1, 0xe007, 0 },
   { s_cm036 +23, NULL       , "RECORD",             6, 0, 0xc015, 0 },
   { NULL       , NULL       , "rec",                3, 0, 0xe001, 6 },
   { s_cm036 +27, s_cm036 +25, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm036 +26, "rest",               4, 0, 0xc003, 7 },
   { NULL       , NULL       , "REST",               4, 0, 0xc015, 0 },
   { s_cm036 +29, s_cm036 +28, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "ALL",                3, 0, 0xc015, 0 },
   { NULL       , s_cm036 +30, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "v",                  1, 0, 0xe002, 2 }
};
static HB_PP_TOKEN s_cr036[ 24 ] = {
   { s_cr036 + 1, NULL       , "__dbList",           8, 1, 0xc015, 0 },
   { s_cr036 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr036 + 3, NULL       , "off",                3, 1, 0xc010, 1 },
   { s_cr036 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr036 + 5, NULL       , "{",                  1, 1, 0xc036, 0 },
   { s_cr036 + 6, NULL       , "v",                  1, 1, 0xc00f, 2 },
   { s_cr036 + 7, NULL       , "}",                  1, 1, 0xc037, 0 },
   { s_cr036 + 8, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr036 + 9, NULL       , ".T.",                3, 1, 0xc02d, 0 },
   { s_cr036 +10, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr036 +11, NULL       , "for",                3, 1, 0xc00f, 3 },
   { s_cr036 +12, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr036 +13, NULL       , "while",              5, 1, 0xc00f, 4 },
   { s_cr036 +14, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr036 +15, NULL       , "next",               4, 1, 0xc00b, 5 },
   { s_cr036 +16, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr036 +17, NULL       , "rec",                3, 1, 0xc00b, 6 },
   { s_cr036 +18, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr036 +19, NULL       , "rest",               4, 1, 0xc010, 7 },
   { s_cr036 +20, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr036 +21, NULL       , "prn",                3, 1, 0xc010, 8 },
   { s_cr036 +22, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr036 +23, NULL       , "f",                  1, 1, 0xc00e, 9 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm037[ 28 ] = {
   { s_cm037 + 1, NULL       , "AVERAGE",            7, 1, 0xc015, 0 },
   { s_cm037 +11, s_cm037 + 2, "[",                  1, 1, 0xe007, 0 },
   { s_cm037 + 3, NULL       , "x1",                 2, 0, 0xe001, 3 },
   { s_cm037 + 6, s_cm037 + 4, "[",                  1, 1, 0xe007, 0 },
   { s_cm037 + 5, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { NULL       , NULL       , "xN",                 2, 0, 0xe001, 4 },
   { s_cm037 + 7, NULL       , "TO",                 2, 2, 0xc015, 0 },
   { s_cm037 + 8, NULL       , "v1",                 2, 0, 0xe001, 1 },
   { NULL       , s_cm037 + 9, "[",                  1, 0, 0xe007, 0 },
   { s_cm037 +10, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { NULL       , NULL       , "vN",                 2, 0, 0xe001, 2 },
   { s_cm037 +14, s_cm037 +12, "[",                  1, 1, 0xe007, 0 },
   { s_cm037 +13, NULL       , "FOR",                3, 0, 0xc015, 0 },
   { NULL       , NULL       , "for",                3, 0, 0xe001, 5 },
   { s_cm037 +17, s_cm037 +15, "[",                  1, 1, 0xe007, 0 },
   { s_cm037 +16, NULL       , "WHILE",              5, 0, 0xc015, 0 },
   { NULL       , NULL       , "while",              5, 0, 0xe001, 6 },
   { s_cm037 +20, s_cm037 +18, "[",                  1, 1, 0xe007, 0 },
   { s_cm037 +19, NULL       , "NEXT",               4, 0, 0xc015, 0 },
   { NULL       , NULL       , "next",               4, 0, 0xe001, 7 },
   { s_cm037 +23, s_cm037 +21, "[",                  1, 1, 0xe007, 0 },
   { s_cm037 +22, NULL       , "RECORD",             6, 0, 0xc015, 0 },
   { NULL       , NULL       , "rec",                3, 0, 0xe001, 8 },
   { s_cm037 +26, s_cm037 +24, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm037 +25, "rest",               4, 0, 0xc003, 9 },
   { NULL       , NULL       , "REST",               4, 0, 0xc015, 0 },
   { NULL       , s_cm037 +27, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "ALL",                3, 0, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr037[ 67 ] = {
   { s_cr037 + 1, NULL       , "M",                  1, 1, 0xc015, 0 },
   { s_cr037 + 2, NULL       , "->",                 2, 0, 0xc03b, 0 },
   { s_cr037 + 3, NULL       , "__Avg",              5, 0, 0xc015, 0 },
   { s_cr037 + 4, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr037 + 5, NULL       , "v1",                 2, 1, 0xc00b, 1 },
   { s_cr037 + 6, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr037 + 9, s_cr037 + 7, "[",                  1, 0, 0xc012, 0 },
   { s_cr037 + 8, NULL       , "vN",                 2, 1, 0xc00b, 2 },
   { NULL       , NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr037 +10, NULL       , "0",                  1, 1, 0xc02a, 0 },
   { s_cr037 +11, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr037 +12, NULL       , "dbEval",             6, 1, 0xc015, 0 },
   { s_cr037 +13, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr037 +14, NULL       , "{",                  1, 1, 0xc036, 0 },
   { s_cr037 +15, NULL       , "|",                  1, 0, 0xc01b, 0 },
   { s_cr037 +16, NULL       , "|",                  1, 0, 0xc01b, 0 },
   { s_cr037 +17, NULL       , "M",                  1, 1, 0xc015, 0 },
   { s_cr037 +18, NULL       , "->",                 2, 0, 0xc03b, 0 },
   { s_cr037 +19, NULL       , "__Avg",              5, 0, 0xc015, 0 },
   { s_cr037 +20, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr037 +21, NULL       , "M",                  1, 1, 0xc015, 0 },
   { s_cr037 +22, NULL       , "->",                 2, 0, 0xc03b, 0 },
   { s_cr037 +23, NULL       , "__Avg",              5, 0, 0xc015, 0 },
   { s_cr037 +24, NULL       , "+",                  1, 1, 0xc050, 0 },
   { s_cr037 +25, NULL       , "1",                  1, 1, 0xc02a, 0 },
   { s_cr037 +26, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr037 +27, NULL       , "v1",                 2, 1, 0xc00b, 1 },
   { s_cr037 +28, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr037 +29, NULL       , "v1",                 2, 1, 0xc00b, 1 },
   { s_cr037 +30, NULL       , "+",                  1, 1, 0xc050, 0 },
   { s_cr037 +31, NULL       , "x1",                 2, 1, 0xc00b, 3 },
   { s_cr037 +38, s_cr037 +32, "[",                  1, 0, 0xc012, 0 },
   { s_cr037 +33, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr037 +34, NULL       , "vN",                 2, 1, 0xc00b, 2 },
   { s_cr037 +35, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr037 +36, NULL       , "vN",                 2, 1, 0xc00b, 2 },
   { s_cr037 +37, NULL       , "+",                  1, 1, 0xc050, 0 },
   { NULL       , NULL       , "xN",                 2, 1, 0xc00b, 4 },
   { s_cr037 +39, NULL       , "}",                  1, 1, 0xc037, 0 },
   { s_cr037 +40, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr037 +41, NULL       , "for",                3, 1, 0xc00f, 5 },
   { s_cr037 +42, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr037 +43, NULL       , "while",              5, 1, 0xc00f, 6 },
   { s_cr037 +44, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr037 +45, NULL       , "next",               4, 1, 0xc00b, 7 },
   { s_cr037 +46, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr037 +47, NULL       , "rec",                3, 1, 0xc00b, 8 },
   { s_cr037 +48, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr037 +49, NULL       , "rest",               4, 1, 0xc010, 9 },
   { s_cr037 +50, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr037 +51, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr037 +52, NULL       , "v1",                 2, 1, 0xc00b, 1 },
   { s_cr037 +53, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr037 +54, NULL       , "v1",                 2, 1, 0xc00b, 1 },
   { s_cr037 +55, NULL       , "/",                  1, 1, 0xc053, 0 },
   { s_cr037 +56, NULL       , "M",                  1, 1, 0xc015, 0 },
   { s_cr037 +57, NULL       , "->",                 2, 0, 0xc03b, 0 },
   { s_cr037 +58, NULL       , "__Avg",              5, 0, 0xc015, 0 },
   { NULL       , s_cr037 +59, "[",                  1, 0, 0xc012, 0 },
   { s_cr037 +60, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr037 +61, NULL       , "vN",                 2, 1, 0xc00b, 2 },
   { s_cr037 +62, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr037 +63, NULL       , "vN",                 2, 1, 0xc00b, 2 },
   { s_cr037 +64, NULL       , "/",                  1, 1, 0xc053, 0 },
   { s_cr037 +65, NULL       , "M",                  1, 1, 0xc015, 0 },
   { s_cr037 +66, NULL       , "->",                 2, 0, 0xc03b, 0 },
   { NULL       , NULL       , "__Avg",              5, 0, 0xc015, 0 }
};
static HB_PP_TOKEN s_cm038[ 28 ] = {
   { s_cm038 + 1, NULL       , "SUM",                3, 1, 0xc015, 0 },
   { s_cm038 +11, s_cm038 + 2, "[",                  1, 1, 0xe007, 0 },
   { s_cm038 + 3, NULL       , "x1",                 2, 0, 0xe001, 3 },
   { s_cm038 + 6, s_cm038 + 4, "[",                  1, 0, 0xe007, 0 },
   { s_cm038 + 5, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { NULL       , NULL       , "xN",                 2, 0, 0xe001, 4 },
   { s_cm038 + 7, NULL       , "TO",                 2, 2, 0xc015, 0 },
   { s_cm038 + 8, NULL       , "v1",                 2, 0, 0xe001, 1 },
   { NULL       , s_cm038 + 9, "[",                  1, 1, 0xe007, 0 },
   { s_cm038 +10, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { NULL       , NULL       , "vN",                 2, 0, 0xe001, 2 },
   { s_cm038 +14, s_cm038 +12, "[",                  1, 1, 0xe007, 0 },
   { s_cm038 +13, NULL       , "FOR",                3, 0, 0xc015, 0 },
   { NULL       , NULL       , "for",                3, 0, 0xe001, 5 },
   { s_cm038 +17, s_cm038 +15, "[",                  1, 1, 0xe007, 0 },
   { s_cm038 +16, NULL       , "WHILE",              5, 0, 0xc015, 0 },
   { NULL       , NULL       , "while",              5, 0, 0xe001, 6 },
   { s_cm038 +20, s_cm038 +18, "[",                  1, 1, 0xe007, 0 },
   { s_cm038 +19, NULL       , "NEXT",               4, 0, 0xc015, 0 },
   { NULL       , NULL       , "next",               4, 0, 0xe001, 7 },
   { s_cm038 +23, s_cm038 +21, "[",                  1, 1, 0xe007, 0 },
   { s_cm038 +22, NULL       , "RECORD",             6, 0, 0xc015, 0 },
   { NULL       , NULL       , "rec",                3, 0, 0xe001, 8 },
   { s_cm038 +26, s_cm038 +24, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm038 +25, "rest",               4, 0, 0xc003, 9 },
   { NULL       , NULL       , "REST",               4, 0, 0xc015, 0 },
   { NULL       , s_cm038 +27, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "ALL",                3, 0, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr038[ 36 ] = {
   { s_cr038 + 1, NULL       , "v1",                 2, 1, 0xc00b, 1 },
   { s_cr038 + 2, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr038 + 5, s_cr038 + 3, "[",                  1, 0, 0xc012, 0 },
   { s_cr038 + 4, NULL       , "vN",                 2, 1, 0xc00b, 2 },
   { NULL       , NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr038 + 6, NULL       , "0",                  1, 1, 0xc02a, 0 },
   { s_cr038 + 7, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr038 + 8, NULL       , "dbEval",             6, 1, 0xc015, 0 },
   { s_cr038 + 9, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr038 +10, NULL       , "{",                  1, 1, 0xc036, 0 },
   { s_cr038 +11, NULL       , "|",                  1, 0, 0xc01b, 0 },
   { s_cr038 +12, NULL       , "|",                  1, 0, 0xc01b, 0 },
   { s_cr038 +13, NULL       , "v1",                 2, 1, 0xc00b, 1 },
   { s_cr038 +14, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr038 +15, NULL       , "v1",                 2, 1, 0xc00b, 1 },
   { s_cr038 +16, NULL       , "+",                  1, 1, 0xc050, 0 },
   { s_cr038 +17, NULL       , "x1",                 2, 1, 0xc00b, 3 },
   { s_cr038 +24, s_cr038 +18, "[",                  1, 0, 0xc012, 0 },
   { s_cr038 +19, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr038 +20, NULL       , "vN",                 2, 1, 0xc00b, 2 },
   { s_cr038 +21, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr038 +22, NULL       , "vN",                 2, 1, 0xc00b, 2 },
   { s_cr038 +23, NULL       , "+",                  1, 1, 0xc050, 0 },
   { NULL       , NULL       , "xN",                 2, 1, 0xc00b, 4 },
   { s_cr038 +25, NULL       , "}",                  1, 1, 0xc037, 0 },
   { s_cr038 +26, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr038 +27, NULL       , "for",                3, 1, 0xc00f, 5 },
   { s_cr038 +28, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr038 +29, NULL       , "while",              5, 1, 0xc00f, 6 },
   { s_cr038 +30, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr038 +31, NULL       , "next",               4, 1, 0xc00b, 7 },
   { s_cr038 +32, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr038 +33, NULL       , "rec",                3, 1, 0xc00b, 8 },
   { s_cr038 +34, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr038 +35, NULL       , "rest",               4, 1, 0xc010, 9 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm039[ 21 ] = {
   { s_cm039 + 1, NULL       , "COUNT",              5, 1, 0xc015, 0 },
   { s_cm039 + 4, s_cm039 + 2, "[",                  1, 1, 0xe007, 0 },
   { s_cm039 + 3, NULL       , "TO",                 2, 0, 0xc015, 0 },
   { NULL       , NULL       , "v",                  1, 0, 0xe001, 1 },
   { s_cm039 + 7, s_cm039 + 5, "[",                  1, 1, 0xe007, 0 },
   { s_cm039 + 6, NULL       , "FOR",                3, 0, 0xc015, 0 },
   { NULL       , NULL       , "for",                3, 0, 0xe001, 2 },
   { s_cm039 +10, s_cm039 + 8, "[",                  1, 1, 0xe007, 0 },
   { s_cm039 + 9, NULL       , "WHILE",              5, 0, 0xc015, 0 },
   { NULL       , NULL       , "while",              5, 0, 0xe001, 3 },
   { s_cm039 +13, s_cm039 +11, "[",                  1, 1, 0xe007, 0 },
   { s_cm039 +12, NULL       , "NEXT",               4, 0, 0xc015, 0 },
   { NULL       , NULL       , "next",               4, 0, 0xe001, 4 },
   { s_cm039 +16, s_cm039 +14, "[",                  1, 1, 0xe007, 0 },
   { s_cm039 +15, NULL       , "RECORD",             6, 0, 0xc015, 0 },
   { NULL       , NULL       , "rec",                3, 0, 0xe001, 5 },
   { s_cm039 +19, s_cm039 +17, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm039 +18, "rest",               4, 0, 0xc003, 6 },
   { NULL       , NULL       , "REST",               4, 0, 0xc015, 0 },
   { NULL       , s_cm039 +20, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "ALL",                3, 0, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr039[ 26 ] = {
   { s_cr039 + 1, NULL       , "v",                  1, 1, 0xc00b, 1 },
   { s_cr039 + 2, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr039 + 3, NULL       , "0",                  1, 1, 0xc02a, 0 },
   { s_cr039 + 4, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr039 + 5, NULL       , "dbEval",             6, 1, 0xc015, 0 },
   { s_cr039 + 6, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr039 + 7, NULL       , "{",                  1, 1, 0xc036, 0 },
   { s_cr039 + 8, NULL       , "|",                  1, 0, 0xc01b, 0 },
   { s_cr039 + 9, NULL       , "|",                  1, 0, 0xc01b, 0 },
   { s_cr039 +10, NULL       , "v",                  1, 1, 0xc00b, 1 },
   { s_cr039 +11, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr039 +12, NULL       , "v",                  1, 1, 0xc00b, 1 },
   { s_cr039 +13, NULL       , "+",                  1, 1, 0xc050, 0 },
   { s_cr039 +14, NULL       , "1",                  1, 1, 0xc02a, 0 },
   { s_cr039 +15, NULL       , "}",                  1, 1, 0xc037, 0 },
   { s_cr039 +16, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr039 +17, NULL       , "for",                3, 1, 0xc00f, 2 },
   { s_cr039 +18, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr039 +19, NULL       , "while",              5, 1, 0xc00f, 3 },
   { s_cr039 +20, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr039 +21, NULL       , "next",               4, 1, 0xc00b, 4 },
   { s_cr039 +22, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr039 +23, NULL       , "rec",                3, 1, 0xc00b, 5 },
   { s_cr039 +24, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr039 +25, NULL       , "rest",               4, 1, 0xc010, 6 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm040[ 19 ] = {
   { s_cm040 + 1, NULL       , "JOIN",               4, 1, 0xc015, 0 },
   { s_cm040 + 4, s_cm040 + 2, "[",                  1, 1, 0xe007, 0 },
   { s_cm040 + 3, NULL       , "WITH",               4, 0, 0xc015, 0 },
   { NULL       , NULL       , "alias",              5, 0, 0xe005, 1 },
   { s_cm040 + 7, s_cm040 + 5, "[",                  1, 1, 0xe007, 0 },
   { s_cm040 + 6, NULL       , "TO",                 2, 0, 0xc015, 0 },
   { NULL       , NULL       , "f",                  1, 0, 0xe001, 2 },
   { s_cm040 +10, s_cm040 + 8, "[",                  1, 1, 0xe007, 0 },
   { s_cm040 + 9, NULL       , "FIELDS",             6, 0, 0xc015, 0 },
   { NULL       , NULL       , "fields",             6, 0, 0xe002, 3 },
   { s_cm040 +13, s_cm040 +11, "[",                  1, 1, 0xe007, 0 },
   { s_cm040 +12, NULL       , "FOR",                3, 0, 0xc015, 0 },
   { NULL       , NULL       , "for",                3, 0, 0xe001, 4 },
   { s_cm040 +16, s_cm040 +14, "[",                  1, 1, 0xe007, 0 },
   { s_cm040 +15, NULL       , "VIA",                3, 0, 0xc015, 0 },
   { NULL       , NULL       , "rdd",                3, 0, 0xe001, 5 },
   { NULL       , s_cm040 +17, "[",                  1, 1, 0xe007, 0 },
   { s_cm040 +18, NULL       , "CODEPAGE",           8, 0, 0xc015, 0 },
   { NULL       , NULL       , "cp",                 2, 0, 0xe001, 6 }
};
static HB_PP_TOKEN s_cr040[ 31 ] = {
   { s_cr040 + 1, NULL       , "__dbJoin",           8, 1, 0xc015, 0 },
   { s_cr040 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr040 + 3, NULL       , "alias",              5, 1, 0xc00e, 1 },
   { s_cr040 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr040 + 5, NULL       , "f",                  1, 1, 0xc00e, 2 },
   { s_cr040 + 6, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr040 + 7, NULL       , "{",                  1, 1, 0xc036, 0 },
   { s_cr040 + 8, NULL       , "fields",             6, 1, 0xc00e, 3 },
   { s_cr040 + 9, NULL       , "}",                  1, 1, 0xc037, 0 },
   { s_cr040 +10, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr040 +11, NULL       , "iif",                3, 1, 0xc015, 0 },
   { s_cr040 +12, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr040 +13, NULL       , "Empty",              5, 1, 0xc015, 0 },
   { s_cr040 +14, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr040 +15, NULL       , "for",                3, 1, 0xc00c, 4 },
   { s_cr040 +16, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr040 +17, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr040 +18, NULL       , "{",                  1, 1, 0xc036, 0 },
   { s_cr040 +19, NULL       , "|",                  1, 0, 0xc01b, 0 },
   { s_cr040 +20, NULL       , "|",                  1, 0, 0xc01b, 0 },
   { s_cr040 +21, NULL       , ".T.",                3, 1, 0xc02d, 0 },
   { s_cr040 +22, NULL       , "}",                  1, 1, 0xc037, 0 },
   { s_cr040 +23, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr040 +24, NULL       , "for",                3, 1, 0xc00f, 4 },
   { s_cr040 +25, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr040 +26, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr040 +27, NULL       , "rdd",                3, 1, 0xc00b, 5 },
   { s_cr040 +28, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr040 +29, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr040 +30, NULL       , "cp",                 2, 1, 0xc00b, 6 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm041[ 20 ] = {
   { s_cm041 + 1, NULL       , "UPDATE",             6, 1, 0xc015, 0 },
   { s_cm041 + 4, s_cm041 + 2, "[",                  1, 1, 0xe007, 0 },
   { s_cm041 + 3, NULL       , "FROM",               4, 0, 0xc015, 0 },
   { NULL       , NULL       , "alias",              5, 0, 0xe005, 1 },
   { s_cm041 + 7, s_cm041 + 5, "[",                  1, 1, 0xe007, 0 },
   { s_cm041 + 6, NULL       , "ON",                 2, 0, 0xc015, 0 },
   { NULL       , NULL       , "key",                3, 0, 0xe001, 2 },
   { s_cm041 +10, s_cm041 + 8, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm041 + 9, "rand",               4, 0, 0xc003, 3 },
   { NULL       , NULL       , "RANDOM",             6, 0, 0xc015, 0 },
   { NULL       , s_cm041 +11, "[",                  1, 1, 0xe007, 0 },
   { s_cm041 +12, NULL       , "REPLACE",            7, 0, 0xc015, 0 },
   { s_cm041 +13, NULL       , "f1",                 2, 0, 0xe001, 4 },
   { s_cm041 +14, NULL       , "WITH",               4, 1, 0xc015, 0 },
   { s_cm041 +15, NULL       , "x1",                 2, 0, 0xe001, 5 },
   { NULL       , s_cm041 +16, "[",                  1, 1, 0xe007, 0 },
   { s_cm041 +17, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm041 +18, NULL       , "fN",                 2, 0, 0xe001, 6 },
   { s_cm041 +19, NULL       , "WITH",               4, 1, 0xc015, 0 },
   { NULL       , NULL       , "xN",                 2, 0, 0xe001, 7 }
};
static HB_PP_TOKEN s_cr041[ 25 ] = {
   { s_cr041 + 1, NULL       , "__dbUpdate",        10, 1, 0xc015, 0 },
   { s_cr041 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr041 + 3, NULL       , "alias",              5, 1, 0xc00e, 1 },
   { s_cr041 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr041 + 5, NULL       , "key",                3, 1, 0xc00f, 2 },
   { s_cr041 + 6, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr041 + 7, NULL       , "rand",               4, 1, 0xc010, 3 },
   { s_cr041 + 8, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr041 + 9, NULL       , "{",                  1, 1, 0xc036, 0 },
   { s_cr041 +10, NULL       , "|",                  1, 0, 0xc01b, 0 },
   { s_cr041 +11, NULL       , "|",                  1, 0, 0xc01b, 0 },
   { s_cr041 +12, NULL       , "_FIELD",             6, 1, 0xc015, 0 },
   { s_cr041 +13, NULL       , "->",                 2, 0, 0xc03b, 0 },
   { s_cr041 +14, NULL       , "f1",                 2, 0, 0xc00b, 4 },
   { s_cr041 +15, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr041 +16, NULL       , "x1",                 2, 1, 0xc00b, 5 },
   { s_cr041 +23, s_cr041 +17, "[",                  1, 0, 0xc012, 0 },
   { s_cr041 +18, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr041 +19, NULL       , "_FIELD",             6, 1, 0xc015, 0 },
   { s_cr041 +20, NULL       , "->",                 2, 0, 0xc03b, 0 },
   { s_cr041 +21, NULL       , "fN",                 2, 0, 0xc00b, 6 },
   { s_cr041 +22, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { NULL       , NULL       , "xN",                 2, 1, 0xc00b, 7 },
   { s_cr041 +24, NULL       , "}",                  1, 1, 0xc037, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm042[ 33 ] = {
   { s_cm042 + 1, NULL       , "TOTAL",              5, 1, 0xc015, 0 },
   { s_cm042 + 4, s_cm042 + 2, "[",                  1, 1, 0xe007, 0 },
   { s_cm042 + 3, NULL       , "TO",                 2, 0, 0xc015, 0 },
   { NULL       , NULL       , "f",                  1, 0, 0xe005, 1 },
   { s_cm042 + 7, s_cm042 + 5, "[",                  1, 1, 0xe007, 0 },
   { s_cm042 + 6, NULL       , "ON",                 2, 0, 0xc015, 0 },
   { NULL       , NULL       , "key",                3, 0, 0xe001, 2 },
   { s_cm042 +10, s_cm042 + 8, "[",                  1, 1, 0xe007, 0 },
   { s_cm042 + 9, NULL       , "FIELDS",             6, 0, 0xc015, 0 },
   { NULL       , NULL       , "fields",             6, 0, 0xe002, 3 },
   { s_cm042 +13, s_cm042 +11, "[",                  1, 1, 0xe007, 0 },
   { s_cm042 +12, NULL       , "FOR",                3, 0, 0xc015, 0 },
   { NULL       , NULL       , "for",                3, 0, 0xe001, 4 },
   { s_cm042 +16, s_cm042 +14, "[",                  1, 1, 0xe007, 0 },
   { s_cm042 +15, NULL       , "WHILE",              5, 0, 0xc015, 0 },
   { NULL       , NULL       , "while",              5, 0, 0xe001, 5 },
   { s_cm042 +19, s_cm042 +17, "[",                  1, 1, 0xe007, 0 },
   { s_cm042 +18, NULL       , "NEXT",               4, 0, 0xc015, 0 },
   { NULL       , NULL       , "next",               4, 0, 0xe001, 6 },
   { s_cm042 +22, s_cm042 +20, "[",                  1, 1, 0xe007, 0 },
   { s_cm042 +21, NULL       , "RECORD",             6, 0, 0xc015, 0 },
   { NULL       , NULL       , "rec",                3, 0, 0xe001, 7 },
   { s_cm042 +25, s_cm042 +23, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm042 +24, "rest",               4, 0, 0xc003, 8 },
   { NULL       , NULL       , "REST",               4, 0, 0xc015, 0 },
   { s_cm042 +27, s_cm042 +26, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "ALL",                3, 0, 0xc015, 0 },
   { s_cm042 +30, s_cm042 +28, "[",                  1, 1, 0xe007, 0 },
   { s_cm042 +29, NULL       , "VIA",                3, 0, 0xc015, 0 },
   { NULL       , NULL       , "rdd",                3, 0, 0xe001, 9 },
   { NULL       , s_cm042 +31, "[",                  1, 1, 0xe007, 0 },
   { s_cm042 +32, NULL       , "CODEPAGE",           8, 0, 0xc015, 0 },
   { NULL       , NULL       , "cp",                 2, 0, 0xe001, 10 }
};
static HB_PP_TOKEN s_cr042[ 25 ] = {
   { s_cr042 + 1, NULL       , "__dbTotal",          9, 1, 0xc015, 0 },
   { s_cr042 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr042 + 3, NULL       , "f",                  1, 1, 0xc00e, 1 },
   { s_cr042 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr042 + 5, NULL       , "key",                3, 1, 0xc00f, 2 },
   { s_cr042 + 6, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr042 + 7, NULL       , "{",                  1, 1, 0xc036, 0 },
   { s_cr042 + 8, NULL       , "fields",             6, 1, 0xc00e, 3 },
   { s_cr042 + 9, NULL       , "}",                  1, 1, 0xc037, 0 },
   { s_cr042 +10, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr042 +11, NULL       , "for",                3, 1, 0xc00f, 4 },
   { s_cr042 +12, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr042 +13, NULL       , "while",              5, 1, 0xc00f, 5 },
   { s_cr042 +14, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr042 +15, NULL       , "next",               4, 1, 0xc00b, 6 },
   { s_cr042 +16, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr042 +17, NULL       , "rec",                3, 1, 0xc00b, 7 },
   { s_cr042 +18, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr042 +19, NULL       , "rest",               4, 1, 0xc010, 8 },
   { s_cr042 +20, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr042 +21, NULL       , "rdd",                3, 1, 0xc00b, 9 },
   { s_cr042 +22, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr042 +23, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr042 +24, NULL       , "cp",                 2, 1, 0xc00b, 10 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm043[ 30 ] = {
   { s_cm043 + 1, NULL       , "SORT",               4, 1, 0xc015, 0 },
   { s_cm043 + 4, s_cm043 + 2, "[",                  1, 1, 0xe007, 0 },
   { s_cm043 + 3, NULL       , "TO",                 2, 0, 0xc015, 0 },
   { NULL       , NULL       , "f",                  1, 0, 0xe005, 1 },
   { s_cm043 + 7, s_cm043 + 5, "[",                  1, 1, 0xe007, 0 },
   { s_cm043 + 6, NULL       , "ON",                 2, 0, 0xc015, 0 },
   { NULL       , NULL       , "fields",             6, 0, 0xe002, 2 },
   { s_cm043 +10, s_cm043 + 8, "[",                  1, 1, 0xe007, 0 },
   { s_cm043 + 9, NULL       , "FOR",                3, 0, 0xc015, 0 },
   { NULL       , NULL       , "for",                3, 0, 0xe001, 3 },
   { s_cm043 +13, s_cm043 +11, "[",                  1, 1, 0xe007, 0 },
   { s_cm043 +12, NULL       , "WHILE",              5, 0, 0xc015, 0 },
   { NULL       , NULL       , "while",              5, 0, 0xe001, 4 },
   { s_cm043 +16, s_cm043 +14, "[",                  1, 1, 0xe007, 0 },
   { s_cm043 +15, NULL       , "NEXT",               4, 0, 0xc015, 0 },
   { NULL       , NULL       , "next",               4, 0, 0xe001, 5 },
   { s_cm043 +19, s_cm043 +17, "[",                  1, 1, 0xe007, 0 },
   { s_cm043 +18, NULL       , "RECORD",             6, 0, 0xc015, 0 },
   { NULL       , NULL       , "rec",                3, 0, 0xe001, 6 },
   { s_cm043 +22, s_cm043 +20, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm043 +21, "rest",               4, 0, 0xc003, 7 },
   { NULL       , NULL       , "REST",               4, 0, 0xc015, 0 },
   { s_cm043 +24, s_cm043 +23, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "ALL",                3, 0, 0xc015, 0 },
   { s_cm043 +27, s_cm043 +25, "[",                  1, 1, 0xe007, 0 },
   { s_cm043 +26, NULL       , "VIA",                3, 0, 0xc015, 0 },
   { NULL       , NULL       , "rdd",                3, 0, 0xe001, 8 },
   { NULL       , s_cm043 +28, "[",                  1, 1, 0xe007, 0 },
   { s_cm043 +29, NULL       , "CODEPAGE",           8, 0, 0xc015, 0 },
   { NULL       , NULL       , "cp",                 2, 0, 0xe001, 9 }
};
static HB_PP_TOKEN s_cr043[ 23 ] = {
   { s_cr043 + 1, NULL       , "__dbSort",           8, 1, 0xc015, 0 },
   { s_cr043 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr043 + 3, NULL       , "f",                  1, 1, 0xc00e, 1 },
   { s_cr043 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr043 + 5, NULL       , "{",                  1, 1, 0xc036, 0 },
   { s_cr043 + 6, NULL       , "fields",             6, 1, 0xc00e, 2 },
   { s_cr043 + 7, NULL       , "}",                  1, 1, 0xc037, 0 },
   { s_cr043 + 8, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr043 + 9, NULL       , "for",                3, 1, 0xc00f, 3 },
   { s_cr043 +10, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr043 +11, NULL       , "while",              5, 1, 0xc00f, 4 },
   { s_cr043 +12, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr043 +13, NULL       , "next",               4, 1, 0xc00b, 5 },
   { s_cr043 +14, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr043 +15, NULL       , "rec",                3, 1, 0xc00b, 6 },
   { s_cr043 +16, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr043 +17, NULL       , "rest",               4, 1, 0xc010, 7 },
   { s_cr043 +18, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr043 +19, NULL       , "rdd",                3, 1, 0xc00b, 8 },
   { s_cr043 +20, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr043 +21, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr043 +22, NULL       , "cp",                 2, 1, 0xc00b, 9 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm044[ 30 ] = {
   { s_cm044 + 1, NULL       , "APPEND",             6, 1, 0xc015, 0 },
   { s_cm044 + 4, s_cm044 + 2, "[",                  1, 1, 0xe007, 0 },
   { s_cm044 + 3, NULL       , "FROM",               4, 0, 0xc015, 0 },
   { NULL       , NULL       , "f",                  1, 0, 0xe005, 1 },
   { s_cm044 + 7, s_cm044 + 5, "[",                  1, 1, 0xe007, 0 },
   { s_cm044 + 6, NULL       , "FIELDS",             6, 0, 0xc015, 0 },
   { NULL       , NULL       , "fields",             6, 0, 0xe002, 2 },
   { s_cm044 +10, s_cm044 + 8, "[",                  1, 1, 0xe007, 0 },
   { s_cm044 + 9, NULL       , "FOR",                3, 0, 0xc015, 0 },
   { NULL       , NULL       , "for",                3, 0, 0xe001, 3 },
   { s_cm044 +13, s_cm044 +11, "[",                  1, 1, 0xe007, 0 },
   { s_cm044 +12, NULL       , "WHILE",              5, 0, 0xc015, 0 },
   { NULL       , NULL       , "while",              5, 0, 0xe001, 4 },
   { s_cm044 +16, s_cm044 +14, "[",                  1, 1, 0xe007, 0 },
   { s_cm044 +15, NULL       , "NEXT",               4, 0, 0xc015, 0 },
   { NULL       , NULL       , "next",               4, 0, 0xe001, 5 },
   { s_cm044 +19, s_cm044 +17, "[",                  1, 1, 0xe007, 0 },
   { s_cm044 +18, NULL       , "RECORD",             6, 0, 0xc015, 0 },
   { NULL       , NULL       , "rec",                3, 0, 0xe001, 6 },
   { s_cm044 +22, s_cm044 +20, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm044 +21, "rest",               4, 0, 0xc003, 7 },
   { NULL       , NULL       , "REST",               4, 0, 0xc015, 0 },
   { s_cm044 +24, s_cm044 +23, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "ALL",                3, 0, 0xc015, 0 },
   { s_cm044 +27, s_cm044 +25, "[",                  1, 1, 0xe007, 0 },
   { s_cm044 +26, NULL       , "VIA",                3, 0, 0xc015, 0 },
   { NULL       , NULL       , "rdd",                3, 0, 0xe001, 8 },
   { NULL       , s_cm044 +28, "[",                  1, 1, 0xe007, 0 },
   { s_cm044 +29, NULL       , "CODEPAGE",           8, 0, 0xc015, 0 },
   { NULL       , NULL       , "cp",                 2, 0, 0xe001, 9 }
};
static HB_PP_TOKEN s_cr044[ 23 ] = {
   { s_cr044 + 1, NULL       , "__dbApp",            7, 1, 0xc015, 0 },
   { s_cr044 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr044 + 3, NULL       , "f",                  1, 1, 0xc00e, 1 },
   { s_cr044 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr044 + 5, NULL       , "{",                  1, 1, 0xc036, 0 },
   { s_cr044 + 6, NULL       , "fields",             6, 1, 0xc00e, 2 },
   { s_cr044 + 7, NULL       , "}",                  1, 1, 0xc037, 0 },
   { s_cr044 + 8, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr044 + 9, NULL       , "for",                3, 1, 0xc00f, 3 },
   { s_cr044 +10, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr044 +11, NULL       , "while",              5, 1, 0xc00f, 4 },
   { s_cr044 +12, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr044 +13, NULL       , "next",               4, 1, 0xc00b, 5 },
   { s_cr044 +14, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr044 +15, NULL       , "rec",                3, 1, 0xc00b, 6 },
   { s_cr044 +16, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr044 +17, NULL       , "rest",               4, 1, 0xc010, 7 },
   { s_cr044 +18, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr044 +19, NULL       , "rdd",                3, 1, 0xc00b, 8 },
   { s_cr044 +20, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr044 +21, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr044 +22, NULL       , "cp",                 2, 1, 0xc00b, 9 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm045[ 29 ] = {
   { s_cm045 + 1, NULL       , "APPEND",             6, 1, 0xc015, 0 },
   { s_cm045 + 4, s_cm045 + 2, "[",                  1, 1, 0xe007, 0 },
   { s_cm045 + 3, NULL       , "FROM",               4, 0, 0xc015, 0 },
   { NULL       , NULL       , "f",                  1, 0, 0xe005, 1 },
   { s_cm045 + 6, s_cm045 + 5, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "SDF",                3, 0, 0xc015, 0 },
   { s_cm045 + 9, s_cm045 + 7, "[",                  1, 1, 0xe007, 0 },
   { s_cm045 + 8, NULL       , "FIELDS",             6, 0, 0xc015, 0 },
   { NULL       , NULL       , "fields",             6, 0, 0xe002, 2 },
   { s_cm045 +12, s_cm045 +10, "[",                  1, 1, 0xe007, 0 },
   { s_cm045 +11, NULL       , "FOR",                3, 0, 0xc015, 0 },
   { NULL       , NULL       , "for",                3, 0, 0xe001, 3 },
   { s_cm045 +15, s_cm045 +13, "[",                  1, 1, 0xe007, 0 },
   { s_cm045 +14, NULL       , "WHILE",              5, 0, 0xc015, 0 },
   { NULL       , NULL       , "while",              5, 0, 0xe001, 4 },
   { s_cm045 +18, s_cm045 +16, "[",                  1, 1, 0xe007, 0 },
   { s_cm045 +17, NULL       , "NEXT",               4, 0, 0xc015, 0 },
   { NULL       , NULL       , "next",               4, 0, 0xe001, 5 },
   { s_cm045 +21, s_cm045 +19, "[",                  1, 1, 0xe007, 0 },
   { s_cm045 +20, NULL       , "RECORD",             6, 0, 0xc015, 0 },
   { NULL       , NULL       , "rec",                3, 0, 0xe001, 6 },
   { s_cm045 +24, s_cm045 +22, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm045 +23, "rest",               4, 0, 0xc003, 7 },
   { NULL       , NULL       , "REST",               4, 0, 0xc015, 0 },
   { s_cm045 +26, s_cm045 +25, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "ALL",                3, 0, 0xc015, 0 },
   { NULL       , s_cm045 +27, "[",                  1, 1, 0xe007, 0 },
   { s_cm045 +28, NULL       , "CODEPAGE",           8, 0, 0xc015, 0 },
   { NULL       , NULL       , "cp",                 2, 0, 0xe001, 8 }
};
static HB_PP_TOKEN s_cr045[ 22 ] = {
   { s_cr045 + 1, NULL       , "__dbSDF",            7, 1, 0xc015, 0 },
   { s_cr045 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr045 + 3, NULL       , ".F.",                3, 1, 0xc02d, 0 },
   { s_cr045 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr045 + 5, NULL       , "f",                  1, 1, 0xc00e, 1 },
   { s_cr045 + 6, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr045 + 7, NULL       , "{",                  1, 1, 0xc036, 0 },
   { s_cr045 + 8, NULL       , "fields",             6, 1, 0xc00e, 2 },
   { s_cr045 + 9, NULL       , "}",                  1, 1, 0xc037, 0 },
   { s_cr045 +10, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr045 +11, NULL       , "for",                3, 1, 0xc00f, 3 },
   { s_cr045 +12, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr045 +13, NULL       , "while",              5, 1, 0xc00f, 4 },
   { s_cr045 +14, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr045 +15, NULL       , "next",               4, 1, 0xc00b, 5 },
   { s_cr045 +16, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr045 +17, NULL       , "rec",                3, 1, 0xc00b, 6 },
   { s_cr045 +18, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr045 +19, NULL       , "rest",               4, 1, 0xc010, 7 },
   { s_cr045 +20, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr045 +21, NULL       , "cp",                 2, 1, 0xc00b, 8 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm046[ 32 ] = {
   { s_cm046 + 1, NULL       , "APPEND",             6, 1, 0xc015, 0 },
   { s_cm046 + 4, s_cm046 + 2, "[",                  1, 1, 0xe007, 0 },
   { s_cm046 + 3, NULL       , "FROM",               4, 0, 0xc015, 0 },
   { NULL       , NULL       , "f",                  1, 0, 0xe005, 1 },
   { s_cm046 + 7, s_cm046 + 5, "[",                  1, 1, 0xe007, 0 },
   { s_cm046 + 6, NULL       , "FIELDS",             6, 0, 0xc015, 0 },
   { NULL       , NULL       , "fields",             6, 0, 0xe002, 3 },
   { s_cm046 +10, s_cm046 + 8, "[",                  1, 1, 0xe007, 0 },
   { s_cm046 + 9, NULL       , "FOR",                3, 0, 0xc015, 0 },
   { NULL       , NULL       , "for",                3, 0, 0xe001, 4 },
   { s_cm046 +13, s_cm046 +11, "[",                  1, 1, 0xe007, 0 },
   { s_cm046 +12, NULL       , "WHILE",              5, 0, 0xc015, 0 },
   { NULL       , NULL       , "while",              5, 0, 0xe001, 5 },
   { s_cm046 +16, s_cm046 +14, "[",                  1, 1, 0xe007, 0 },
   { s_cm046 +15, NULL       , "NEXT",               4, 0, 0xc015, 0 },
   { NULL       , NULL       , "next",               4, 0, 0xe001, 6 },
   { s_cm046 +19, s_cm046 +17, "[",                  1, 1, 0xe007, 0 },
   { s_cm046 +18, NULL       , "RECORD",             6, 0, 0xc015, 0 },
   { NULL       , NULL       , "rec",                3, 0, 0xe001, 7 },
   { s_cm046 +22, s_cm046 +20, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm046 +21, "rest",               4, 0, 0xc003, 8 },
   { NULL       , NULL       , "REST",               4, 0, 0xc015, 0 },
   { s_cm046 +24, s_cm046 +23, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "ALL",                3, 0, 0xc015, 0 },
   { s_cm046 +27, s_cm046 +25, "[",                  1, 1, 0xe007, 0 },
   { s_cm046 +26, NULL       , "CODEPAGE",           8, 0, 0xc015, 0 },
   { NULL       , NULL       , "cp",                 2, 0, 0xe001, 9 },
   { NULL       , s_cm046 +28, "[",                  1, 1, 0xe007, 0 },
   { s_cm046 +29, NULL       , "DELIMITED",          9, 0, 0xc015, 0 },
   { NULL       , s_cm046 +30, "[",                  1, 1, 0xe007, 0 },
   { s_cm046 +31, NULL       , "WITH",               4, 0, 0xc015, 0 },
   { NULL       , NULL       , "delim",              5, 0, 0xe004, 2 }
};
static HB_PP_TOKEN s_cr046[ 24 ] = {
   { s_cr046 + 1, NULL       , "__dbDelim",          9, 1, 0xc015, 0 },
   { s_cr046 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr046 + 3, NULL       , ".F.",                3, 1, 0xc02d, 0 },
   { s_cr046 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr046 + 5, NULL       , "f",                  1, 1, 0xc00e, 1 },
   { s_cr046 + 6, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr046 + 7, NULL       , "delim",              5, 1, 0xc00e, 2 },
   { s_cr046 + 8, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr046 + 9, NULL       , "{",                  1, 1, 0xc036, 0 },
   { s_cr046 +10, NULL       , "fields",             6, 1, 0xc00e, 3 },
   { s_cr046 +11, NULL       , "}",                  1, 1, 0xc037, 0 },
   { s_cr046 +12, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr046 +13, NULL       , "for",                3, 1, 0xc00f, 4 },
   { s_cr046 +14, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr046 +15, NULL       , "while",              5, 1, 0xc00f, 5 },
   { s_cr046 +16, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr046 +17, NULL       , "next",               4, 1, 0xc00b, 6 },
   { s_cr046 +18, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr046 +19, NULL       , "rec",                3, 1, 0xc00b, 7 },
   { s_cr046 +20, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr046 +21, NULL       , "rest",               4, 1, 0xc010, 8 },
   { s_cr046 +22, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr046 +23, NULL       , "cp",                 2, 1, 0xc00b, 9 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm047[ 30 ] = {
   { s_cm047 + 1, NULL       , "COPY",               4, 1, 0xc015, 0 },
   { s_cm047 + 4, s_cm047 + 2, "[",                  1, 1, 0xe007, 0 },
   { s_cm047 + 3, NULL       , "TO",                 2, 0, 0xc015, 0 },
   { NULL       , NULL       , "f",                  1, 0, 0xe005, 1 },
   { s_cm047 + 7, s_cm047 + 5, "[",                  1, 1, 0xe007, 0 },
   { s_cm047 + 6, NULL       , "FIELDS",             6, 0, 0xc015, 0 },
   { NULL       , NULL       , "fields",             6, 0, 0xe002, 2 },
   { s_cm047 +10, s_cm047 + 8, "[",                  1, 1, 0xe007, 0 },
   { s_cm047 + 9, NULL       , "FOR",                3, 0, 0xc015, 0 },
   { NULL       , NULL       , "for",                3, 0, 0xe001, 3 },
   { s_cm047 +13, s_cm047 +11, "[",                  1, 1, 0xe007, 0 },
   { s_cm047 +12, NULL       , "WHILE",              5, 0, 0xc015, 0 },
   { NULL       , NULL       , "while",              5, 0, 0xe001, 4 },
   { s_cm047 +16, s_cm047 +14, "[",                  1, 1, 0xe007, 0 },
   { s_cm047 +15, NULL       , "NEXT",               4, 0, 0xc015, 0 },
   { NULL       , NULL       , "next",               4, 0, 0xe001, 5 },
   { s_cm047 +19, s_cm047 +17, "[",                  1, 1, 0xe007, 0 },
   { s_cm047 +18, NULL       , "RECORD",             6, 0, 0xc015, 0 },
   { NULL       , NULL       , "rec",                3, 0, 0xe001, 6 },
   { s_cm047 +22, s_cm047 +20, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm047 +21, "rest",               4, 0, 0xc003, 7 },
   { NULL       , NULL       , "REST",               4, 0, 0xc015, 0 },
   { s_cm047 +24, s_cm047 +23, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "ALL",                3, 0, 0xc015, 0 },
   { s_cm047 +27, s_cm047 +25, "[",                  1, 1, 0xe007, 0 },
   { s_cm047 +26, NULL       , "VIA",                3, 0, 0xc015, 0 },
   { NULL       , NULL       , "rdd",                3, 0, 0xe001, 8 },
   { NULL       , s_cm047 +28, "[",                  1, 1, 0xe007, 0 },
   { s_cm047 +29, NULL       , "CODEPAGE",           8, 0, 0xc015, 0 },
   { NULL       , NULL       , "cp",                 2, 0, 0xe001, 9 }
};
static HB_PP_TOKEN s_cr047[ 23 ] = {
   { s_cr047 + 1, NULL       , "__dbCopy",           8, 1, 0xc015, 0 },
   { s_cr047 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr047 + 3, NULL       , "f",                  1, 1, 0xc00e, 1 },
   { s_cr047 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr047 + 5, NULL       , "{",                  1, 1, 0xc036, 0 },
   { s_cr047 + 6, NULL       , "fields",             6, 1, 0xc00e, 2 },
   { s_cr047 + 7, NULL       , "}",                  1, 1, 0xc037, 0 },
   { s_cr047 + 8, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr047 + 9, NULL       , "for",                3, 1, 0xc00f, 3 },
   { s_cr047 +10, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr047 +11, NULL       , "while",              5, 1, 0xc00f, 4 },
   { s_cr047 +12, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr047 +13, NULL       , "next",               4, 1, 0xc00b, 5 },
   { s_cr047 +14, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr047 +15, NULL       , "rec",                3, 1, 0xc00b, 6 },
   { s_cr047 +16, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr047 +17, NULL       , "rest",               4, 1, 0xc010, 7 },
   { s_cr047 +18, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr047 +19, NULL       , "rdd",                3, 1, 0xc00b, 8 },
   { s_cr047 +20, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr047 +21, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr047 +22, NULL       , "cp",                 2, 1, 0xc00b, 9 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm048[ 29 ] = {
   { s_cm048 + 1, NULL       , "COPY",               4, 1, 0xc015, 0 },
   { s_cm048 + 4, s_cm048 + 2, "[",                  1, 1, 0xe007, 0 },
   { s_cm048 + 3, NULL       , "TO",                 2, 0, 0xc015, 0 },
   { NULL       , NULL       , "f",                  1, 0, 0xe005, 1 },
   { s_cm048 + 6, s_cm048 + 5, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "SDF",                3, 0, 0xc015, 0 },
   { s_cm048 + 9, s_cm048 + 7, "[",                  1, 1, 0xe007, 0 },
   { s_cm048 + 8, NULL       , "FIELDS",             6, 0, 0xc015, 0 },
   { NULL       , NULL       , "fields",             6, 0, 0xe002, 2 },
   { s_cm048 +12, s_cm048 +10, "[",                  1, 1, 0xe007, 0 },
   { s_cm048 +11, NULL       , "FOR",                3, 0, 0xc015, 0 },
   { NULL       , NULL       , "for",                3, 0, 0xe001, 3 },
   { s_cm048 +15, s_cm048 +13, "[",                  1, 1, 0xe007, 0 },
   { s_cm048 +14, NULL       , "WHILE",              5, 0, 0xc015, 0 },
   { NULL       , NULL       , "while",              5, 0, 0xe001, 4 },
   { s_cm048 +18, s_cm048 +16, "[",                  1, 1, 0xe007, 0 },
   { s_cm048 +17, NULL       , "NEXT",               4, 0, 0xc015, 0 },
   { NULL       , NULL       , "next",               4, 0, 0xe001, 5 },
   { s_cm048 +21, s_cm048 +19, "[",                  1, 1, 0xe007, 0 },
   { s_cm048 +20, NULL       , "RECORD",             6, 0, 0xc015, 0 },
   { NULL       , NULL       , "rec",                3, 0, 0xe001, 6 },
   { s_cm048 +24, s_cm048 +22, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm048 +23, "rest",               4, 0, 0xc003, 7 },
   { NULL       , NULL       , "REST",               4, 0, 0xc015, 0 },
   { s_cm048 +26, s_cm048 +25, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "ALL",                3, 0, 0xc015, 0 },
   { NULL       , s_cm048 +27, "[",                  1, 1, 0xe007, 0 },
   { s_cm048 +28, NULL       , "CODEPAGE",           8, 0, 0xc015, 0 },
   { NULL       , NULL       , "cp",                 2, 0, 0xe001, 8 }
};
static HB_PP_TOKEN s_cr048[ 22 ] = {
   { s_cr048 + 1, NULL       , "__dbSDF",            7, 1, 0xc015, 0 },
   { s_cr048 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr048 + 3, NULL       , ".T.",                3, 1, 0xc02d, 0 },
   { s_cr048 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr048 + 5, NULL       , "f",                  1, 1, 0xc00e, 1 },
   { s_cr048 + 6, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr048 + 7, NULL       , "{",                  1, 1, 0xc036, 0 },
   { s_cr048 + 8, NULL       , "fields",             6, 1, 0xc00e, 2 },
   { s_cr048 + 9, NULL       , "}",                  1, 1, 0xc037, 0 },
   { s_cr048 +10, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr048 +11, NULL       , "for",                3, 1, 0xc00f, 3 },
   { s_cr048 +12, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr048 +13, NULL       , "while",              5, 1, 0xc00f, 4 },
   { s_cr048 +14, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr048 +15, NULL       , "next",               4, 1, 0xc00b, 5 },
   { s_cr048 +16, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr048 +17, NULL       , "rec",                3, 1, 0xc00b, 6 },
   { s_cr048 +18, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr048 +19, NULL       , "rest",               4, 1, 0xc010, 7 },
   { s_cr048 +20, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr048 +21, NULL       , "cp",                 2, 1, 0xc00b, 8 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm049[ 32 ] = {
   { s_cm049 + 1, NULL       , "COPY",               4, 1, 0xc015, 0 },
   { s_cm049 + 4, s_cm049 + 2, "[",                  1, 1, 0xe007, 0 },
   { s_cm049 + 3, NULL       , "TO",                 2, 0, 0xc015, 0 },
   { NULL       , NULL       , "f",                  1, 0, 0xe005, 1 },
   { s_cm049 + 7, s_cm049 + 5, "[",                  1, 1, 0xe007, 0 },
   { s_cm049 + 6, NULL       , "FIELDS",             6, 0, 0xc015, 0 },
   { NULL       , NULL       , "fields",             6, 0, 0xe002, 3 },
   { s_cm049 +10, s_cm049 + 8, "[",                  1, 1, 0xe007, 0 },
   { s_cm049 + 9, NULL       , "FOR",                3, 0, 0xc015, 0 },
   { NULL       , NULL       , "for",                3, 0, 0xe001, 4 },
   { s_cm049 +13, s_cm049 +11, "[",                  1, 1, 0xe007, 0 },
   { s_cm049 +12, NULL       , "WHILE",              5, 0, 0xc015, 0 },
   { NULL       , NULL       , "while",              5, 0, 0xe001, 5 },
   { s_cm049 +16, s_cm049 +14, "[",                  1, 1, 0xe007, 0 },
   { s_cm049 +15, NULL       , "NEXT",               4, 0, 0xc015, 0 },
   { NULL       , NULL       , "next",               4, 0, 0xe001, 6 },
   { s_cm049 +19, s_cm049 +17, "[",                  1, 1, 0xe007, 0 },
   { s_cm049 +18, NULL       , "RECORD",             6, 0, 0xc015, 0 },
   { NULL       , NULL       , "rec",                3, 0, 0xe001, 7 },
   { s_cm049 +22, s_cm049 +20, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm049 +21, "rest",               4, 0, 0xc003, 8 },
   { NULL       , NULL       , "REST",               4, 0, 0xc015, 0 },
   { s_cm049 +24, s_cm049 +23, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "ALL",                3, 0, 0xc015, 0 },
   { s_cm049 +27, s_cm049 +25, "[",                  1, 1, 0xe007, 0 },
   { s_cm049 +26, NULL       , "CODEPAGE",           8, 0, 0xc015, 0 },
   { NULL       , NULL       , "cp",                 2, 0, 0xe001, 9 },
   { NULL       , s_cm049 +28, "[",                  1, 1, 0xe007, 0 },
   { s_cm049 +29, NULL       , "DELIMITED",          9, 0, 0xc015, 0 },
   { NULL       , s_cm049 +30, "[",                  1, 1, 0xe007, 0 },
   { s_cm049 +31, NULL       , "WITH",               4, 0, 0xc015, 0 },
   { NULL       , NULL       , "delim",              5, 0, 0xe004, 2 }
};
static HB_PP_TOKEN s_cr049[ 24 ] = {
   { s_cr049 + 1, NULL       , "__dbDelim",          9, 1, 0xc015, 0 },
   { s_cr049 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr049 + 3, NULL       , ".T.",                3, 1, 0xc02d, 0 },
   { s_cr049 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr049 + 5, NULL       , "f",                  1, 1, 0xc00e, 1 },
   { s_cr049 + 6, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr049 + 7, NULL       , "delim",              5, 1, 0xc00e, 2 },
   { s_cr049 + 8, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr049 + 9, NULL       , "{",                  1, 1, 0xc036, 0 },
   { s_cr049 +10, NULL       , "fields",             6, 1, 0xc00e, 3 },
   { s_cr049 +11, NULL       , "}",                  1, 1, 0xc037, 0 },
   { s_cr049 +12, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr049 +13, NULL       , "for",                3, 1, 0xc00f, 4 },
   { s_cr049 +14, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr049 +15, NULL       , "while",              5, 1, 0xc00f, 5 },
   { s_cr049 +16, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr049 +17, NULL       , "next",               4, 1, 0xc00b, 6 },
   { s_cr049 +18, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr049 +19, NULL       , "rec",                3, 1, 0xc00b, 7 },
   { s_cr049 +20, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr049 +21, NULL       , "rest",               4, 1, 0xc010, 8 },
   { s_cr049 +22, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr049 +23, NULL       , "cp",                 2, 1, 0xc00b, 9 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm050[ 9 ] = {
   { s_cm050 + 1, NULL       , "COPY",               4, 1, 0xc015, 0 },
   { s_cm050 + 3, s_cm050 + 2, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "STRUCTURE",          9, 0, 0xc015, 0 },
   { s_cm050 + 6, s_cm050 + 4, "[",                  1, 1, 0xe007, 0 },
   { s_cm050 + 5, NULL       , "TO",                 2, 0, 0xc015, 0 },
   { NULL       , NULL       , "f",                  1, 0, 0xe005, 1 },
   { NULL       , s_cm050 + 7, "[",                  1, 1, 0xe007, 0 },
   { s_cm050 + 8, NULL       , "FIELDS",             6, 0, 0xc015, 0 },
   { NULL       , NULL       , "fields",             6, 0, 0xe002, 2 }
};
static HB_PP_TOKEN s_cr050[ 8 ] = {
   { s_cr050 + 1, NULL       , "__dbCopyStruct",    14, 1, 0xc015, 0 },
   { s_cr050 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr050 + 3, NULL       , "f",                  1, 1, 0xc00e, 1 },
   { s_cr050 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr050 + 5, NULL       , "{",                  1, 1, 0xc036, 0 },
   { s_cr050 + 6, NULL       , "fields",             6, 1, 0xc00e, 2 },
   { s_cr050 + 7, NULL       , "}",                  1, 1, 0xc037, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm051[ 8 ] = {
   { s_cm051 + 1, NULL       , "COPY",               4, 1, 0xc015, 0 },
   { s_cm051 + 3, s_cm051 + 2, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "STRUCTURE",          9, 0, 0xc015, 0 },
   { s_cm051 + 5, s_cm051 + 4, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "EXTENDED",           8, 0, 0xc015, 0 },
   { NULL       , s_cm051 + 6, "[",                  1, 1, 0xe007, 0 },
   { s_cm051 + 7, NULL       , "TO",                 2, 0, 0xc015, 0 },
   { NULL       , NULL       , "f",                  1, 0, 0xe005, 1 }
};
static HB_PP_TOKEN s_cr051[ 4 ] = {
   { s_cr051 + 1, NULL       , "__dbCopyXStruct",   15, 1, 0xc015, 0 },
   { s_cr051 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr051 + 3, NULL       , "f",                  1, 1, 0xc00e, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm052[ 17 ] = {
   { s_cm052 + 1, NULL       , "CREATE",             6, 1, 0xc015, 0 },
   { s_cm052 + 2, NULL       , "db",                 2, 0, 0xe005, 1 },
   { s_cm052 + 5, s_cm052 + 3, "[",                  1, 1, 0xe007, 0 },
   { s_cm052 + 4, NULL       , "FROM",               4, 0, 0xc015, 0 },
   { NULL       , NULL       , "src",                3, 0, 0xe005, 2 },
   { s_cm052 + 8, s_cm052 + 6, "[",                  1, 1, 0xe007, 0 },
   { s_cm052 + 7, NULL       , "VIA",                3, 0, 0xc015, 0 },
   { NULL       , NULL       , "rdd",                3, 0, 0xe001, 3 },
   { s_cm052 +11, s_cm052 + 9, "[",                  1, 1, 0xe007, 0 },
   { s_cm052 +10, NULL       , "ALIAS",              5, 0, 0xc015, 0 },
   { NULL       , NULL       , "a",                  1, 0, 0xe001, 5 },
   { s_cm052 +14, s_cm052 +12, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm052 +13, "new",                3, 0, 0xc003, 4 },
   { NULL       , NULL       , "NEW",                3, 1, 0xc015, 0 },
   { NULL       , s_cm052 +15, "[",                  1, 1, 0xe007, 0 },
   { s_cm052 +16, NULL       , "CODEPAGE",           8, 0, 0xc015, 0 },
   { NULL       , NULL       , "cp",                 2, 0, 0xe001, 6 }
};
static HB_PP_TOKEN s_cr052[ 15 ] = {
   { s_cr052 + 1, NULL       , "__dbCreate",        10, 1, 0xc015, 0 },
   { s_cr052 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr052 + 3, NULL       , "db",                 2, 1, 0xc00e, 1 },
   { s_cr052 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr052 + 5, NULL       , "src",                3, 1, 0xc00e, 2 },
   { s_cr052 + 6, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr052 + 7, NULL       , "rdd",                3, 1, 0xc00b, 3 },
   { s_cr052 + 8, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr052 + 9, NULL       , "new",                3, 1, 0xc010, 4 },
   { s_cr052 +10, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr052 +11, NULL       , "a",                  1, 1, 0xc00e, 5 },
   { s_cr052 +14, s_cr052 +12, "[",                  1, 1, 0xc012, 0 },
   { s_cr052 +13, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { NULL       , NULL       , "cp",                 2, 1, 0xc00b, 6 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm053[ 1 ] = {
   { NULL       , NULL       , "RECALL",             6, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr053[ 3 ] = {
   { s_cr053 + 1, NULL       , "dbRecall",           8, 1, 0xc015, 0 },
   { s_cr053 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm054[ 18 ] = {
   { s_cm054 + 1, NULL       , "RECALL",             6, 1, 0xc015, 0 },
   { s_cm054 + 4, s_cm054 + 2, "[",                  1, 1, 0xe007, 0 },
   { s_cm054 + 3, NULL       , "FOR",                3, 0, 0xc015, 0 },
   { NULL       , NULL       , "for",                3, 0, 0xe001, 1 },
   { s_cm054 + 7, s_cm054 + 5, "[",                  1, 1, 0xe007, 0 },
   { s_cm054 + 6, NULL       , "WHILE",              5, 0, 0xc015, 0 },
   { NULL       , NULL       , "while",              5, 0, 0xe001, 2 },
   { s_cm054 +10, s_cm054 + 8, "[",                  1, 1, 0xe007, 0 },
   { s_cm054 + 9, NULL       , "NEXT",               4, 0, 0xc015, 0 },
   { NULL       , NULL       , "next",               4, 0, 0xe001, 3 },
   { s_cm054 +13, s_cm054 +11, "[",                  1, 1, 0xe007, 0 },
   { s_cm054 +12, NULL       , "RECORD",             6, 0, 0xc015, 0 },
   { NULL       , NULL       , "rec",                3, 0, 0xe001, 4 },
   { s_cm054 +16, s_cm054 +14, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm054 +15, "rest",               4, 0, 0xc003, 5 },
   { NULL       , NULL       , "REST",               4, 0, 0xc015, 0 },
   { NULL       , s_cm054 +17, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "ALL",                3, 0, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr054[ 20 ] = {
   { s_cr054 + 1, NULL       , "dbEval",             6, 1, 0xc015, 0 },
   { s_cr054 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr054 + 3, NULL       , "{",                  1, 1, 0xc036, 0 },
   { s_cr054 + 4, NULL       , "|",                  1, 0, 0xc01b, 0 },
   { s_cr054 + 5, NULL       , "|",                  1, 0, 0xc01b, 0 },
   { s_cr054 + 6, NULL       , "dbRecall",           8, 1, 0xc015, 0 },
   { s_cr054 + 7, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr054 + 8, NULL       , ")",                  1, 0, 0xc033, 0 },
   { s_cr054 + 9, NULL       , "}",                  1, 1, 0xc037, 0 },
   { s_cr054 +10, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr054 +11, NULL       , "for",                3, 1, 0xc00f, 1 },
   { s_cr054 +12, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr054 +13, NULL       , "while",              5, 1, 0xc00f, 2 },
   { s_cr054 +14, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr054 +15, NULL       , "next",               4, 1, 0xc00b, 3 },
   { s_cr054 +16, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr054 +17, NULL       , "rec",                3, 1, 0xc00b, 4 },
   { s_cr054 +18, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr054 +19, NULL       , "rest",               4, 1, 0xc010, 5 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm055[ 1 ] = {
   { NULL       , NULL       , "DELETE",             6, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr055[ 3 ] = {
   { s_cr055 + 1, NULL       , "dbDelete",           8, 1, 0xc015, 0 },
   { s_cr055 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm056[ 18 ] = {
   { s_cm056 + 1, NULL       , "DELETE",             6, 1, 0xc015, 0 },
   { s_cm056 + 4, s_cm056 + 2, "[",                  1, 1, 0xe007, 0 },
   { s_cm056 + 3, NULL       , "FOR",                3, 0, 0xc015, 0 },
   { NULL       , NULL       , "for",                3, 0, 0xe001, 1 },
   { s_cm056 + 7, s_cm056 + 5, "[",                  1, 1, 0xe007, 0 },
   { s_cm056 + 6, NULL       , "WHILE",              5, 0, 0xc015, 0 },
   { NULL       , NULL       , "while",              5, 0, 0xe001, 2 },
   { s_cm056 +10, s_cm056 + 8, "[",                  1, 1, 0xe007, 0 },
   { s_cm056 + 9, NULL       , "NEXT",               4, 0, 0xc015, 0 },
   { NULL       , NULL       , "next",               4, 0, 0xe001, 3 },
   { s_cm056 +13, s_cm056 +11, "[",                  1, 1, 0xe007, 0 },
   { s_cm056 +12, NULL       , "RECORD",             6, 0, 0xc015, 0 },
   { NULL       , NULL       , "rec",                3, 0, 0xe001, 4 },
   { s_cm056 +16, s_cm056 +14, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm056 +15, "rest",               4, 0, 0xc003, 5 },
   { NULL       , NULL       , "REST",               4, 0, 0xc015, 0 },
   { NULL       , s_cm056 +17, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "ALL",                3, 0, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr056[ 20 ] = {
   { s_cr056 + 1, NULL       , "dbEval",             6, 1, 0xc015, 0 },
   { s_cr056 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr056 + 3, NULL       , "{",                  1, 1, 0xc036, 0 },
   { s_cr056 + 4, NULL       , "|",                  1, 0, 0xc01b, 0 },
   { s_cr056 + 5, NULL       , "|",                  1, 0, 0xc01b, 0 },
   { s_cr056 + 6, NULL       , "dbDelete",           8, 1, 0xc015, 0 },
   { s_cr056 + 7, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr056 + 8, NULL       , ")",                  1, 0, 0xc033, 0 },
   { s_cr056 + 9, NULL       , "}",                  1, 1, 0xc037, 0 },
   { s_cr056 +10, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr056 +11, NULL       , "for",                3, 1, 0xc00f, 1 },
   { s_cr056 +12, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr056 +13, NULL       , "while",              5, 1, 0xc00f, 2 },
   { s_cr056 +14, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr056 +15, NULL       , "next",               4, 1, 0xc00b, 3 },
   { s_cr056 +16, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr056 +17, NULL       , "rec",                3, 1, 0xc00b, 4 },
   { s_cr056 +18, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr056 +19, NULL       , "rest",               4, 1, 0xc010, 5 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm057[ 9 ] = {
   { s_cm057 + 1, NULL       , "REPLACE",            7, 1, 0xc015, 0 },
   { s_cm057 + 2, NULL       , "f1",                 2, 0, 0xe001, 1 },
   { s_cm057 + 3, NULL       , "WITH",               4, 1, 0xc015, 0 },
   { s_cm057 + 4, NULL       , "v1",                 2, 0, 0xe001, 2 },
   { NULL       , s_cm057 + 5, "[",                  1, 0, 0xe007, 0 },
   { s_cm057 + 6, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm057 + 7, NULL       , "fN",                 2, 0, 0xe001, 3 },
   { s_cm057 + 8, NULL       , "WITH",               4, 1, 0xc015, 0 },
   { NULL       , NULL       , "vN",                 2, 0, 0xe001, 4 }
};
static HB_PP_TOKEN s_cr057[ 12 ] = {
   { s_cr057 + 1, NULL       , "_FIELD",             6, 1, 0xc015, 0 },
   { s_cr057 + 2, NULL       , "->",                 2, 0, 0xc03b, 0 },
   { s_cr057 + 3, NULL       , "f1",                 2, 0, 0xc00b, 1 },
   { s_cr057 + 4, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr057 + 5, NULL       , "v1",                 2, 1, 0xc00b, 2 },
   { NULL       , s_cr057 + 6, "[",                  1, 1, 0xc012, 0 },
   { s_cr057 + 7, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr057 + 8, NULL       , "_FIELD",             6, 1, 0xc015, 0 },
   { s_cr057 + 9, NULL       , "->",                 2, 0, 0xc03b, 0 },
   { s_cr057 +10, NULL       , "fN",                 2, 0, 0xc00b, 3 },
   { s_cr057 +11, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { NULL       , NULL       , "vN",                 2, 1, 0xc00b, 4 }
};
static HB_PP_TOKEN s_cm058[ 27 ] = {
   { s_cm058 + 1, NULL       , "REPLACE",            7, 1, 0xc015, 0 },
   { s_cm058 +10, s_cm058 + 2, "[",                  1, 1, 0xe007, 0 },
   { s_cm058 + 3, NULL       , "f1",                 2, 0, 0xe001, 1 },
   { s_cm058 + 4, NULL       , "WITH",               4, 1, 0xc015, 0 },
   { s_cm058 + 5, NULL       , "x1",                 2, 0, 0xe001, 2 },
   { NULL       , s_cm058 + 6, "[",                  1, 1, 0xe007, 0 },
   { s_cm058 + 7, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm058 + 8, NULL       , "fN",                 2, 0, 0xe001, 3 },
   { s_cm058 + 9, NULL       , "WITH",               4, 1, 0xc015, 0 },
   { NULL       , NULL       , "xN",                 2, 0, 0xe001, 4 },
   { s_cm058 +13, s_cm058 +11, "[",                  1, 1, 0xe007, 0 },
   { s_cm058 +12, NULL       , "FOR",                3, 0, 0xc015, 0 },
   { NULL       , NULL       , "for",                3, 0, 0xe001, 5 },
   { s_cm058 +16, s_cm058 +14, "[",                  1, 1, 0xe007, 0 },
   { s_cm058 +15, NULL       , "WHILE",              5, 0, 0xc015, 0 },
   { NULL       , NULL       , "while",              5, 0, 0xe001, 6 },
   { s_cm058 +19, s_cm058 +17, "[",                  1, 1, 0xe007, 0 },
   { s_cm058 +18, NULL       , "NEXT",               4, 0, 0xc015, 0 },
   { NULL       , NULL       , "next",               4, 0, 0xe001, 7 },
   { s_cm058 +22, s_cm058 +20, "[",                  1, 1, 0xe007, 0 },
   { s_cm058 +21, NULL       , "RECORD",             6, 0, 0xc015, 0 },
   { NULL       , NULL       , "rec",                3, 0, 0xe001, 8 },
   { s_cm058 +25, s_cm058 +23, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm058 +24, "rest",               4, 0, 0xc003, 9 },
   { NULL       , NULL       , "REST",               4, 0, 0xc015, 0 },
   { NULL       , s_cm058 +26, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "ALL",                3, 0, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr058[ 29 ] = {
   { s_cr058 + 1, NULL       , "dbEval",             6, 1, 0xc015, 0 },
   { s_cr058 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr058 + 3, NULL       , "{",                  1, 1, 0xc036, 0 },
   { s_cr058 + 4, NULL       , "|",                  1, 0, 0xc01b, 0 },
   { s_cr058 + 5, NULL       , "|",                  1, 0, 0xc01b, 0 },
   { s_cr058 + 6, NULL       , "_FIELD",             6, 1, 0xc015, 0 },
   { s_cr058 + 7, NULL       , "->",                 2, 0, 0xc03b, 0 },
   { s_cr058 + 8, NULL       , "f1",                 2, 0, 0xc00b, 1 },
   { s_cr058 + 9, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr058 +10, NULL       , "x1",                 2, 1, 0xc00b, 2 },
   { s_cr058 +17, s_cr058 +11, "[",                  1, 0, 0xc012, 0 },
   { s_cr058 +12, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr058 +13, NULL       , "_FIELD",             6, 1, 0xc015, 0 },
   { s_cr058 +14, NULL       , "->",                 2, 0, 0xc03b, 0 },
   { s_cr058 +15, NULL       , "fN",                 2, 0, 0xc00b, 3 },
   { s_cr058 +16, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { NULL       , NULL       , "xN",                 2, 1, 0xc00b, 4 },
   { s_cr058 +18, NULL       , "}",                  1, 1, 0xc037, 0 },
   { s_cr058 +19, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr058 +20, NULL       , "for",                3, 1, 0xc00f, 5 },
   { s_cr058 +21, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr058 +22, NULL       , "while",              5, 1, 0xc00f, 6 },
   { s_cr058 +23, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr058 +24, NULL       , "next",               4, 1, 0xc00b, 7 },
   { s_cr058 +25, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr058 +26, NULL       , "rec",                3, 1, 0xc00b, 8 },
   { s_cr058 +27, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr058 +28, NULL       , "rest",               4, 1, 0xc010, 9 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm059[ 5 ] = {
   { s_cm059 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm059 + 2, NULL       , "FILTER",             6, 1, 0xc015, 0 },
   { s_cm059 + 3, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { NULL       , s_cm059 + 4, "x",                  1, 0, 0xc003, 1 },
   { NULL       , NULL       , "&",                  1, 0, 0xc039, 0 }
};
static HB_PP_TOKEN s_cr059[ 22 ] = {
   { s_cr059 + 1, NULL       , "if",                 2, 1, 0xc015, 0 },
   { s_cr059 + 2, NULL       , "(",                  1, 1, 0xc032, 0 },
   { s_cr059 + 3, NULL       , "Empty",              5, 1, 0xc015, 0 },
   { s_cr059 + 4, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr059 + 5, NULL       , "x",                  1, 1, 0xc00e, 1 },
   { s_cr059 + 6, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr059 + 7, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr059 + 8, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr059 + 9, NULL       , "dbClearFilter",     13, 1, 0xc015, 0 },
   { s_cr059 +10, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr059 +11, NULL       , ")",                  1, 0, 0xc033, 0 },
   { s_cr059 +12, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr059 +13, NULL       , "else",               4, 1, 0xc015, 0 },
   { s_cr059 +14, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr059 +15, NULL       , "dbSetFilter",       11, 1, 0xc015, 0 },
   { s_cr059 +16, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr059 +17, NULL       , "x",                  1, 1, 0xc00f, 1 },
   { s_cr059 +18, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr059 +19, NULL       , "x",                  1, 1, 0xc00e, 1 },
   { s_cr059 +20, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr059 +21, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { NULL       , NULL       , "end",                3, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cm060[ 4 ] = {
   { s_cm060 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm060 + 2, NULL       , "FILTER",             6, 1, 0xc015, 0 },
   { s_cm060 + 3, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { NULL       , NULL       , "exp",                3, 0, 0xe001, 1 }
};
static HB_PP_TOKEN s_cr060[ 6 ] = {
   { s_cr060 + 1, NULL       , "dbSetFilter",       11, 1, 0xc015, 0 },
   { s_cr060 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr060 + 3, NULL       , "exp",                3, 1, 0xc00f, 1 },
   { s_cr060 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr060 + 5, NULL       , "exp",                3, 1, 0xc00d, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm061[ 3 ] = {
   { s_cm061 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm061 + 2, NULL       , "FILTER",             6, 1, 0xc015, 0 },
   { NULL       , NULL       , "TO",                 2, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr061[ 4 ] = {
   { s_cr061 + 1, NULL       , "dbClearFilter",     13, 1, 0xc015, 0 },
   { s_cr061 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr061 + 3, NULL       , "NIL",                3, 1, 0xc015, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm062[ 23 ] = {
   { s_cm062 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm062 + 2, NULL       , "RELATION",           8, 1, 0xc015, 0 },
   { s_cm062 + 5, s_cm062 + 3, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm062 + 4, "add",                3, 0, 0xc003, 1 },
   { NULL       , NULL       , "ADDITIVE",           8, 0, 0xc015, 0 },
   { NULL       , s_cm062 + 6, "[",                  1, 1, 0xe007, 0 },
   { s_cm062 + 7, NULL       , "TO",                 2, 0, 0xc015, 0 },
   { s_cm062 + 8, NULL       , "exp1",               4, 0, 0xe001, 3 },
   { s_cm062 + 9, NULL       , "INTO",               4, 1, 0xc015, 0 },
   { s_cm062 +10, NULL       , "alias1",             6, 0, 0xe005, 2 },
   { s_cm062 +13, s_cm062 +11, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm062 +12, "scp1",               4, 0, 0xc003, 4 },
   { NULL       , NULL       , "SCOPED",             6, 0, 0xc015, 0 },
   { NULL       , s_cm062 +14, "[",                  1, 1, 0xe007, 0 },
   { s_cm062 +15, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm062 +17, s_cm062 +16, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "TO",                 2, 0, 0xc015, 0 },
   { s_cm062 +18, NULL       , "expN",               4, 0, 0xe001, 6 },
   { s_cm062 +19, NULL       , "INTO",               4, 1, 0xc015, 0 },
   { s_cm062 +20, NULL       , "aliasN",             6, 0, 0xe005, 5 },
   { NULL       , s_cm062 +21, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm062 +22, "scpN",               4, 0, 0xc003, 7 },
   { NULL       , NULL       , "SCOPED",             6, 0, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr062[ 34 ] = {
   { s_cr062 + 1, NULL       , "if",                 2, 1, 0xc015, 0 },
   { s_cr062 + 2, NULL       , "(",                  1, 1, 0xc032, 0 },
   { s_cr062 + 3, NULL       , "!",                  1, 1, 0xc045, 0 },
   { s_cr062 + 4, NULL       , "add",                3, 1, 0xc010, 1 },
   { s_cr062 + 5, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr062 + 6, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr062 + 7, NULL       , "dbClearRelation",   15, 1, 0xc015, 0 },
   { s_cr062 + 8, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr062 + 9, NULL       , ")",                  1, 0, 0xc033, 0 },
   { s_cr062 +10, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr062 +11, NULL       , "end",                3, 1, 0xc015, 0 },
   { s_cr062 +12, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr062 +13, NULL       , "dbSetRelation",     13, 1, 0xc015, 0 },
   { s_cr062 +14, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr062 +15, NULL       , "alias1",             6, 1, 0xc00e, 2 },
   { s_cr062 +16, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr062 +17, NULL       , "exp1",               4, 1, 0xc00f, 3 },
   { s_cr062 +18, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr062 +19, NULL       , "exp1",               4, 1, 0xc00d, 3 },
   { s_cr062 +20, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr062 +21, NULL       , "scp1",               4, 1, 0xc010, 4 },
   { s_cr062 +22, NULL       , ")",                  1, 1, 0xc033, 0 },
   { NULL       , s_cr062 +23, "[",                  1, 1, 0xc012, 0 },
   { s_cr062 +24, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr062 +25, NULL       , "dbSetRelation",     13, 1, 0xc015, 0 },
   { s_cr062 +26, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr062 +27, NULL       , "aliasN",             6, 1, 0xc00e, 5 },
   { s_cr062 +28, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr062 +29, NULL       , "expN",               4, 1, 0xc00f, 6 },
   { s_cr062 +30, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr062 +31, NULL       , "expN",               4, 1, 0xc00d, 6 },
   { s_cr062 +32, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr062 +33, NULL       , "scpN",               4, 1, 0xc010, 7 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm063[ 3 ] = {
   { s_cm063 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm063 + 2, NULL       , "RELATION",           8, 1, 0xc015, 0 },
   { NULL       , NULL       , "TO",                 2, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr063[ 3 ] = {
   { s_cr063 + 1, NULL       , "dbClearRelation",   15, 1, 0xc015, 0 },
   { s_cr063 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm064[ 18 ] = {
   { s_cm064 + 1, NULL       , "LOCATE",             6, 1, 0xc015, 0 },
   { s_cm064 + 4, s_cm064 + 2, "[",                  1, 1, 0xe007, 0 },
   { s_cm064 + 3, NULL       , "FOR",                3, 0, 0xc015, 0 },
   { NULL       , NULL       , "for",                3, 0, 0xe001, 1 },
   { s_cm064 + 7, s_cm064 + 5, "[",                  1, 1, 0xe007, 0 },
   { s_cm064 + 6, NULL       , "WHILE",              5, 0, 0xc015, 0 },
   { NULL       , NULL       , "while",              5, 0, 0xe001, 2 },
   { s_cm064 +10, s_cm064 + 8, "[",                  1, 1, 0xe007, 0 },
   { s_cm064 + 9, NULL       , "NEXT",               4, 0, 0xc015, 0 },
   { NULL       , NULL       , "next",               4, 0, 0xe001, 3 },
   { s_cm064 +13, s_cm064 +11, "[",                  1, 1, 0xe007, 0 },
   { s_cm064 +12, NULL       , "RECORD",             6, 0, 0xc015, 0 },
   { NULL       , NULL       , "rec",                3, 0, 0xe001, 4 },
   { s_cm064 +16, s_cm064 +14, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm064 +15, "rest",               4, 0, 0xc003, 5 },
   { NULL       , NULL       , "REST",               4, 0, 0xc015, 0 },
   { NULL       , s_cm064 +17, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "ALL",                3, 0, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr064[ 12 ] = {
   { s_cr064 + 1, NULL       , "__dbLocate",        10, 1, 0xc015, 0 },
   { s_cr064 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr064 + 3, NULL       , "for",                3, 1, 0xc00f, 1 },
   { s_cr064 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr064 + 5, NULL       , "while",              5, 1, 0xc00f, 2 },
   { s_cr064 + 6, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr064 + 7, NULL       , "next",               4, 1, 0xc00b, 3 },
   { s_cr064 + 8, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr064 + 9, NULL       , "rec",                3, 1, 0xc00b, 4 },
   { s_cr064 +10, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr064 +11, NULL       , "rest",               4, 1, 0xc010, 5 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm065[ 8 ] = {
   { s_cm065 + 1, NULL       , "SEEK",               4, 1, 0xc015, 0 },
   { s_cm065 + 2, NULL       , "exp",                3, 0, 0xe001, 1 },
   { s_cm065 + 5, s_cm065 + 3, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm065 + 4, "soft",               4, 0, 0xc003, 2 },
   { NULL       , NULL       , "SOFTSEEK",           8, 1, 0xc015, 0 },
   { NULL       , s_cm065 + 6, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm065 + 7, "last",               4, 0, 0xc003, 3 },
   { NULL       , NULL       , "LAST",               4, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr065[ 22 ] = {
   { s_cr065 + 1, NULL       , "dbSeek",             6, 1, 0xc015, 0 },
   { s_cr065 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr065 + 3, NULL       , "exp",                3, 1, 0xc00b, 1 },
   { s_cr065 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr065 + 5, NULL       , "iif",                3, 1, 0xc015, 0 },
   { s_cr065 + 6, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr065 + 7, NULL       , "soft",               4, 1, 0xc010, 2 },
   { s_cr065 + 8, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr065 + 9, NULL       , ".T.",                3, 1, 0xc02d, 0 },
   { s_cr065 +10, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr065 +11, NULL       , "NIL",                3, 1, 0xc015, 0 },
   { s_cr065 +12, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr065 +13, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr065 +14, NULL       , "iif",                3, 1, 0xc015, 0 },
   { s_cr065 +15, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr065 +16, NULL       , "last",               4, 1, 0xc010, 3 },
   { s_cr065 +17, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr065 +18, NULL       , ".T.",                3, 1, 0xc02d, 0 },
   { s_cr065 +19, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr065 +20, NULL       , "NIL",                3, 1, 0xc015, 0 },
   { s_cr065 +21, NULL       , ")",                  1, 1, 0xc033, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm066[ 1 ] = {
   { NULL       , NULL       , "CONTINUE",           8, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr066[ 3 ] = {
   { s_cr066 + 1, NULL       , "__dbContinue",      12, 1, 0xc015, 0 },
   { s_cr066 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm067[ 3 ] = {
   { s_cm067 + 1, NULL       , "FIND",               4, 1, 0xc015, 0 },
   { s_cm067 + 2, NULL       , "=",                  1, 1, 0xc049, 0 },
   { NULL       , NULL       , "xpr",                3, 0, 0xe001, 1 }
};
static HB_PP_TOKEN s_cr067[ 5 ] = {
   { s_cr067 + 1, NULL       , "(",                  1, 1, 0xc032, 0 },
   { s_cr067 + 2, NULL       , "find",               4, 1, 0xc015, 0 },
   { s_cr067 + 3, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr067 + 4, NULL       , "xpr",                3, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm068[ 3 ] = {
   { s_cm068 + 1, NULL       , "FIND",               4, 1, 0xc015, 0 },
   { s_cm068 + 2, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { NULL       , NULL       , "xpr",                3, 0, 0xe001, 1 }
};
static HB_PP_TOKEN s_cr068[ 5 ] = {
   { s_cr068 + 1, NULL       , "(",                  1, 1, 0xc032, 0 },
   { s_cr068 + 2, NULL       , "find",               4, 1, 0xc015, 0 },
   { s_cr068 + 3, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr068 + 4, NULL       , "xpr",                3, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm069[ 2 ] = {
   { s_cm069 + 1, NULL       , "FIND",               4, 1, 0xc015, 0 },
   { NULL       , NULL       , "text",               4, 0, 0xe004, 1 }
};
static HB_PP_TOKEN s_cr069[ 4 ] = {
   { s_cr069 + 1, NULL       , "dbSeek",             6, 1, 0xc015, 0 },
   { s_cr069 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr069 + 3, NULL       , "text",               4, 1, 0xc00e, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm070[ 4 ] = {
   { s_cm070 + 1, NULL       , "SKIP",               4, 1, 0xc015, 0 },
   { s_cm070 + 2, NULL       , "x",                  1, 0, 0xe001, 2 },
   { s_cm070 + 3, NULL       , "ALIAS",              5, 1, 0xc015, 0 },
   { NULL       , NULL       , "a",                  1, 0, 0xe001, 1 }
};
static HB_PP_TOKEN s_cr070[ 8 ] = {
   { s_cr070 + 1, NULL       , "a",                  1, 1, 0xc00b, 1 },
   { s_cr070 + 2, NULL       , "->",                 2, 0, 0xc03b, 0 },
   { s_cr070 + 3, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr070 + 4, NULL       , "dbSkip",             6, 1, 0xc015, 0 },
   { s_cr070 + 5, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr070 + 6, NULL       , "x",                  1, 1, 0xc00b, 2 },
   { s_cr070 + 7, NULL       , ")",                  1, 1, 0xc033, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm071[ 3 ] = {
   { s_cm071 + 1, NULL       , "SKIP",               4, 1, 0xc015, 0 },
   { s_cm071 + 2, NULL       , "ALIAS",              5, 1, 0xc015, 0 },
   { NULL       , NULL       , "a",                  1, 0, 0xe001, 1 }
};
static HB_PP_TOKEN s_cr071[ 7 ] = {
   { s_cr071 + 1, NULL       , "a",                  1, 1, 0xc00b, 1 },
   { s_cr071 + 2, NULL       , "->",                 2, 0, 0xc03b, 0 },
   { s_cr071 + 3, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr071 + 4, NULL       , "dbSkip",             6, 1, 0xc015, 0 },
   { s_cr071 + 5, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr071 + 6, NULL       , ")",                  1, 0, 0xc033, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm072[ 2 ] = {
   { s_cm072 + 1, NULL       , "SKIP",               4, 1, 0xc015, 0 },
   { NULL       , NULL       , "x",                  1, 0, 0xe001, 1 }
};
static HB_PP_TOKEN s_cr072[ 4 ] = {
   { s_cr072 + 1, NULL       , "dbSkip",             6, 1, 0xc015, 0 },
   { s_cr072 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr072 + 3, NULL       , "x",                  1, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm073[ 1 ] = {
   { NULL       , NULL       , "SKIP",               4, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr073[ 3 ] = {
   { s_cr073 + 1, NULL       , "dbSkip",             6, 1, 0xc015, 0 },
   { s_cr073 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm074[ 2 ] = {
   { s_cm074 + 1, NULL       , "GO",                 2, 1, 0xc015, 0 },
   { NULL       , NULL       , "BOTTOM",             6, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr074[ 3 ] = {
   { s_cr074 + 1, NULL       , "dbGoBottom",        10, 1, 0xc015, 0 },
   { s_cr074 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm075[ 2 ] = {
   { s_cm075 + 1, NULL       , "GOTO",               4, 1, 0xc015, 0 },
   { NULL       , NULL       , "BOTTOM",             6, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr075[ 3 ] = {
   { s_cr075 + 1, NULL       , "dbGoBottom",        10, 1, 0xc015, 0 },
   { s_cr075 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm076[ 2 ] = {
   { s_cm076 + 1, NULL       , "GO",                 2, 1, 0xc015, 0 },
   { NULL       , NULL       , "TOP",                3, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr076[ 3 ] = {
   { s_cr076 + 1, NULL       , "dbGoTop",            7, 1, 0xc015, 0 },
   { s_cr076 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm077[ 2 ] = {
   { s_cm077 + 1, NULL       , "GOTO",               4, 1, 0xc015, 0 },
   { NULL       , NULL       , "TOP",                3, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr077[ 3 ] = {
   { s_cr077 + 1, NULL       , "dbGoTop",            7, 1, 0xc015, 0 },
   { s_cr077 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm078[ 2 ] = {
   { s_cm078 + 1, NULL       , "GO",                 2, 1, 0xc015, 0 },
   { NULL       , NULL       , "x",                  1, 0, 0xe001, 1 }
};
static HB_PP_TOKEN s_cr078[ 4 ] = {
   { s_cr078 + 1, NULL       , "dbGoto",             6, 1, 0xc015, 0 },
   { s_cr078 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr078 + 3, NULL       , "x",                  1, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm079[ 2 ] = {
   { s_cm079 + 1, NULL       , "GOTO",               4, 1, 0xc015, 0 },
   { NULL       , NULL       , "x",                  1, 0, 0xe001, 1 }
};
static HB_PP_TOKEN s_cr079[ 4 ] = {
   { s_cr079 + 1, NULL       , "dbGoto",             6, 1, 0xc015, 0 },
   { s_cr079 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr079 + 3, NULL       , "x",                  1, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm080[ 1 ] = {
   { NULL       , NULL       , "COMMIT",             6, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr080[ 3 ] = {
   { s_cr080 + 1, NULL       , "dbCommitAll",       11, 1, 0xc015, 0 },
   { s_cr080 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm081[ 2 ] = {
   { s_cm081 + 1, NULL       , "UNLOCK",             6, 1, 0xc015, 0 },
   { NULL       , NULL       , "ALL",                3, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr081[ 3 ] = {
   { s_cr081 + 1, NULL       , "dbUnlockAll",       11, 1, 0xc015, 0 },
   { s_cr081 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm082[ 1 ] = {
   { NULL       , NULL       , "UNLOCK",             6, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr082[ 3 ] = {
   { s_cr082 + 1, NULL       , "dbUnlock",           8, 1, 0xc015, 0 },
   { s_cr082 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm083[ 1 ] = {
   { NULL       , NULL       , "ZAP",                3, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr083[ 3 ] = {
   { s_cr083 + 1, NULL       , "__dbZap",            7, 1, 0xc015, 0 },
   { s_cr083 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm084[ 1 ] = {
   { NULL       , NULL       , "PACK",               4, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr084[ 3 ] = {
   { s_cr084 + 1, NULL       , "__dbPack",           8, 1, 0xc015, 0 },
   { s_cr084 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm085[ 2 ] = {
   { s_cm085 + 1, NULL       , "APPEND",             6, 1, 0xc015, 0 },
   { NULL       , NULL       , "BLANK",              5, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr085[ 3 ] = {
   { s_cr085 + 1, NULL       , "dbAppend",           8, 1, 0xc015, 0 },
   { s_cr085 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm086[ 29 ] = {
   { s_cm086 + 1, NULL       , "USE",                3, 1, 0xc015, 0 },
   { s_cm086 + 2, NULL       , "db",                 2, 0, 0xe005, 3 },
   { s_cm086 + 5, s_cm086 + 3, "[",                  1, 1, 0xe007, 0 },
   { s_cm086 + 4, NULL       , "VIA",                3, 0, 0xc015, 0 },
   { NULL       , NULL       , "rdd",                3, 0, 0xe001, 2 },
   { s_cm086 + 8, s_cm086 + 6, "[",                  1, 1, 0xe007, 0 },
   { s_cm086 + 7, NULL       , "ALIAS",              5, 0, 0xc015, 0 },
   { NULL       , NULL       , "a",                  1, 0, 0xe001, 4 },
   { s_cm086 +11, s_cm086 + 9, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm086 +10, "nw",                 2, 0, 0xc003, 1 },
   { NULL       , NULL       , "NEW",                3, 1, 0xc015, 0 },
   { s_cm086 +14, s_cm086 +12, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm086 +13, "ex",                 2, 0, 0xc003, 6 },
   { NULL       , NULL       , "EXCLUSIVE",          9, 1, 0xc015, 0 },
   { s_cm086 +17, s_cm086 +15, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm086 +16, "sh",                 2, 0, 0xc003, 5 },
   { NULL       , NULL       , "SHARED",             6, 1, 0xc015, 0 },
   { s_cm086 +20, s_cm086 +18, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm086 +19, "ro",                 2, 0, 0xc003, 7 },
   { NULL       , NULL       , "READONLY",           8, 1, 0xc015, 0 },
   { s_cm086 +23, s_cm086 +21, "[",                  1, 1, 0xe007, 0 },
   { s_cm086 +22, NULL       , "CODEPAGE",           8, 0, 0xc015, 0 },
   { NULL       , NULL       , "cp",                 2, 0, 0xe001, 8 },
   { NULL       , s_cm086 +24, "[",                  1, 1, 0xe007, 0 },
   { s_cm086 +25, NULL       , "INDEX",              5, 0, 0xc015, 0 },
   { s_cm086 +26, NULL       , "index1",             6, 0, 0xe005, 9 },
   { NULL       , s_cm086 +27, "[",                  1, 1, 0xe007, 0 },
   { s_cm086 +28, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { NULL       , NULL       , "indexN",             6, 0, 0xe005, 10 }
};
static HB_PP_TOKEN s_cr086[ 39 ] = {
   { s_cr086 + 1, NULL       , "dbUseArea",          9, 1, 0xc015, 0 },
   { s_cr086 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr086 + 3, NULL       , "nw",                 2, 1, 0xc010, 1 },
   { s_cr086 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr086 + 5, NULL       , "rdd",                3, 1, 0xc00b, 2 },
   { s_cr086 + 6, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr086 + 7, NULL       , "db",                 2, 1, 0xc00e, 3 },
   { s_cr086 + 8, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr086 + 9, NULL       , "a",                  1, 1, 0xc00e, 4 },
   { s_cr086 +10, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr086 +11, NULL       , "iif",                3, 1, 0xc015, 0 },
   { s_cr086 +12, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr086 +13, NULL       , "sh",                 2, 1, 0xc010, 5 },
   { s_cr086 +14, NULL       , ".OR.",               4, 1, 0xc046, 0 },
   { s_cr086 +15, NULL       , "ex",                 2, 1, 0xc010, 6 },
   { s_cr086 +16, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr086 +17, NULL       , "!",                  1, 1, 0xc045, 0 },
   { s_cr086 +18, NULL       , "ex",                 2, 1, 0xc010, 6 },
   { s_cr086 +19, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr086 +20, NULL       , "NIL",                3, 1, 0xc015, 0 },
   { s_cr086 +21, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr086 +22, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr086 +23, NULL       , "ro",                 2, 1, 0xc010, 7 },
   { s_cr086 +26, s_cr086 +24, "[",                  1, 1, 0xc012, 0 },
   { s_cr086 +25, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { NULL       , NULL       , "cp",                 2, 1, 0xc00b, 8 },
   { s_cr086 +27, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr086 +33, s_cr086 +28, "[",                  1, 1, 0xc012, 0 },
   { s_cr086 +29, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr086 +30, NULL       , "dbSetIndex",        10, 1, 0xc015, 0 },
   { s_cr086 +31, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr086 +32, NULL       , "index1",             6, 1, 0xc00e, 9 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 },
   { NULL       , s_cr086 +34, "[",                  1, 1, 0xc012, 0 },
   { s_cr086 +35, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr086 +36, NULL       , "dbSetIndex",        10, 1, 0xc015, 0 },
   { s_cr086 +37, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr086 +38, NULL       , "indexN",             6, 1, 0xc00e, 10 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm087[ 1 ] = {
   { NULL       , NULL       , "USE",                3, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr087[ 3 ] = {
   { s_cr087 + 1, NULL       , "dbCloseArea",       11, 1, 0xc015, 0 },
   { s_cr087 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm088[ 6 ] = {
   { s_cm088 + 1, NULL       , "SELECT",             6, 1, 0xc015, 0 },
   { s_cm088 + 2, NULL       , "f",                  1, 0, 0xe001, 1 },
   { s_cm088 + 3, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cm088 + 5, s_cm088 + 4, "[",                  1, 0, 0xe007, 0 },
   { NULL       , NULL       , "p",                  1, 0, 0xe002, 2 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cr088[ 7 ] = {
   { s_cr088 + 1, NULL       , "dbSelectArea",      12, 1, 0xc015, 0 },
   { s_cr088 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr088 + 3, NULL       , "f",                  1, 1, 0xc00b, 1 },
   { s_cr088 + 4, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr088 + 5, NULL       , "p",                  1, 1, 0xc00b, 2 },
   { s_cr088 + 6, NULL       , ")",                  1, 1, 0xc033, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm089[ 2 ] = {
   { s_cm089 + 1, NULL       , "SELECT",             6, 1, 0xc015, 0 },
   { NULL       , NULL       , "area",               4, 0, 0xe001, 1 }
};
static HB_PP_TOKEN s_cr089[ 4 ] = {
   { s_cr089 + 1, NULL       , "dbSelectArea",      12, 1, 0xc015, 0 },
   { s_cr089 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr089 + 3, NULL       , "area",               4, 1, 0xc00e, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm090[ 2 ] = {
   { s_cm090 + 1, NULL       , "CLEAR",              5, 1, 0xc015, 0 },
   { NULL       , NULL       , "ALL",                3, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr090[ 19 ] = {
   { s_cr090 + 1, NULL       , "CLOSE",              5, 1, 0xc015, 0 },
   { s_cr090 + 2, NULL       , "DATABASES",          9, 1, 0xc015, 0 },
   { s_cr090 + 3, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr090 + 4, NULL       , "CLOSE",              5, 1, 0xc015, 0 },
   { s_cr090 + 5, NULL       , "FORMAT",             6, 1, 0xc015, 0 },
   { s_cr090 + 6, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr090 + 7, NULL       , "CLEAR",              5, 1, 0xc015, 0 },
   { s_cr090 + 8, NULL       , "MEMORY",             6, 1, 0xc015, 0 },
   { s_cr090 + 9, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr090 +10, NULL       , "CLEAR",              5, 1, 0xc015, 0 },
   { s_cr090 +11, NULL       , "GETS",               4, 1, 0xc015, 0 },
   { s_cr090 +12, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr090 +13, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cr090 +14, NULL       , "ALTERNATE",          9, 1, 0xc015, 0 },
   { s_cr090 +15, NULL       , "OFF",                3, 1, 0xc015, 0 },
   { s_cr090 +16, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr090 +17, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cr090 +18, NULL       , "ALTERNATE",          9, 1, 0xc015, 0 },
   { NULL       , NULL       , "TO",                 2, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cm091[ 1 ] = {
   { NULL       , NULL       , "CLEAR",              5, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr091[ 5 ] = {
   { s_cr091 + 1, NULL       , "CLEAR",              5, 1, 0xc015, 0 },
   { s_cr091 + 2, NULL       , "SCREEN",             6, 1, 0xc015, 0 },
   { s_cr091 + 3, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr091 + 4, NULL       , "CLEAR",              5, 1, 0xc015, 0 },
   { NULL       , NULL       , "GETS",               4, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cm092[ 2 ] = {
   { s_cm092 + 1, NULL       , "CLOSE",              5, 1, 0xc015, 0 },
   { NULL       , NULL       , "ALL",                3, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr092[ 8 ] = {
   { s_cr092 + 1, NULL       , "CLOSE",              5, 1, 0xc015, 0 },
   { s_cr092 + 2, NULL       , "DATABASES",          9, 1, 0xc015, 0 },
   { s_cr092 + 3, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr092 + 4, NULL       , "SELECT",             6, 1, 0xc015, 0 },
   { s_cr092 + 5, NULL       , "1",                  1, 1, 0xc02a, 0 },
   { s_cr092 + 6, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr092 + 7, NULL       , "CLOSE",              5, 1, 0xc015, 0 },
   { NULL       , NULL       , "FORMAT",             6, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cm093[ 2 ] = {
   { s_cm093 + 1, NULL       , "CLOSE",              5, 1, 0xc015, 0 },
   { NULL       , NULL       , "PROCEDURE",          9, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cm094[ 2 ] = {
   { s_cm094 + 1, NULL       , "CLOSE",              5, 1, 0xc015, 0 },
   { NULL       , NULL       , "INDEXES",            7, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr094[ 3 ] = {
   { s_cr094 + 1, NULL       , "dbClearIndex",      12, 1, 0xc015, 0 },
   { s_cr094 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm095[ 2 ] = {
   { s_cm095 + 1, NULL       , "CLOSE",              5, 1, 0xc015, 0 },
   { NULL       , NULL       , "FORMAT",             6, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr095[ 4 ] = {
   { s_cr095 + 1, NULL       , "__SetFormat",       11, 1, 0xc015, 0 },
   { s_cr095 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr095 + 3, NULL       , "NIL",                3, 1, 0xc015, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm096[ 2 ] = {
   { s_cm096 + 1, NULL       , "CLOSE",              5, 1, 0xc015, 0 },
   { NULL       , NULL       , "ALTERNATE",          9, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr096[ 6 ] = {
   { s_cr096 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr096 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr096 + 3, NULL       , "_SET_ALTFILE",      12, 1, 0xc015, 0 },
   { s_cr096 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr096 + 5, NULL       , "",                   0, 1, 0xc029, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm097[ 2 ] = {
   { s_cm097 + 1, NULL       , "CLOSE",              5, 1, 0xc015, 0 },
   { NULL       , NULL       , "DATABASES",          9, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr097[ 3 ] = {
   { s_cr097 + 1, NULL       , "dbCloseAll",        10, 1, 0xc015, 0 },
   { s_cr097 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm098[ 1 ] = {
   { NULL       , NULL       , "CLOSE",              5, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr098[ 3 ] = {
   { s_cr098 + 1, NULL       , "dbCloseArea",       11, 1, 0xc015, 0 },
   { s_cr098 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm099[ 2 ] = {
   { s_cm099 + 1, NULL       , "CLOSE",              5, 1, 0xc015, 0 },
   { NULL       , NULL       , "a",                  1, 0, 0xe001, 1 }
};
static HB_PP_TOKEN s_cr099[ 7 ] = {
   { s_cr099 + 1, NULL       , "a",                  1, 1, 0xc00b, 1 },
   { s_cr099 + 2, NULL       , "->",                 2, 0, 0xc03b, 0 },
   { s_cr099 + 3, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr099 + 4, NULL       , "dbCloseArea",       11, 1, 0xc015, 0 },
   { s_cr099 + 5, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr099 + 6, NULL       , ")",                  1, 0, 0xc033, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm100[ 3 ] = {
   { s_cm100 + 1, NULL       , "RUN",                3, 1, 0xc015, 0 },
   { s_cm100 + 2, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { NULL       , NULL       , "xpr",                3, 0, 0xe001, 1 }
};
static HB_PP_TOKEN s_cr100[ 5 ] = {
   { s_cr100 + 1, NULL       , "(",                  1, 1, 0xc032, 0 },
   { s_cr100 + 2, NULL       , "run",                3, 1, 0xc015, 0 },
   { s_cr100 + 3, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr100 + 4, NULL       , "xpr",                3, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm101[ 3 ] = {
   { s_cm101 + 1, NULL       , "RUN",                3, 1, 0xc015, 0 },
   { s_cm101 + 2, NULL       , "=",                  1, 1, 0xc049, 0 },
   { NULL       , NULL       , "xpr",                3, 0, 0xe001, 1 }
};
static HB_PP_TOKEN s_cr101[ 5 ] = {
   { s_cr101 + 1, NULL       , "(",                  1, 1, 0xc032, 0 },
   { s_cr101 + 2, NULL       , "run",                3, 1, 0xc015, 0 },
   { s_cr101 + 3, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr101 + 4, NULL       , "xpr",                3, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm102[ 2 ] = {
   { s_cm102 + 1, NULL       , "!",                  1, 1, 0xc045, 0 },
   { NULL       , NULL       , "cmd",                3, 0, 0xe004, 1 }
};
static HB_PP_TOKEN s_cr102[ 2 ] = {
   { s_cr102 + 1, NULL       , "RUN",                3, 1, 0xc015, 0 },
   { NULL       , NULL       , "cmd",                3, 1, 0xc00b, 1 }
};
static HB_PP_TOKEN s_cm103[ 4 ] = {
   { s_cm103 + 1, NULL       , "RUN",                3, 1, 0xc015, 0 },
   { s_cm103 + 2, NULL       , "(",                  1, 1, 0xc032, 0 },
   { s_cm103 + 3, NULL       , "cmd",                3, 0, 0xe001, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cr103[ 4 ] = {
   { s_cr103 + 1, NULL       , "__Run",              5, 1, 0xc015, 0 },
   { s_cr103 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr103 + 3, NULL       , "cmd",                3, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm104[ 2 ] = {
   { s_cm104 + 1, NULL       , "RUN",                3, 1, 0xc015, 0 },
   { NULL       , NULL       , "cmd",                3, 0, 0xe004, 1 }
};
static HB_PP_TOKEN s_cr104[ 4 ] = {
   { s_cr104 + 1, NULL       , "__Run",              5, 1, 0xc015, 0 },
   { s_cr104 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr104 + 3, NULL       , "cmd",                3, 1, 0xc00c, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm105[ 1 ] = {
   { NULL       , NULL       , "QUIT",               4, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr105[ 3 ] = {
   { s_cr105 + 1, NULL       , "__Quit",             6, 1, 0xc015, 0 },
   { s_cr105 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm106[ 1 ] = {
   { NULL       , NULL       , "CANCEL",             6, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr106[ 3 ] = {
   { s_cr106 + 1, NULL       , "__Quit",             6, 1, 0xc015, 0 },
   { s_cr106 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm107[ 2 ] = {
   { s_cm107 + 1, NULL       , "REQUEST",            7, 1, 0xc015, 0 },
   { NULL       , NULL       , "func",               4, 0, 0xe002, 1 }
};
static HB_PP_TOKEN s_cr107[ 2 ] = {
   { s_cr107 + 1, NULL       , "EXTERNAL",           8, 1, 0xc015, 0 },
   { NULL       , NULL       , "func",               4, 1, 0xc00b, 1 }
};
static HB_PP_TOKEN s_cm108[ 6 ] = {
   { s_cm108 + 1, NULL       , "TYPE",               4, 1, 0xc015, 0 },
   { s_cm108 + 2, NULL       , "f",                  1, 0, 0xe005, 1 },
   { NULL       , s_cm108 + 3, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm108 + 4, "prn",                3, 0, 0xc003, 2 },
   { s_cm108 + 5, NULL       , "TO",                 2, 0, 0xc015, 0 },
   { NULL       , NULL       , "PRINTER",            7, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr108[ 6 ] = {
   { s_cr108 + 1, NULL       , "__TypeFile",        10, 1, 0xc015, 0 },
   { s_cr108 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr108 + 3, NULL       , "f",                  1, 1, 0xc00e, 1 },
   { s_cr108 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr108 + 5, NULL       , "prn",                3, 1, 0xc010, 2 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm109[ 10 ] = {
   { s_cm109 + 1, NULL       , "TYPE",               4, 1, 0xc015, 0 },
   { s_cm109 + 2, NULL       , "f",                  1, 0, 0xe005, 1 },
   { s_cm109 + 6, s_cm109 + 3, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm109 + 4, "prn",                3, 0, 0xc003, 2 },
   { s_cm109 + 5, NULL       , "TO",                 2, 0, 0xc015, 0 },
   { NULL       , NULL       , "PRINTER",            7, 1, 0xc015, 0 },
   { NULL       , s_cm109 + 7, "[",                  1, 1, 0xe007, 0 },
   { s_cm109 + 8, NULL       , "TO",                 2, 0, 0xc015, 0 },
   { s_cm109 + 9, NULL       , "FILE",               4, 1, 0xc015, 0 },
   { NULL       , NULL       , "dst",                3, 0, 0xe005, 3 }
};
static HB_PP_TOKEN s_cr109[ 13 ] = {
   { s_cr109 + 1, NULL       , "__TypeFile",        10, 1, 0xc015, 0 },
   { s_cr109 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr109 + 3, NULL       , "f",                  1, 1, 0xc00e, 1 },
   { s_cr109 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr109 + 5, NULL       , "prn",                3, 1, 0xc010, 2 },
   { s_cr109 + 6, NULL       , ")",                  1, 1, 0xc033, 0 },
   { NULL       , s_cr109 + 7, "[",                  1, 0, 0xc012, 0 },
   { s_cr109 + 8, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr109 + 9, NULL       , "COPY",               4, 1, 0xc015, 0 },
   { s_cr109 +10, NULL       , "FILE",               4, 1, 0xc015, 0 },
   { s_cr109 +11, NULL       , "f",                  1, 1, 0xc00e, 1 },
   { s_cr109 +12, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { NULL       , NULL       , "dst",                3, 1, 0xc00e, 3 }
};
static HB_PP_TOKEN s_cm110[ 3 ] = {
   { s_cm110 + 1, NULL       , "DIR",                3, 1, 0xc015, 0 },
   { NULL       , s_cm110 + 2, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "mask",               4, 0, 0xe005, 1 }
};
static HB_PP_TOKEN s_cr110[ 4 ] = {
   { s_cr110 + 1, NULL       , "__Dir",              5, 1, 0xc015, 0 },
   { s_cr110 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr110 + 3, NULL       , "mask",               4, 1, 0xc00e, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm111[ 5 ] = {
   { s_cm111 + 1, NULL       , "COPY",               4, 1, 0xc015, 0 },
   { s_cm111 + 2, NULL       , "FILE",               4, 1, 0xc015, 0 },
   { s_cm111 + 3, NULL       , "src",                3, 0, 0xe005, 1 },
   { s_cm111 + 4, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { NULL       , NULL       , "dst",                3, 0, 0xe005, 2 }
};
static HB_PP_TOKEN s_cr111[ 6 ] = {
   { s_cr111 + 1, NULL       , "__CopyFile",        10, 1, 0xc015, 0 },
   { s_cr111 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr111 + 3, NULL       , "src",                3, 1, 0xc00e, 1 },
   { s_cr111 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr111 + 5, NULL       , "dst",                3, 1, 0xc00e, 2 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm112[ 4 ] = {
   { s_cm112 + 1, NULL       , "RENAME",             6, 1, 0xc015, 0 },
   { s_cm112 + 2, NULL       , "old",                3, 0, 0xe005, 1 },
   { s_cm112 + 3, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { NULL       , NULL       , "new",                3, 0, 0xe005, 2 }
};
static HB_PP_TOKEN s_cr112[ 6 ] = {
   { s_cr112 + 1, NULL       , "FRename",            7, 1, 0xc015, 0 },
   { s_cr112 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr112 + 3, NULL       , "old",                3, 1, 0xc00e, 1 },
   { s_cr112 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr112 + 5, NULL       , "new",                3, 1, 0xc00e, 2 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm113[ 3 ] = {
   { s_cm113 + 1, NULL       , "DELETE",             6, 1, 0xc015, 0 },
   { s_cm113 + 2, NULL       , "FILE",               4, 1, 0xc015, 0 },
   { NULL       , NULL       , "f",                  1, 0, 0xe005, 1 }
};
static HB_PP_TOKEN s_cr113[ 4 ] = {
   { s_cr113 + 1, NULL       , "FErase",             6, 1, 0xc015, 0 },
   { s_cr113 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr113 + 3, NULL       , "f",                  1, 1, 0xc00e, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm114[ 2 ] = {
   { s_cm114 + 1, NULL       , "ERASE",              5, 1, 0xc015, 0 },
   { NULL       , NULL       , "f",                  1, 0, 0xe005, 1 }
};
static HB_PP_TOKEN s_cr114[ 4 ] = {
   { s_cr114 + 1, NULL       , "FErase",             6, 1, 0xc015, 0 },
   { s_cr114 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr114 + 3, NULL       , "f",                  1, 1, 0xc00e, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm115[ 7 ] = {
   { s_cm115 + 1, NULL       , "SAVE",               4, 1, 0xc015, 0 },
   { s_cm115 + 2, NULL       , "HBV",                3, 1, 0xc015, 0 },
   { s_cm115 + 5, s_cm115 + 3, "[",                  1, 1, 0xe007, 0 },
   { s_cm115 + 4, NULL       , "TO",                 2, 0, 0xc015, 0 },
   { NULL       , NULL       , "f",                  1, 0, 0xe005, 1 },
   { NULL       , s_cm115 + 6, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "ALL",                3, 0, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr115[ 8 ] = {
   { s_cr115 + 1, NULL       , "hb_mvSave",          9, 1, 0xc015, 0 },
   { s_cr115 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr115 + 3, NULL       , "f",                  1, 1, 0xc00e, 1 },
   { s_cr115 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr115 + 5, NULL       , "*",                  1, 1, 0xc029, 0 },
   { s_cr115 + 6, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr115 + 7, NULL       , ".T.",                3, 1, 0xc02d, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm116[ 7 ] = {
   { s_cm116 + 1, NULL       , "SAVE",               4, 1, 0xc015, 0 },
   { s_cm116 + 2, NULL       , "HBV",                3, 1, 0xc015, 0 },
   { s_cm116 + 3, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { s_cm116 + 4, NULL       , "f",                  1, 0, 0xe005, 1 },
   { s_cm116 + 5, NULL       , "ALL",                3, 1, 0xc015, 0 },
   { s_cm116 + 6, NULL       , "EXCEPT",             6, 1, 0xc015, 0 },
   { NULL       , NULL       , "p",                  1, 0, 0xe001, 2 }
};
static HB_PP_TOKEN s_cr116[ 8 ] = {
   { s_cr116 + 1, NULL       , "hb_mvSave",          9, 1, 0xc015, 0 },
   { s_cr116 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr116 + 3, NULL       , "f",                  1, 1, 0xc00e, 1 },
   { s_cr116 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr116 + 5, NULL       , "p",                  1, 1, 0xc00e, 2 },
   { s_cr116 + 6, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr116 + 7, NULL       , ".F.",                3, 1, 0xc02d, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm117[ 7 ] = {
   { s_cm117 + 1, NULL       , "SAVE",               4, 1, 0xc015, 0 },
   { s_cm117 + 2, NULL       , "HBV",                3, 1, 0xc015, 0 },
   { s_cm117 + 3, NULL       , "ALL",                3, 1, 0xc015, 0 },
   { s_cm117 + 4, NULL       , "EXCEPT",             6, 1, 0xc015, 0 },
   { s_cm117 + 5, NULL       , "p",                  1, 0, 0xe001, 2 },
   { s_cm117 + 6, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { NULL       , NULL       , "f",                  1, 0, 0xe005, 1 }
};
static HB_PP_TOKEN s_cr117[ 8 ] = {
   { s_cr117 + 1, NULL       , "hb_mvSave",          9, 1, 0xc015, 0 },
   { s_cr117 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr117 + 3, NULL       , "f",                  1, 1, 0xc00e, 1 },
   { s_cr117 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr117 + 5, NULL       , "p",                  1, 1, 0xc00e, 2 },
   { s_cr117 + 6, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr117 + 7, NULL       , ".F.",                3, 1, 0xc02d, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm118[ 7 ] = {
   { s_cm118 + 1, NULL       , "SAVE",               4, 1, 0xc015, 0 },
   { s_cm118 + 2, NULL       , "HBV",                3, 1, 0xc015, 0 },
   { s_cm118 + 3, NULL       , "ALL",                3, 1, 0xc015, 0 },
   { s_cm118 + 4, NULL       , "LIKE",               4, 1, 0xc015, 0 },
   { s_cm118 + 5, NULL       , "p",                  1, 0, 0xe001, 2 },
   { s_cm118 + 6, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { NULL       , NULL       , "f",                  1, 0, 0xe005, 1 }
};
static HB_PP_TOKEN s_cr118[ 8 ] = {
   { s_cr118 + 1, NULL       , "hb_mvSave",          9, 1, 0xc015, 0 },
   { s_cr118 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr118 + 3, NULL       , "f",                  1, 1, 0xc00e, 1 },
   { s_cr118 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr118 + 5, NULL       , "p",                  1, 1, 0xc00e, 2 },
   { s_cr118 + 6, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr118 + 7, NULL       , ".T.",                3, 1, 0xc02d, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm119[ 7 ] = {
   { s_cm119 + 1, NULL       , "SAVE",               4, 1, 0xc015, 0 },
   { s_cm119 + 2, NULL       , "HBV",                3, 1, 0xc015, 0 },
   { s_cm119 + 3, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { s_cm119 + 4, NULL       , "f",                  1, 0, 0xe005, 1 },
   { s_cm119 + 5, NULL       , "ALL",                3, 1, 0xc015, 0 },
   { s_cm119 + 6, NULL       , "LIKE",               4, 1, 0xc015, 0 },
   { NULL       , NULL       , "p",                  1, 0, 0xe001, 2 }
};
static HB_PP_TOKEN s_cr119[ 8 ] = {
   { s_cr119 + 1, NULL       , "hb_mvSave",          9, 1, 0xc015, 0 },
   { s_cr119 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr119 + 3, NULL       , "f",                  1, 1, 0xc00e, 1 },
   { s_cr119 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr119 + 5, NULL       , "p",                  1, 1, 0xc00e, 2 },
   { s_cr119 + 6, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr119 + 7, NULL       , ".T.",                3, 1, 0xc02d, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm120[ 8 ] = {
   { s_cm120 + 1, NULL       , "RESTORE",            7, 1, 0xc015, 0 },
   { s_cm120 + 2, NULL       , "HBV",                3, 1, 0xc015, 0 },
   { s_cm120 + 5, s_cm120 + 3, "[",                  1, 1, 0xe007, 0 },
   { s_cm120 + 4, NULL       , "FROM",               4, 0, 0xc015, 0 },
   { NULL       , NULL       , "f",                  1, 0, 0xe005, 1 },
   { NULL       , s_cm120 + 6, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm120 + 7, "a",                  1, 0, 0xc003, 2 },
   { NULL       , NULL       , "ADDITIVE",           8, 0, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr120[ 6 ] = {
   { s_cr120 + 1, NULL       , "hb_mvRestore",      12, 1, 0xc015, 0 },
   { s_cr120 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr120 + 3, NULL       , "f",                  1, 1, 0xc00e, 1 },
   { s_cr120 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr120 + 5, NULL       , "a",                  1, 1, 0xc010, 2 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm121[ 6 ] = {
   { s_cm121 + 1, NULL       , "SAVE",               4, 1, 0xc015, 0 },
   { s_cm121 + 4, s_cm121 + 2, "[",                  1, 1, 0xe007, 0 },
   { s_cm121 + 3, NULL       , "TO",                 2, 0, 0xc015, 0 },
   { NULL       , NULL       , "f",                  1, 0, 0xe005, 1 },
   { NULL       , s_cm121 + 5, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "ALL",                3, 0, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr121[ 8 ] = {
   { s_cr121 + 1, NULL       , "__mvSave",           8, 1, 0xc015, 0 },
   { s_cr121 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr121 + 3, NULL       , "f",                  1, 1, 0xc00e, 1 },
   { s_cr121 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr121 + 5, NULL       , "*",                  1, 1, 0xc029, 0 },
   { s_cr121 + 6, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr121 + 7, NULL       , ".T.",                3, 1, 0xc02d, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm122[ 6 ] = {
   { s_cm122 + 1, NULL       , "SAVE",               4, 1, 0xc015, 0 },
   { s_cm122 + 2, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { s_cm122 + 3, NULL       , "f",                  1, 0, 0xe005, 1 },
   { s_cm122 + 4, NULL       , "ALL",                3, 1, 0xc015, 0 },
   { s_cm122 + 5, NULL       , "EXCEPT",             6, 1, 0xc015, 0 },
   { NULL       , NULL       , "p",                  1, 0, 0xe001, 2 }
};
static HB_PP_TOKEN s_cr122[ 8 ] = {
   { s_cr122 + 1, NULL       , "__mvSave",           8, 1, 0xc015, 0 },
   { s_cr122 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr122 + 3, NULL       , "f",                  1, 1, 0xc00e, 1 },
   { s_cr122 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr122 + 5, NULL       , "p",                  1, 1, 0xc00e, 2 },
   { s_cr122 + 6, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr122 + 7, NULL       , ".F.",                3, 1, 0xc02d, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm123[ 6 ] = {
   { s_cm123 + 1, NULL       , "SAVE",               4, 1, 0xc015, 0 },
   { s_cm123 + 2, NULL       , "ALL",                3, 1, 0xc015, 0 },
   { s_cm123 + 3, NULL       , "EXCEPT",             6, 1, 0xc015, 0 },
   { s_cm123 + 4, NULL       , "p",                  1, 0, 0xe001, 2 },
   { s_cm123 + 5, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { NULL       , NULL       , "f",                  1, 0, 0xe005, 1 }
};
static HB_PP_TOKEN s_cr123[ 8 ] = {
   { s_cr123 + 1, NULL       , "__mvSave",           8, 1, 0xc015, 0 },
   { s_cr123 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr123 + 3, NULL       , "f",                  1, 1, 0xc00e, 1 },
   { s_cr123 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr123 + 5, NULL       , "p",                  1, 1, 0xc00e, 2 },
   { s_cr123 + 6, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr123 + 7, NULL       , ".F.",                3, 1, 0xc02d, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm124[ 6 ] = {
   { s_cm124 + 1, NULL       , "SAVE",               4, 1, 0xc015, 0 },
   { s_cm124 + 2, NULL       , "ALL",                3, 1, 0xc015, 0 },
   { s_cm124 + 3, NULL       , "LIKE",               4, 1, 0xc015, 0 },
   { s_cm124 + 4, NULL       , "p",                  1, 0, 0xe001, 2 },
   { s_cm124 + 5, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { NULL       , NULL       , "f",                  1, 0, 0xe005, 1 }
};
static HB_PP_TOKEN s_cr124[ 8 ] = {
   { s_cr124 + 1, NULL       , "__mvSave",           8, 1, 0xc015, 0 },
   { s_cr124 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr124 + 3, NULL       , "f",                  1, 1, 0xc00e, 1 },
   { s_cr124 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr124 + 5, NULL       , "p",                  1, 1, 0xc00e, 2 },
   { s_cr124 + 6, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr124 + 7, NULL       , ".T.",                3, 1, 0xc02d, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm125[ 6 ] = {
   { s_cm125 + 1, NULL       , "SAVE",               4, 1, 0xc015, 0 },
   { s_cm125 + 2, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { s_cm125 + 3, NULL       , "f",                  1, 0, 0xe005, 1 },
   { s_cm125 + 4, NULL       , "ALL",                3, 1, 0xc015, 0 },
   { s_cm125 + 5, NULL       , "LIKE",               4, 1, 0xc015, 0 },
   { NULL       , NULL       , "p",                  1, 0, 0xe001, 2 }
};
static HB_PP_TOKEN s_cr125[ 8 ] = {
   { s_cr125 + 1, NULL       , "__mvSave",           8, 1, 0xc015, 0 },
   { s_cr125 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr125 + 3, NULL       , "f",                  1, 1, 0xc00e, 1 },
   { s_cr125 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr125 + 5, NULL       , "p",                  1, 1, 0xc00e, 2 },
   { s_cr125 + 6, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr125 + 7, NULL       , ".T.",                3, 1, 0xc02d, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm126[ 7 ] = {
   { s_cm126 + 1, NULL       , "RESTORE",            7, 1, 0xc015, 0 },
   { s_cm126 + 4, s_cm126 + 2, "[",                  1, 1, 0xe007, 0 },
   { s_cm126 + 3, NULL       , "FROM",               4, 0, 0xc015, 0 },
   { NULL       , NULL       , "f",                  1, 0, 0xe005, 1 },
   { NULL       , s_cm126 + 5, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm126 + 6, "a",                  1, 0, 0xc003, 2 },
   { NULL       , NULL       , "ADDITIVE",           8, 0, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr126[ 6 ] = {
   { s_cr126 + 1, NULL       , "__mvRestore",       11, 1, 0xc015, 0 },
   { s_cr126 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr126 + 3, NULL       , "f",                  1, 1, 0xc00e, 1 },
   { s_cr126 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr126 + 5, NULL       , "a",                  1, 1, 0xc010, 2 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm127[ 4 ] = {
   { s_cm127 + 1, NULL       , "RELEASE",            7, 1, 0xc015, 0 },
   { s_cm127 + 2, NULL       , "ALL",                3, 1, 0xc015, 0 },
   { s_cm127 + 3, NULL       , "EXCEPT",             6, 1, 0xc015, 0 },
   { NULL       , NULL       , "p",                  1, 0, 0xe001, 1 }
};
static HB_PP_TOKEN s_cr127[ 6 ] = {
   { s_cr127 + 1, NULL       , "__mvRelease",       11, 1, 0xc015, 0 },
   { s_cr127 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr127 + 3, NULL       , "p",                  1, 1, 0xc00c, 1 },
   { s_cr127 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr127 + 5, NULL       , ".F.",                3, 1, 0xc02d, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm128[ 4 ] = {
   { s_cm128 + 1, NULL       , "RELEASE",            7, 1, 0xc015, 0 },
   { s_cm128 + 2, NULL       , "ALL",                3, 1, 0xc015, 0 },
   { s_cm128 + 3, NULL       , "LIKE",               4, 1, 0xc015, 0 },
   { NULL       , NULL       , "p",                  1, 0, 0xe001, 1 }
};
static HB_PP_TOKEN s_cr128[ 6 ] = {
   { s_cr128 + 1, NULL       , "__mvRelease",       11, 1, 0xc015, 0 },
   { s_cr128 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr128 + 3, NULL       , "p",                  1, 1, 0xc00c, 1 },
   { s_cr128 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr128 + 5, NULL       , ".T.",                3, 1, 0xc02d, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm129[ 2 ] = {
   { s_cm129 + 1, NULL       , "RELEASE",            7, 1, 0xc015, 0 },
   { NULL       , NULL       , "ALL",                3, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr129[ 6 ] = {
   { s_cr129 + 1, NULL       , "__mvRelease",       11, 1, 0xc015, 0 },
   { s_cr129 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr129 + 3, NULL       , "*",                  1, 1, 0xc029, 0 },
   { s_cr129 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr129 + 5, NULL       , ".T.",                3, 1, 0xc02d, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm130[ 2 ] = {
   { s_cm130 + 1, NULL       , "RELEASE",            7, 1, 0xc015, 0 },
   { NULL       , NULL       , "v",                  1, 0, 0xe002, 1 }
};
static HB_PP_TOKEN s_cr130[ 4 ] = {
   { s_cr130 + 1, NULL       , "__mvXRelease",      12, 1, 0xc015, 0 },
   { s_cr130 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr130 + 3, NULL       , "v",                  1, 1, 0xc00d, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm131[ 2 ] = {
   { s_cm131 + 1, NULL       , "CLEAR",              5, 1, 0xc015, 0 },
   { NULL       , NULL       , "MEMORY",             6, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr131[ 3 ] = {
   { s_cr131 + 1, NULL       , "__mvClear",          9, 1, 0xc015, 0 },
   { s_cr131 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm132[ 2 ] = {
   { s_cm132 + 1, NULL       , "CLEAR",              5, 1, 0xc015, 0 },
   { NULL       , NULL       , "TYPEAHEAD",          9, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr132[ 3 ] = {
   { s_cr132 + 1, NULL       , "__Keyboard",        10, 1, 0xc015, 0 },
   { s_cr132 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm133[ 2 ] = {
   { s_cm133 + 1, NULL       , "KEYBOARD",           8, 1, 0xc015, 0 },
   { NULL       , NULL       , "x",                  1, 0, 0xe001, 1 }
};
static HB_PP_TOKEN s_cr133[ 4 ] = {
   { s_cr133 + 1, NULL       , "__Keyboard",        10, 1, 0xc015, 0 },
   { s_cr133 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr133 + 3, NULL       , "x",                  1, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm134[ 5 ] = {
   { s_cm134 + 1, NULL       , "INPUT",              5, 1, 0xc015, 0 },
   { s_cm134 + 3, s_cm134 + 2, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "msg",                3, 0, 0xe001, 1 },
   { s_cm134 + 4, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { NULL       , NULL       , "v",                  1, 0, 0xe001, 2 }
};
static HB_PP_TOKEN s_cr134[ 22 ] = {
   { s_cr134 + 1, NULL       , "if",                 2, 1, 0xc015, 0 },
   { s_cr134 + 2, NULL       , "(",                  1, 1, 0xc032, 0 },
   { s_cr134 + 3, NULL       , "!",                  1, 1, 0xc045, 0 },
   { s_cr134 + 4, NULL       , "Empty",              5, 1, 0xc015, 0 },
   { s_cr134 + 5, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr134 + 6, NULL       , "__Accept",           8, 1, 0xc015, 0 },
   { s_cr134 + 7, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr134 + 8, NULL       , "msg",                3, 1, 0xc00b, 1 },
   { s_cr134 + 9, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr134 +10, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr134 +11, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr134 +12, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr134 +13, NULL       , "v",                  1, 1, 0xc00b, 2 },
   { s_cr134 +14, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr134 +15, NULL       , "&",                  1, 1, 0xc039, 0 },
   { s_cr134 +16, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr134 +17, NULL       , "__AcceptStr",       11, 1, 0xc015, 0 },
   { s_cr134 +18, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr134 +19, NULL       , ")",                  1, 0, 0xc033, 0 },
   { s_cr134 +20, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr134 +21, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { NULL       , NULL       , "end",                3, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cm135[ 5 ] = {
   { s_cm135 + 1, NULL       , "ACCEPT",             6, 1, 0xc015, 0 },
   { s_cm135 + 3, s_cm135 + 2, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "msg",                3, 0, 0xe001, 2 },
   { s_cm135 + 4, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { NULL       , NULL       , "v",                  1, 0, 0xe001, 1 }
};
static HB_PP_TOKEN s_cr135[ 6 ] = {
   { s_cr135 + 1, NULL       , "v",                  1, 1, 0xc00b, 1 },
   { s_cr135 + 2, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr135 + 3, NULL       , "__Accept",           8, 1, 0xc015, 0 },
   { s_cr135 + 4, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr135 + 5, NULL       , "msg",                3, 1, 0xc00b, 2 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm136[ 5 ] = {
   { s_cm136 + 1, NULL       , "WAIT",               4, 1, 0xc015, 0 },
   { s_cm136 + 3, s_cm136 + 2, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "msg",                3, 0, 0xe001, 2 },
   { s_cm136 + 4, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { NULL       , NULL       , "v",                  1, 0, 0xe001, 1 }
};
static HB_PP_TOKEN s_cr136[ 6 ] = {
   { s_cr136 + 1, NULL       , "v",                  1, 1, 0xc00b, 1 },
   { s_cr136 + 2, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr136 + 3, NULL       , "__Wait",             6, 1, 0xc015, 0 },
   { s_cr136 + 4, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr136 + 5, NULL       , "msg",                3, 1, 0xc00b, 2 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm137[ 3 ] = {
   { s_cm137 + 1, NULL       , "WAIT",               4, 1, 0xc015, 0 },
   { NULL       , s_cm137 + 2, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "msg",                3, 0, 0xe001, 1 }
};
static HB_PP_TOKEN s_cr137[ 4 ] = {
   { s_cr137 + 1, NULL       , "__Wait",             6, 1, 0xc015, 0 },
   { s_cr137 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr137 + 3, NULL       , "msg",                3, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm138[ 3 ] = {
   { s_cm138 + 1, NULL       , "MENU",               4, 1, 0xc015, 0 },
   { s_cm138 + 2, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { NULL       , NULL       , "v",                  1, 0, 0xe001, 1 }
};
static HB_PP_TOKEN s_cr138[ 26 ] = {
   { s_cr138 + 1, NULL       , "v",                  1, 1, 0xc00b, 1 },
   { s_cr138 + 2, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr138 + 3, NULL       , "__MenuTo",           8, 1, 0xc015, 0 },
   { s_cr138 + 4, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr138 + 5, NULL       , "{",                  1, 1, 0xc036, 0 },
   { s_cr138 + 6, NULL       , "|",                  1, 0, 0xc01b, 0 },
   { s_cr138 + 7, NULL       , "_1",                 2, 1, 0xc015, 0 },
   { s_cr138 + 8, NULL       , "|",                  1, 1, 0xc01b, 0 },
   { s_cr138 + 9, NULL       , "iif",                3, 1, 0xc015, 0 },
   { s_cr138 +10, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr138 +11, NULL       , "PCount",             6, 1, 0xc015, 0 },
   { s_cr138 +12, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr138 +13, NULL       , ")",                  1, 0, 0xc033, 0 },
   { s_cr138 +14, NULL       , "==",                 2, 1, 0xc048, 0 },
   { s_cr138 +15, NULL       , "0",                  1, 1, 0xc02a, 0 },
   { s_cr138 +16, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr138 +17, NULL       , "v",                  1, 1, 0xc00b, 1 },
   { s_cr138 +18, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr138 +19, NULL       , "v",                  1, 1, 0xc00b, 1 },
   { s_cr138 +20, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr138 +21, NULL       , "_1",                 2, 1, 0xc015, 0 },
   { s_cr138 +22, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr138 +23, NULL       , "}",                  1, 1, 0xc037, 0 },
   { s_cr138 +24, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr138 +25, NULL       , "v",                  1, 1, 0xc00c, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm139[ 9 ] = {
   { s_cm139 + 1, NULL       , "@",                  1, 1, 0xc038, 0 },
   { s_cm139 + 2, NULL       , "row",                3, 0, 0xe001, 1 },
   { s_cm139 + 3, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm139 + 4, NULL       , "col",                3, 0, 0xe001, 2 },
   { s_cm139 + 5, NULL       , "PROMPT",             6, 1, 0xc015, 0 },
   { s_cm139 + 6, NULL       , "prompt",             6, 0, 0xe001, 3 },
   { NULL       , s_cm139 + 7, "[",                  1, 1, 0xe007, 0 },
   { s_cm139 + 8, NULL       , "MESSAGE",            7, 0, 0xc015, 0 },
   { NULL       , NULL       , "msg",                3, 0, 0xe001, 4 }
};
static HB_PP_TOKEN s_cr139[ 10 ] = {
   { s_cr139 + 1, NULL       , "__AtPrompt",        10, 1, 0xc015, 0 },
   { s_cr139 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr139 + 3, NULL       , "row",                3, 1, 0xc00b, 1 },
   { s_cr139 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr139 + 5, NULL       , "col",                3, 1, 0xc00b, 2 },
   { s_cr139 + 6, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr139 + 7, NULL       , "prompt",             6, 1, 0xc00b, 3 },
   { s_cr139 + 8, NULL       , ",",                  1, 1, 0xc01d, 0 },
   { s_cr139 + 9, NULL       , "msg",                3, 1, 0xc00b, 4 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm140[ 9 ] = {
   { s_cm140 + 1, NULL       , "@",                  1, 1, 0xc038, 0 },
   { s_cm140 + 2, NULL       , "row",                3, 0, 0xe001, 1 },
   { s_cm140 + 3, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm140 + 4, NULL       , "col",                3, 0, 0xe001, 2 },
   { s_cm140 + 5, NULL       , "SAY",                3, 1, 0xc015, 0 },
   { s_cm140 + 6, NULL       , "exp",                3, 0, 0xe001, 3 },
   { NULL       , s_cm140 + 7, "[",                  1, 1, 0xe007, 0 },
   { s_cm140 + 8, NULL       , "COLOR",              5, 0, 0xc015, 0 },
   { NULL       , NULL       , "clr",                3, 0, 0xe001, 4 }
};
static HB_PP_TOKEN s_cr140[ 14 ] = {
   { s_cr140 + 1, NULL       , "DevPos",             6, 1, 0xc015, 0 },
   { s_cr140 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr140 + 3, NULL       , "row",                3, 1, 0xc00b, 1 },
   { s_cr140 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr140 + 5, NULL       , "col",                3, 1, 0xc00b, 2 },
   { s_cr140 + 6, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr140 + 7, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr140 + 8, NULL       , "DevOut",             6, 1, 0xc015, 0 },
   { s_cr140 + 9, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr140 +10, NULL       , "exp",                3, 1, 0xc00b, 3 },
   { s_cr140 +13, s_cr140 +11, "[",                  1, 1, 0xc012, 0 },
   { s_cr140 +12, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { NULL       , NULL       , "clr",                3, 1, 0xc00b, 4 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm141[ 12 ] = {
   { s_cm141 + 1, NULL       , "@",                  1, 1, 0xc038, 0 },
   { s_cm141 + 2, NULL       , "row",                3, 0, 0xe001, 1 },
   { s_cm141 + 3, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm141 + 4, NULL       , "col",                3, 0, 0xe001, 2 },
   { s_cm141 + 5, NULL       , "SAY",                3, 1, 0xc015, 0 },
   { s_cm141 + 6, NULL       , "exp",                3, 0, 0xe001, 3 },
   { s_cm141 + 9, s_cm141 + 7, "[",                  1, 1, 0xe007, 0 },
   { s_cm141 + 8, NULL       , "PICTURE",            7, 0, 0xc015, 0 },
   { NULL       , NULL       , "pic",                3, 0, 0xe001, 4 },
   { NULL       , s_cm141 +10, "[",                  1, 1, 0xe007, 0 },
   { s_cm141 +11, NULL       , "COLOR",              5, 0, 0xc015, 0 },
   { NULL       , NULL       , "clr",                3, 0, 0xe001, 5 }
};
static HB_PP_TOKEN s_cr141[ 16 ] = {
   { s_cr141 + 1, NULL       , "DevPos",             6, 1, 0xc015, 0 },
   { s_cr141 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr141 + 3, NULL       , "row",                3, 1, 0xc00b, 1 },
   { s_cr141 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr141 + 5, NULL       , "col",                3, 1, 0xc00b, 2 },
   { s_cr141 + 6, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr141 + 7, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr141 + 8, NULL       , "DevOutPict",        10, 1, 0xc015, 0 },
   { s_cr141 + 9, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr141 +10, NULL       , "exp",                3, 1, 0xc00b, 3 },
   { s_cr141 +11, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr141 +12, NULL       , "pic",                3, 1, 0xc00b, 4 },
   { s_cr141 +15, s_cr141 +13, "[",                  1, 1, 0xc012, 0 },
   { s_cr141 +14, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { NULL       , NULL       , "clr",                3, 1, 0xc00b, 5 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm142[ 11 ] = {
   { s_cm142 + 1, NULL       , "@",                  1, 1, 0xc038, 0 },
   { s_cm142 + 2, NULL       , "top",                3, 0, 0xe001, 1 },
   { s_cm142 + 3, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm142 + 4, NULL       , "left",               4, 0, 0xe001, 2 },
   { s_cm142 + 5, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { s_cm142 + 6, NULL       , "bottom",             6, 0, 0xe001, 3 },
   { s_cm142 + 7, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm142 + 8, NULL       , "right",              5, 0, 0xe001, 4 },
   { NULL       , s_cm142 + 9, "[",                  1, 1, 0xe007, 0 },
   { s_cm142 +10, NULL       , "COLOR",              5, 0, 0xc015, 0 },
   { NULL       , NULL       , "clr",                3, 0, 0xe001, 5 }
};
static HB_PP_TOKEN s_cr142[ 15 ] = {
   { s_cr142 + 1, NULL       , "DispBox",            7, 1, 0xc015, 0 },
   { s_cr142 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr142 + 3, NULL       , "top",                3, 1, 0xc00b, 1 },
   { s_cr142 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr142 + 5, NULL       , "left",               4, 1, 0xc00b, 2 },
   { s_cr142 + 6, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr142 + 7, NULL       , "bottom",             6, 1, 0xc00b, 3 },
   { s_cr142 + 8, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr142 + 9, NULL       , "right",              5, 1, 0xc00b, 4 },
   { s_cr142 +10, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr142 +11, NULL       , "1",                  1, 1, 0xc02a, 0 },
   { s_cr142 +14, s_cr142 +12, "[",                  1, 1, 0xc012, 0 },
   { s_cr142 +13, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { NULL       , NULL       , "clr",                3, 1, 0xc00b, 5 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm143[ 13 ] = {
   { s_cm143 + 1, NULL       , "@",                  1, 1, 0xc038, 0 },
   { s_cm143 + 2, NULL       , "top",                3, 0, 0xe001, 1 },
   { s_cm143 + 3, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm143 + 4, NULL       , "left",               4, 0, 0xe001, 2 },
   { s_cm143 + 5, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { s_cm143 + 6, NULL       , "bottom",             6, 0, 0xe001, 3 },
   { s_cm143 + 7, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm143 + 8, NULL       , "right",              5, 0, 0xe001, 4 },
   { s_cm143 +10, s_cm143 + 9, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "DOUBLE",             6, 0, 0xc015, 0 },
   { NULL       , s_cm143 +11, "[",                  1, 1, 0xe007, 0 },
   { s_cm143 +12, NULL       , "COLOR",              5, 0, 0xc015, 0 },
   { NULL       , NULL       , "clr",                3, 0, 0xe001, 5 }
};
static HB_PP_TOKEN s_cr143[ 15 ] = {
   { s_cr143 + 1, NULL       , "DispBox",            7, 1, 0xc015, 0 },
   { s_cr143 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr143 + 3, NULL       , "top",                3, 1, 0xc00b, 1 },
   { s_cr143 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr143 + 5, NULL       , "left",               4, 1, 0xc00b, 2 },
   { s_cr143 + 6, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr143 + 7, NULL       , "bottom",             6, 1, 0xc00b, 3 },
   { s_cr143 + 8, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr143 + 9, NULL       , "right",              5, 1, 0xc00b, 4 },
   { s_cr143 +10, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr143 +11, NULL       , "2",                  1, 1, 0xc02a, 0 },
   { s_cr143 +14, s_cr143 +12, "[",                  1, 1, 0xc012, 0 },
   { s_cr143 +13, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { NULL       , NULL       , "clr",                3, 1, 0xc00b, 5 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm144[ 13 ] = {
   { s_cm144 + 1, NULL       , "@",                  1, 1, 0xc038, 0 },
   { s_cm144 + 2, NULL       , "top",                3, 0, 0xe001, 1 },
   { s_cm144 + 3, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm144 + 4, NULL       , "left",               4, 0, 0xe001, 2 },
   { s_cm144 + 5, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm144 + 6, NULL       , "bottom",             6, 0, 0xe001, 3 },
   { s_cm144 + 7, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm144 + 8, NULL       , "right",              5, 0, 0xe001, 4 },
   { s_cm144 + 9, NULL       , "BOX",                3, 1, 0xc015, 0 },
   { s_cm144 +10, NULL       , "string",             6, 0, 0xe001, 5 },
   { NULL       , s_cm144 +11, "[",                  1, 1, 0xe007, 0 },
   { s_cm144 +12, NULL       , "COLOR",              5, 0, 0xc015, 0 },
   { NULL       , NULL       , "clr",                3, 0, 0xe001, 6 }
};
static HB_PP_TOKEN s_cr144[ 15 ] = {
   { s_cr144 + 1, NULL       , "DispBox",            7, 1, 0xc015, 0 },
   { s_cr144 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr144 + 3, NULL       , "top",                3, 1, 0xc00b, 1 },
   { s_cr144 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr144 + 5, NULL       , "left",               4, 1, 0xc00b, 2 },
   { s_cr144 + 6, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr144 + 7, NULL       , "bottom",             6, 1, 0xc00b, 3 },
   { s_cr144 + 8, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr144 + 9, NULL       , "right",              5, 1, 0xc00b, 4 },
   { s_cr144 +10, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr144 +11, NULL       , "string",             6, 1, 0xc00b, 5 },
   { s_cr144 +14, s_cr144 +12, "[",                  1, 1, 0xc012, 0 },
   { s_cr144 +13, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { NULL       , NULL       , "clr",                3, 1, 0xc00b, 6 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm145[ 9 ] = {
   { s_cm145 + 1, NULL       , "@",                  1, 1, 0xc038, 0 },
   { s_cm145 + 2, NULL       , "top",                3, 0, 0xe001, 1 },
   { s_cm145 + 3, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm145 + 4, NULL       , "left",               4, 0, 0xe001, 2 },
   { s_cm145 + 5, NULL       , "CLEAR",              5, 1, 0xc015, 0 },
   { s_cm145 + 6, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { s_cm145 + 7, NULL       , "bottom",             6, 0, 0xe001, 3 },
   { s_cm145 + 8, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { NULL       , NULL       , "right",              5, 0, 0xe001, 4 }
};
static HB_PP_TOKEN s_cr145[ 17 ] = {
   { s_cr145 + 1, NULL       , "Scroll",             6, 1, 0xc015, 0 },
   { s_cr145 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr145 + 3, NULL       , "top",                3, 1, 0xc00b, 1 },
   { s_cr145 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr145 + 5, NULL       , "left",               4, 1, 0xc00b, 2 },
   { s_cr145 + 6, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr145 + 7, NULL       , "bottom",             6, 1, 0xc00b, 3 },
   { s_cr145 + 8, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr145 + 9, NULL       , "right",              5, 1, 0xc00b, 4 },
   { s_cr145 +10, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr145 +11, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr145 +12, NULL       , "SetPos",             6, 1, 0xc015, 0 },
   { s_cr145 +13, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr145 +14, NULL       , "top",                3, 1, 0xc00b, 1 },
   { s_cr145 +15, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr145 +16, NULL       , "left",               4, 1, 0xc00b, 2 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm146[ 5 ] = {
   { s_cm146 + 1, NULL       , "@",                  1, 1, 0xc038, 0 },
   { s_cm146 + 2, NULL       , "top",                3, 0, 0xe001, 1 },
   { s_cm146 + 3, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm146 + 4, NULL       , "left",               4, 0, 0xe001, 2 },
   { NULL       , NULL       , "CLEAR",              5, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr146[ 13 ] = {
   { s_cr146 + 1, NULL       , "Scroll",             6, 1, 0xc015, 0 },
   { s_cr146 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr146 + 3, NULL       , "top",                3, 1, 0xc00b, 1 },
   { s_cr146 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr146 + 5, NULL       , "left",               4, 1, 0xc00b, 2 },
   { s_cr146 + 6, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr146 + 7, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr146 + 8, NULL       , "SetPos",             6, 1, 0xc015, 0 },
   { s_cr146 + 9, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr146 +10, NULL       , "top",                3, 1, 0xc00b, 1 },
   { s_cr146 +11, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr146 +12, NULL       , "left",               4, 1, 0xc00b, 2 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm147[ 4 ] = {
   { s_cm147 + 1, NULL       , "@",                  1, 1, 0xc038, 0 },
   { s_cm147 + 2, NULL       , "row",                3, 0, 0xe001, 1 },
   { s_cm147 + 3, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { NULL       , NULL       , "col",                3, 0, 0xe001, 2 }
};
static HB_PP_TOKEN s_cr147[ 15 ] = {
   { s_cr147 + 1, NULL       , "Scroll",             6, 1, 0xc015, 0 },
   { s_cr147 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr147 + 3, NULL       , "row",                3, 1, 0xc00b, 1 },
   { s_cr147 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr147 + 5, NULL       , "col",                3, 1, 0xc00b, 2 },
   { s_cr147 + 6, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr147 + 7, NULL       , "row",                3, 1, 0xc00b, 1 },
   { s_cr147 + 8, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr147 + 9, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr147 +10, NULL       , "SetPos",             6, 1, 0xc015, 0 },
   { s_cr147 +11, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr147 +12, NULL       , "row",                3, 1, 0xc00b, 1 },
   { s_cr147 +13, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr147 +14, NULL       , "col",                3, 1, 0xc00b, 2 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm148[ 4 ] = {
   { s_cm148 + 1, NULL       , "RESTORE",            7, 1, 0xc015, 0 },
   { s_cm148 + 2, NULL       , "SCREEN",             6, 1, 0xc015, 0 },
   { s_cm148 + 3, NULL       , "FROM",               4, 1, 0xc015, 0 },
   { NULL       , NULL       , "v",                  1, 0, 0xe001, 1 }
};
static HB_PP_TOKEN s_cr148[ 16 ] = {
   { s_cr148 + 1, NULL       , "RestScreen",        10, 1, 0xc015, 0 },
   { s_cr148 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr148 + 3, NULL       , "0",                  1, 1, 0xc02a, 0 },
   { s_cr148 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr148 + 5, NULL       , "0",                  1, 1, 0xc02a, 0 },
   { s_cr148 + 6, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr148 + 7, NULL       , "MaxRow",             6, 1, 0xc015, 0 },
   { s_cr148 + 8, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr148 + 9, NULL       , ")",                  1, 0, 0xc033, 0 },
   { s_cr148 +10, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr148 +11, NULL       , "MaxCol",             6, 1, 0xc015, 0 },
   { s_cr148 +12, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr148 +13, NULL       , ")",                  1, 0, 0xc033, 0 },
   { s_cr148 +14, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr148 +15, NULL       , "v",                  1, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm149[ 4 ] = {
   { s_cm149 + 1, NULL       , "SAVE",               4, 1, 0xc015, 0 },
   { s_cm149 + 2, NULL       , "SCREEN",             6, 1, 0xc015, 0 },
   { s_cm149 + 3, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { NULL       , NULL       , "v",                  1, 0, 0xe001, 1 }
};
static HB_PP_TOKEN s_cr149[ 16 ] = {
   { s_cr149 + 1, NULL       , "v",                  1, 1, 0xc00b, 1 },
   { s_cr149 + 2, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr149 + 3, NULL       , "SaveScreen",        10, 1, 0xc015, 0 },
   { s_cr149 + 4, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr149 + 5, NULL       , "0",                  1, 1, 0xc02a, 0 },
   { s_cr149 + 6, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr149 + 7, NULL       , "0",                  1, 1, 0xc02a, 0 },
   { s_cr149 + 8, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr149 + 9, NULL       , "MaxRow",             6, 1, 0xc015, 0 },
   { s_cr149 +10, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr149 +11, NULL       , ")",                  1, 0, 0xc033, 0 },
   { s_cr149 +12, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr149 +13, NULL       , "MaxCol",             6, 1, 0xc015, 0 },
   { s_cr149 +14, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr149 +15, NULL       , ")",                  1, 0, 0xc033, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm150[ 2 ] = {
   { s_cm150 + 1, NULL       , "RESTORE",            7, 1, 0xc015, 0 },
   { NULL       , NULL       , "SCREEN",             6, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr150[ 3 ] = {
   { s_cr150 + 1, NULL       , "__XRestScreen",     13, 1, 0xc015, 0 },
   { s_cr150 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm151[ 2 ] = {
   { s_cm151 + 1, NULL       , "SAVE",               4, 1, 0xc015, 0 },
   { NULL       , NULL       , "SCREEN",             6, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr151[ 3 ] = {
   { s_cr151 + 1, NULL       , "__XSaveScreen",     13, 1, 0xc015, 0 },
   { s_cr151 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm152[ 2 ] = {
   { s_cm152 + 1, NULL       , "CLEAR",              5, 1, 0xc015, 0 },
   { NULL       , NULL       , "SCREEN",             6, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr152[ 1 ] = {
   { NULL       , NULL       , "CLS",                3, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cm153[ 1 ] = {
   { NULL       , NULL       , "CLS",                3, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr153[ 10 ] = {
   { s_cr153 + 1, NULL       , "Scroll",             6, 1, 0xc015, 0 },
   { s_cr153 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr153 + 3, NULL       , ")",                  1, 0, 0xc033, 0 },
   { s_cr153 + 4, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr153 + 5, NULL       , "SetPos",             6, 1, 0xc015, 0 },
   { s_cr153 + 6, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr153 + 7, NULL       , "0",                  1, 1, 0xc02a, 0 },
   { s_cr153 + 8, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr153 + 9, NULL       , "0",                  1, 1, 0xc02a, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm154[ 2 ] = {
   { s_cm154 + 1, NULL       , "TEXTBLOCK",          9, 1, 0xc015, 0 },
   { NULL       , NULL       , "cText",              5, 0, 0xe004, 0 }
};
static HB_PP_TOKEN s_cm155[ 3 ] = {
   { s_cm155 + 1, NULL       , "TEXT",               4, 1, 0xc015, 0 },
   { s_cm155 + 2, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { NULL       , NULL       , "PRINTER",            7, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr155[ 9 ] = {
   { s_cr155 + 1, NULL       , "__TextSave",        10, 1, 0xc015, 0 },
   { s_cr155 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr155 + 3, NULL       , "PRINTER",            7, 1, 0xc029, 0 },
   { s_cr155 + 4, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr155 + 5, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr155 + 6, NULL       , "text",               4, 1, 0xc015, 0 },
   { s_cr155 + 7, NULL       , "QOut",               4, 1, 0xc015, 0 },
   { s_cr155 + 8, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { NULL       , NULL       , "__TextRestore",     13, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cm156[ 4 ] = {
   { s_cm156 + 1, NULL       , "TEXT",               4, 1, 0xc015, 0 },
   { s_cm156 + 2, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { s_cm156 + 3, NULL       , "FILE",               4, 1, 0xc015, 0 },
   { NULL       , NULL       , "f",                  1, 0, 0xe005, 1 }
};
static HB_PP_TOKEN s_cr156[ 9 ] = {
   { s_cr156 + 1, NULL       , "__TextSave",        10, 1, 0xc015, 0 },
   { s_cr156 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr156 + 3, NULL       , "f",                  1, 1, 0xc00e, 1 },
   { s_cr156 + 4, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr156 + 5, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr156 + 6, NULL       , "text",               4, 1, 0xc015, 0 },
   { s_cr156 + 7, NULL       , "QOut",               4, 1, 0xc015, 0 },
   { s_cr156 + 8, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { NULL       , NULL       , "__TextRestore",     13, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cm157[ 1 ] = {
   { NULL       , NULL       , "TEXT",               4, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr157[ 4 ] = {
   { s_cr157 + 1, NULL       , "text",               4, 1, 0xc015, 0 },
   { s_cr157 + 2, NULL       , "QOut",               4, 1, 0xc015, 0 },
   { s_cr157 + 3, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { NULL       , NULL       , "QQOut",              5, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cm158[ 1 ] = {
   { NULL       , NULL       , "EJECT",              5, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr158[ 3 ] = {
   { s_cr158 + 1, NULL       , "__Eject",            7, 1, 0xc015, 0 },
   { s_cr158 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm159[ 4 ] = {
   { s_cm159 + 1, NULL       , "?",                  1, 1, 0xc019, 0 },
   { s_cm159 + 2, NULL       , "?",                  1, 0, 0xc019, 0 },
   { NULL       , s_cm159 + 3, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "explist",            7, 0, 0xe002, 1 }
};
static HB_PP_TOKEN s_cr159[ 4 ] = {
   { s_cr159 + 1, NULL       , "QQOut",              5, 1, 0xc015, 0 },
   { s_cr159 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr159 + 3, NULL       , "explist",            7, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm160[ 3 ] = {
   { s_cm160 + 1, NULL       , "?",                  1, 1, 0xc019, 0 },
   { NULL       , s_cm160 + 2, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "explist",            7, 0, 0xe002, 1 }
};
static HB_PP_TOKEN s_cr160[ 4 ] = {
   { s_cr160 + 1, NULL       , "QOut",               4, 1, 0xc015, 0 },
   { s_cr160 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr160 + 3, NULL       , "explist",            7, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm161[ 5 ] = {
   { s_cm161 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm161 + 2, NULL       , "AUTOPEN",            7, 1, 0xc015, 0 },
   { s_cm161 + 3, NULL       , "(",                  1, 1, 0xc032, 0 },
   { s_cm161 + 4, NULL       , "x",                  1, 0, 0xe001, 1 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cr161[ 6 ] = {
   { s_cr161 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr161 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr161 + 3, NULL       , "_SET_AUTOPEN",      12, 1, 0xc015, 0 },
   { s_cr161 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr161 + 5, NULL       , "x",                  1, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm162[ 8 ] = {
   { s_cm162 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm162 + 2, NULL       , "AUTOPEN",            7, 1, 0xc015, 0 },
   { NULL       , s_cm162 + 3, "x",                  1, 0, 0xc003, 1 },
   { s_cm162 + 4, NULL       , "ON",                 2, 0, 0xc015, 0 },
   { s_cm162 + 5, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm162 + 6, NULL       , "OFF",                3, 0, 0xc015, 0 },
   { s_cm162 + 7, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { NULL       , NULL       , "&",                  1, 0, 0xc039, 0 }
};
static HB_PP_TOKEN s_cr162[ 6 ] = {
   { s_cr162 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr162 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr162 + 3, NULL       , "_SET_AUTOPEN",      12, 1, 0xc015, 0 },
   { s_cr162 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr162 + 5, NULL       , "x",                  1, 1, 0xc00e, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm163[ 5 ] = {
   { s_cm163 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm163 + 2, NULL       , "OPTIMIZE",           8, 1, 0xc015, 0 },
   { s_cm163 + 3, NULL       , "(",                  1, 1, 0xc032, 0 },
   { s_cm163 + 4, NULL       , "x",                  1, 0, 0xe001, 1 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cr163[ 6 ] = {
   { s_cr163 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr163 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr163 + 3, NULL       , "_SET_OPTIMIZE",     13, 1, 0xc015, 0 },
   { s_cr163 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr163 + 5, NULL       , "x",                  1, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm164[ 8 ] = {
   { s_cm164 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm164 + 2, NULL       , "OPTIMIZE",           8, 1, 0xc015, 0 },
   { NULL       , s_cm164 + 3, "x",                  1, 0, 0xc003, 1 },
   { s_cm164 + 4, NULL       , "ON",                 2, 0, 0xc015, 0 },
   { s_cm164 + 5, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm164 + 6, NULL       , "OFF",                3, 0, 0xc015, 0 },
   { s_cm164 + 7, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { NULL       , NULL       , "&",                  1, 0, 0xc039, 0 }
};
static HB_PP_TOKEN s_cr164[ 6 ] = {
   { s_cr164 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr164 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr164 + 3, NULL       , "_SET_OPTIMIZE",     13, 1, 0xc015, 0 },
   { s_cr164 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr164 + 5, NULL       , "x",                  1, 1, 0xc00e, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm165[ 5 ] = {
   { s_cm165 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm165 + 2, NULL       , "STRICTREAD",        10, 1, 0xc015, 0 },
   { s_cm165 + 3, NULL       , "(",                  1, 1, 0xc032, 0 },
   { s_cm165 + 4, NULL       , "x",                  1, 0, 0xe001, 1 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cr165[ 6 ] = {
   { s_cr165 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr165 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr165 + 3, NULL       , "_SET_STRICTREAD",   15, 1, 0xc015, 0 },
   { s_cr165 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr165 + 5, NULL       , "x",                  1, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm166[ 8 ] = {
   { s_cm166 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm166 + 2, NULL       , "STRICTREAD",        10, 1, 0xc015, 0 },
   { NULL       , s_cm166 + 3, "x",                  1, 0, 0xc003, 1 },
   { s_cm166 + 4, NULL       , "ON",                 2, 0, 0xc015, 0 },
   { s_cm166 + 5, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm166 + 6, NULL       , "OFF",                3, 0, 0xc015, 0 },
   { s_cm166 + 7, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { NULL       , NULL       , "&",                  1, 0, 0xc039, 0 }
};
static HB_PP_TOKEN s_cr166[ 6 ] = {
   { s_cr166 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr166 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr166 + 3, NULL       , "_SET_STRICTREAD",   15, 1, 0xc015, 0 },
   { s_cr166 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr166 + 5, NULL       , "x",                  1, 1, 0xc00e, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm167[ 4 ] = {
   { s_cm167 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm167 + 2, NULL       , "MFILEEXT",           8, 1, 0xc015, 0 },
   { s_cm167 + 3, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { NULL       , NULL       , "x",                  1, 0, 0xe001, 1 }
};
static HB_PP_TOKEN s_cr167[ 6 ] = {
   { s_cr167 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr167 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr167 + 3, NULL       , "_SET_MFILEEXT",     13, 1, 0xc015, 0 },
   { s_cr167 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr167 + 5, NULL       , "x",                  1, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm168[ 4 ] = {
   { s_cm168 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm168 + 2, NULL       , "MEMOBLOCK",          9, 1, 0xc015, 0 },
   { s_cm168 + 3, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { NULL       , NULL       , "x",                  1, 0, 0xe001, 1 }
};
static HB_PP_TOKEN s_cr168[ 6 ] = {
   { s_cr168 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr168 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr168 + 3, NULL       , "_SET_MBLOCKSIZE",   15, 1, 0xc015, 0 },
   { s_cr168 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr168 + 5, NULL       , "x",                  1, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm169[ 4 ] = {
   { s_cm169 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm169 + 2, NULL       , "MBLOCKSIZE",        10, 1, 0xc015, 0 },
   { s_cm169 + 3, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { NULL       , NULL       , "x",                  1, 0, 0xe001, 1 }
};
static HB_PP_TOKEN s_cr169[ 6 ] = {
   { s_cr169 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr169 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr169 + 3, NULL       , "_SET_MBLOCKSIZE",   15, 1, 0xc015, 0 },
   { s_cr169 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr169 + 5, NULL       , "x",                  1, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm170[ 4 ] = {
   { s_cm170 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm170 + 2, NULL       , "AUTOSHARE",          9, 1, 0xc015, 0 },
   { s_cm170 + 3, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { NULL       , NULL       , "x",                  1, 0, 0xe001, 1 }
};
static HB_PP_TOKEN s_cr170[ 6 ] = {
   { s_cr170 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr170 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr170 + 3, NULL       , "_SET_AUTOSHARE",    14, 1, 0xc015, 0 },
   { s_cr170 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr170 + 5, NULL       , "x",                  1, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm171[ 3 ] = {
   { s_cm171 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm171 + 2, NULL       , "AUTOSHARE",          9, 1, 0xc015, 0 },
   { NULL       , NULL       , "TO",                 2, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr171[ 6 ] = {
   { s_cr171 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr171 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr171 + 3, NULL       , "_SET_AUTOSHARE",    14, 1, 0xc015, 0 },
   { s_cr171 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr171 + 5, NULL       , "0",                  1, 1, 0xc02a, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm172[ 4 ] = {
   { s_cm172 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm172 + 2, NULL       , "AUTORDER",           8, 1, 0xc015, 0 },
   { s_cm172 + 3, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { NULL       , NULL       , "x",                  1, 0, 0xe001, 1 }
};
static HB_PP_TOKEN s_cr172[ 6 ] = {
   { s_cr172 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr172 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr172 + 3, NULL       , "_SET_AUTORDER",     13, 1, 0xc015, 0 },
   { s_cr172 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr172 + 5, NULL       , "x",                  1, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm173[ 3 ] = {
   { s_cm173 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm173 + 2, NULL       , "AUTORDER",           8, 1, 0xc015, 0 },
   { NULL       , NULL       , "TO",                 2, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr173[ 6 ] = {
   { s_cr173 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr173 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr173 + 3, NULL       , "_SET_AUTORDER",     13, 1, 0xc015, 0 },
   { s_cr173 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr173 + 5, NULL       , "0",                  1, 1, 0xc02a, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm174[ 3 ] = {
   { s_cm174 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm174 + 2, NULL       , "DESCENDING",        10, 1, 0xc015, 0 },
   { NULL       , NULL       , "OFF",                3, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr174[ 6 ] = {
   { s_cr174 + 1, NULL       , "ordDescend",        10, 1, 0xc015, 0 },
   { s_cr174 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr174 + 3, NULL       , ",",                  1, 1, 0xc01d, 0 },
   { s_cr174 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr174 + 5, NULL       , ".F.",                3, 1, 0xc02d, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm175[ 3 ] = {
   { s_cm175 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm175 + 2, NULL       , "DESCENDING",        10, 1, 0xc015, 0 },
   { NULL       , NULL       , "ON",                 2, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr175[ 6 ] = {
   { s_cr175 + 1, NULL       , "ordDescend",        10, 1, 0xc015, 0 },
   { s_cr175 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr175 + 3, NULL       , ",",                  1, 1, 0xc01d, 0 },
   { s_cr175 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr175 + 5, NULL       , ".T.",                3, 1, 0xc02d, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm176[ 3 ] = {
   { s_cm176 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm176 + 2, NULL       , "ORDER",              5, 1, 0xc015, 0 },
   { NULL       , NULL       , "TO",                 2, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr176[ 4 ] = {
   { s_cr176 + 1, NULL       , "ordSetFocus",       11, 1, 0xc015, 0 },
   { s_cr176 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr176 + 3, NULL       , "0",                  1, 1, 0xc02a, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm177[ 5 ] = {
   { s_cm177 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm177 + 2, NULL       , "SCOPE",              5, 1, 0xc015, 0 },
   { s_cm177 + 3, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { s_cm177 + 4, NULL       , ",",                  1, 1, 0xc01d, 0 },
   { NULL       , NULL       , "x",                  1, 0, 0xe001, 1 }
};
static HB_PP_TOKEN s_cr177[ 6 ] = {
   { s_cr177 + 1, NULL       , "ordScope",           8, 1, 0xc015, 0 },
   { s_cr177 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr177 + 3, NULL       , "1",                  1, 1, 0xc02a, 0 },
   { s_cr177 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr177 + 5, NULL       , "x",                  1, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm178[ 4 ] = {
   { s_cm178 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm178 + 2, NULL       , "SCOPE",              5, 1, 0xc015, 0 },
   { s_cm178 + 3, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { NULL       , NULL       , "x",                  1, 0, 0xe001, 1 }
};
static HB_PP_TOKEN s_cr178[ 13 ] = {
   { s_cr178 + 1, NULL       , "ordScope",           8, 1, 0xc015, 0 },
   { s_cr178 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr178 + 3, NULL       , "0",                  1, 1, 0xc02a, 0 },
   { s_cr178 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr178 + 5, NULL       , "x",                  1, 1, 0xc00b, 1 },
   { s_cr178 + 6, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr178 + 7, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr178 + 8, NULL       , "ordScope",           8, 1, 0xc015, 0 },
   { s_cr178 + 9, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr178 +10, NULL       , "1",                  1, 1, 0xc02a, 0 },
   { s_cr178 +11, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr178 +12, NULL       , "x",                  1, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm179[ 6 ] = {
   { s_cm179 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm179 + 2, NULL       , "SCOPE",              5, 1, 0xc015, 0 },
   { s_cm179 + 3, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { s_cm179 + 4, NULL       , "x",                  1, 0, 0xe001, 1 },
   { s_cm179 + 5, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { NULL       , NULL       , "y",                  1, 0, 0xe001, 2 }
};
static HB_PP_TOKEN s_cr179[ 13 ] = {
   { s_cr179 + 1, NULL       , "ordScope",           8, 1, 0xc015, 0 },
   { s_cr179 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr179 + 3, NULL       , "0",                  1, 1, 0xc02a, 0 },
   { s_cr179 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr179 + 5, NULL       , "x",                  1, 1, 0xc00b, 1 },
   { s_cr179 + 6, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr179 + 7, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr179 + 8, NULL       , "ordScope",           8, 1, 0xc015, 0 },
   { s_cr179 + 9, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr179 +10, NULL       , "1",                  1, 1, 0xc02a, 0 },
   { s_cr179 +11, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr179 +12, NULL       , "y",                  1, 1, 0xc00b, 2 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm180[ 3 ] = {
   { s_cm180 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm180 + 2, NULL       , "SCOPE",              5, 1, 0xc015, 0 },
   { NULL       , NULL       , "TO",                 2, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr180[ 13 ] = {
   { s_cr180 + 1, NULL       , "ordScope",           8, 1, 0xc015, 0 },
   { s_cr180 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr180 + 3, NULL       , "0",                  1, 1, 0xc02a, 0 },
   { s_cr180 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr180 + 5, NULL       , "nil",                3, 1, 0xc015, 0 },
   { s_cr180 + 6, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr180 + 7, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr180 + 8, NULL       , "ordScope",           8, 1, 0xc015, 0 },
   { s_cr180 + 9, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr180 +10, NULL       , "1",                  1, 1, 0xc02a, 0 },
   { s_cr180 +11, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr180 +12, NULL       , "nil",                3, 1, 0xc015, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm181[ 4 ] = {
   { s_cm181 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm181 + 2, NULL       , "SCOPEBOTTOM",       11, 1, 0xc015, 0 },
   { s_cm181 + 3, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { NULL       , NULL       , "x",                  1, 0, 0xe001, 1 }
};
static HB_PP_TOKEN s_cr181[ 6 ] = {
   { s_cr181 + 1, NULL       , "ordScope",           8, 1, 0xc015, 0 },
   { s_cr181 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr181 + 3, NULL       , "1",                  1, 1, 0xc02a, 0 },
   { s_cr181 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr181 + 5, NULL       , "x",                  1, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm182[ 3 ] = {
   { s_cm182 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm182 + 2, NULL       , "SCOPEBOTTOM",       11, 1, 0xc015, 0 },
   { NULL       , NULL       , "TO",                 2, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr182[ 6 ] = {
   { s_cr182 + 1, NULL       , "ordScope",           8, 1, 0xc015, 0 },
   { s_cr182 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr182 + 3, NULL       , "1",                  1, 1, 0xc02a, 0 },
   { s_cr182 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr182 + 5, NULL       , "nil",                3, 1, 0xc015, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm183[ 4 ] = {
   { s_cm183 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm183 + 2, NULL       , "SCOPETOP",           8, 1, 0xc015, 0 },
   { s_cm183 + 3, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { NULL       , NULL       , "x",                  1, 0, 0xe001, 1 }
};
static HB_PP_TOKEN s_cr183[ 6 ] = {
   { s_cr183 + 1, NULL       , "ordScope",           8, 1, 0xc015, 0 },
   { s_cr183 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr183 + 3, NULL       , "0",                  1, 1, 0xc02a, 0 },
   { s_cr183 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr183 + 5, NULL       , "x",                  1, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm184[ 3 ] = {
   { s_cm184 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm184 + 2, NULL       , "SCOPETOP",           8, 1, 0xc015, 0 },
   { NULL       , NULL       , "TO",                 2, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr184[ 6 ] = {
   { s_cr184 + 1, NULL       , "ordScope",           8, 1, 0xc015, 0 },
   { s_cr184 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr184 + 3, NULL       , "0",                  1, 1, 0xc02a, 0 },
   { s_cr184 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr184 + 5, NULL       , "nil",                3, 1, 0xc015, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm185[ 4 ] = {
   { s_cm185 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm185 + 2, NULL       , "VIDEOMODE",          9, 1, 0xc015, 0 },
   { s_cm185 + 3, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { NULL       , NULL       , "x",                  1, 0, 0xe001, 1 }
};
static HB_PP_TOKEN s_cr185[ 6 ] = {
   { s_cr185 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr185 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr185 + 3, NULL       , "_SET_VIDEOMODE",    14, 1, 0xc015, 0 },
   { s_cr185 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr185 + 5, NULL       , "x",                  1, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm186[ 4 ] = {
   { s_cm186 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm186 + 2, NULL       , "EVENTMASK",          9, 1, 0xc015, 0 },
   { s_cm186 + 3, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { NULL       , NULL       , "x",                  1, 0, 0xe001, 1 }
};
static HB_PP_TOKEN s_cr186[ 6 ] = {
   { s_cr186 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr186 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr186 + 3, NULL       , "_SET_EVENTMASK",    14, 1, 0xc015, 0 },
   { s_cr186 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr186 + 5, NULL       , "x",                  1, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm187[ 7 ] = {
   { s_cm187 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm187 + 2, NULL       , "FUNCTION",           8, 1, 0xc015, 0 },
   { s_cm187 + 3, NULL       , "n",                  1, 0, 0xe001, 1 },
   { s_cm187 + 5, s_cm187 + 4, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "TO",                 2, 0, 0xc015, 0 },
   { NULL       , s_cm187 + 6, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "f",                  1, 0, 0xe001, 2 }
};
static HB_PP_TOKEN s_cr187[ 6 ] = {
   { s_cr187 + 1, NULL       , "__SetFunction",     13, 1, 0xc015, 0 },
   { s_cr187 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr187 + 3, NULL       , "n",                  1, 1, 0xc00b, 1 },
   { s_cr187 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr187 + 5, NULL       , "f",                  1, 1, 0xc00b, 2 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm188[ 5 ] = {
   { s_cm188 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm188 + 2, NULL       , "KEY",                3, 1, 0xc015, 0 },
   { s_cm188 + 3, NULL       , "n",                  1, 0, 0xe001, 1 },
   { NULL       , s_cm188 + 4, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "TO",                 2, 0, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr188[ 6 ] = {
   { s_cr188 + 1, NULL       , "SetKey",             6, 1, 0xc015, 0 },
   { s_cr188 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr188 + 3, NULL       , "n",                  1, 1, 0xc00b, 1 },
   { s_cr188 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr188 + 5, NULL       , "NIL",                3, 1, 0xc015, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm189[ 6 ] = {
   { s_cm189 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm189 + 2, NULL       , "KEY",                3, 1, 0xc015, 0 },
   { s_cm189 + 3, NULL       , "n",                  1, 0, 0xe001, 2 },
   { s_cm189 + 4, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { NULL       , s_cm189 + 5, "f",                  1, 0, 0xc003, 1 },
   { NULL       , NULL       , "&",                  1, 0, 0xc039, 0 }
};
static HB_PP_TOKEN s_cr189[ 41 ] = {
   { s_cr189 + 1, NULL       , "if",                 2, 1, 0xc015, 0 },
   { s_cr189 + 2, NULL       , "(",                  1, 1, 0xc032, 0 },
   { s_cr189 + 3, NULL       , "Empty",              5, 1, 0xc015, 0 },
   { s_cr189 + 4, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr189 + 5, NULL       , "f",                  1, 1, 0xc00e, 1 },
   { s_cr189 + 6, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr189 + 7, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr189 + 8, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr189 + 9, NULL       , "SetKey",             6, 1, 0xc015, 0 },
   { s_cr189 +10, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr189 +11, NULL       , "n",                  1, 1, 0xc00b, 2 },
   { s_cr189 +12, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr189 +13, NULL       , "NIL",                3, 1, 0xc015, 0 },
   { s_cr189 +14, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr189 +15, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr189 +16, NULL       , "else",               4, 1, 0xc015, 0 },
   { s_cr189 +17, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr189 +18, NULL       , "SetKey",             6, 1, 0xc015, 0 },
   { s_cr189 +19, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr189 +20, NULL       , "n",                  1, 1, 0xc00b, 2 },
   { s_cr189 +21, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr189 +22, NULL       , "{",                  1, 1, 0xc036, 0 },
   { s_cr189 +23, NULL       , "|",                  1, 0, 0xc01b, 0 },
   { s_cr189 +24, NULL       , "p",                  1, 1, 0xc015, 0 },
   { s_cr189 +25, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr189 +26, NULL       , "l",                  1, 1, 0xc015, 0 },
   { s_cr189 +27, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr189 +28, NULL       , "v",                  1, 1, 0xc015, 0 },
   { s_cr189 +29, NULL       , "|",                  1, 1, 0xc01b, 0 },
   { s_cr189 +30, NULL       , "f",                  1, 1, 0xc00b, 1 },
   { s_cr189 +31, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr189 +32, NULL       , "p",                  1, 1, 0xc015, 0 },
   { s_cr189 +33, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr189 +34, NULL       , "l",                  1, 1, 0xc015, 0 },
   { s_cr189 +35, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr189 +36, NULL       , "v",                  1, 1, 0xc015, 0 },
   { s_cr189 +37, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr189 +38, NULL       , "}",                  1, 1, 0xc037, 0 },
   { s_cr189 +39, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr189 +40, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { NULL       , NULL       , "end",                3, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cm190[ 9 ] = {
   { s_cm190 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm190 + 2, NULL       , "KEY",                3, 1, 0xc015, 0 },
   { s_cm190 + 3, NULL       , "n",                  1, 0, 0xe001, 1 },
   { s_cm190 + 4, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { s_cm190 + 5, NULL       , "f",                  1, 0, 0xe001, 2 },
   { s_cm190 + 6, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cm190 + 8, s_cm190 + 7, "[",                  1, 0, 0xe007, 0 },
   { NULL       , NULL       , "p",                  1, 0, 0xe002, 0 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cr190[ 5 ] = {
   { s_cr190 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cr190 + 2, NULL       , "KEY",                3, 1, 0xc015, 0 },
   { s_cr190 + 3, NULL       , "n",                  1, 1, 0xc00b, 1 },
   { s_cr190 + 4, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { NULL       , NULL       , "f",                  1, 1, 0xc00b, 2 }
};
static HB_PP_TOKEN s_cm191[ 5 ] = {
   { s_cm191 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm191 + 2, NULL       , "KEY",                3, 1, 0xc015, 0 },
   { s_cm191 + 3, NULL       , "n",                  1, 0, 0xe001, 1 },
   { s_cm191 + 4, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { NULL       , NULL       , "f",                  1, 0, 0xe001, 2 }
};
static HB_PP_TOKEN s_cr191[ 22 ] = {
   { s_cr191 + 1, NULL       , "SetKey",             6, 1, 0xc015, 0 },
   { s_cr191 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr191 + 3, NULL       , "n",                  1, 1, 0xc00b, 1 },
   { s_cr191 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr191 + 5, NULL       , "{",                  1, 1, 0xc036, 0 },
   { s_cr191 + 6, NULL       , "|",                  1, 0, 0xc01b, 0 },
   { s_cr191 + 7, NULL       , "p",                  1, 1, 0xc015, 0 },
   { s_cr191 + 8, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr191 + 9, NULL       , "l",                  1, 1, 0xc015, 0 },
   { s_cr191 +10, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr191 +11, NULL       , "v",                  1, 1, 0xc015, 0 },
   { s_cr191 +12, NULL       , "|",                  1, 1, 0xc01b, 0 },
   { s_cr191 +13, NULL       , "f",                  1, 1, 0xc00b, 2 },
   { s_cr191 +14, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr191 +15, NULL       , "p",                  1, 1, 0xc015, 0 },
   { s_cr191 +16, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr191 +17, NULL       , "l",                  1, 1, 0xc015, 0 },
   { s_cr191 +18, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr191 +19, NULL       , "v",                  1, 1, 0xc015, 0 },
   { s_cr191 +20, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr191 +21, NULL       , "}",                  1, 1, 0xc037, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm192[ 4 ] = {
   { s_cm192 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm192 + 2, NULL       , "TYPEAHEAD",          9, 1, 0xc015, 0 },
   { s_cm192 + 3, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { NULL       , NULL       , "x",                  1, 0, 0xe001, 1 }
};
static HB_PP_TOKEN s_cr192[ 6 ] = {
   { s_cr192 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr192 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr192 + 3, NULL       , "_SET_TYPEAHEAD",    14, 1, 0xc015, 0 },
   { s_cr192 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr192 + 5, NULL       , "x",                  1, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm193[ 3 ] = {
   { s_cm193 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm193 + 2, NULL       , "MESSAGE",            7, 1, 0xc015, 0 },
   { NULL       , NULL       , "TO",                 2, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr193[ 13 ] = {
   { s_cr193 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr193 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr193 + 3, NULL       , "_SET_MESSAGE",      12, 1, 0xc015, 0 },
   { s_cr193 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr193 + 5, NULL       , "0",                  1, 1, 0xc02a, 0 },
   { s_cr193 + 6, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr193 + 7, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr193 + 8, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr193 + 9, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr193 +10, NULL       , "_SET_MCENTER",      12, 1, 0xc015, 0 },
   { s_cr193 +11, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr193 +12, NULL       , ".F.",                3, 1, 0xc02d, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm194[ 9 ] = {
   { s_cm194 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm194 + 2, NULL       , "MESSAGE",            7, 1, 0xc015, 0 },
   { s_cm194 + 3, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { s_cm194 + 4, NULL       , "n",                  1, 0, 0xe001, 1 },
   { NULL       , s_cm194 + 5, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm194 + 6, "cent",               4, 0, 0xc003, 2 },
   { s_cm194 + 7, NULL       , "CENTER",             6, 1, 0xc015, 0 },
   { s_cm194 + 8, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { NULL       , NULL       , "CENTRE",             6, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr194[ 13 ] = {
   { s_cr194 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr194 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr194 + 3, NULL       , "_SET_MESSAGE",      12, 1, 0xc015, 0 },
   { s_cr194 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr194 + 5, NULL       , "n",                  1, 1, 0xc00b, 1 },
   { s_cr194 + 6, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr194 + 7, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr194 + 8, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr194 + 9, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr194 +10, NULL       , "_SET_MCENTER",      12, 1, 0xc015, 0 },
   { s_cr194 +11, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr194 +12, NULL       , "cent",               4, 1, 0xc010, 2 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm195[ 11 ] = {
   { s_cm195 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm195 + 2, NULL       , "INDEX",              5, 1, 0xc015, 0 },
   { s_cm195 + 3, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { s_cm195 + 6, s_cm195 + 4, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm195 + 5, "add",                3, 0, 0xc003, 1 },
   { NULL       , NULL       , "ADDITIVE",           8, 1, 0xc015, 0 },
   { NULL       , s_cm195 + 7, "[",                  1, 1, 0xe007, 0 },
   { s_cm195 + 8, NULL       , "i1",                 2, 0, 0xe005, 2 },
   { NULL       , s_cm195 + 9, "[",                  1, 1, 0xe007, 0 },
   { s_cm195 +10, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { NULL       , NULL       , "iN",                 2, 0, 0xe005, 3 }
};
static HB_PP_TOKEN s_cr195[ 21 ] = {
   { s_cr195 + 1, NULL       , "if",                 2, 1, 0xc015, 0 },
   { s_cr195 + 2, NULL       , "!",                  1, 1, 0xc045, 0 },
   { s_cr195 + 3, NULL       , "add",                3, 1, 0xc010, 1 },
   { s_cr195 + 4, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr195 + 5, NULL       , "ordListClear",      12, 1, 0xc015, 0 },
   { s_cr195 + 6, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr195 + 7, NULL       , ")",                  1, 0, 0xc033, 0 },
   { s_cr195 + 8, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr195 + 9, NULL       , "end",                3, 1, 0xc015, 0 },
   { s_cr195 +15, s_cr195 +10, "[",                  1, 1, 0xc012, 0 },
   { s_cr195 +11, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr195 +12, NULL       , "ordListAdd",        10, 1, 0xc015, 0 },
   { s_cr195 +13, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr195 +14, NULL       , "i1",                 2, 1, 0xc00e, 2 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 },
   { NULL       , s_cr195 +16, "[",                  1, 1, 0xc012, 0 },
   { s_cr195 +17, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr195 +18, NULL       , "ordListAdd",        10, 1, 0xc015, 0 },
   { s_cr195 +19, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr195 +20, NULL       , "iN",                 2, 1, 0xc00e, 3 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm196[ 8 ] = {
   { s_cm196 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm196 + 2, NULL       , "ORDER",              5, 1, 0xc015, 0 },
   { s_cm196 + 3, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { s_cm196 + 4, NULL       , "TAG",                3, 1, 0xc015, 0 },
   { s_cm196 + 5, NULL       , "tg",                 2, 0, 0xe005, 1 },
   { NULL       , s_cm196 + 6, "[",                  1, 1, 0xe007, 0 },
   { s_cm196 + 7, NULL       , "IN",                 2, 0, 0xc015, 0 },
   { NULL       , NULL       , "bg",                 2, 0, 0xe005, 2 }
};
static HB_PP_TOKEN s_cr196[ 7 ] = {
   { s_cr196 + 1, NULL       , "ordSetFocus",       11, 1, 0xc015, 0 },
   { s_cr196 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr196 + 3, NULL       , "tg",                 2, 1, 0xc00e, 1 },
   { s_cr196 + 6, s_cr196 + 4, "[",                  1, 1, 0xc012, 0 },
   { s_cr196 + 5, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { NULL       , NULL       , "bg",                 2, 1, 0xc00e, 2 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm197[ 7 ] = {
   { s_cm197 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm197 + 2, NULL       , "ORDER",              5, 1, 0xc015, 0 },
   { s_cm197 + 3, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { s_cm197 + 4, NULL       , "tg",                 2, 0, 0xe001, 1 },
   { NULL       , s_cm197 + 5, "[",                  1, 1, 0xe007, 0 },
   { s_cm197 + 6, NULL       , "IN",                 2, 0, 0xc015, 0 },
   { NULL       , NULL       , "bg",                 2, 0, 0xe005, 2 }
};
static HB_PP_TOKEN s_cr197[ 7 ] = {
   { s_cr197 + 1, NULL       , "ordSetFocus",       11, 1, 0xc015, 0 },
   { s_cr197 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr197 + 3, NULL       , "tg",                 2, 1, 0xc00b, 1 },
   { s_cr197 + 6, s_cr197 + 4, "[",                  1, 1, 0xc012, 0 },
   { s_cr197 + 5, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { NULL       , NULL       , "bg",                 2, 1, 0xc00e, 2 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm198[ 5 ] = {
   { s_cm198 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm198 + 2, NULL       , "COLOUR",             6, 1, 0xc015, 0 },
   { s_cm198 + 3, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { NULL       , s_cm198 + 4, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "c",                  1, 0, 0xe004, 1 }
};
static HB_PP_TOKEN s_cr198[ 5 ] = {
   { s_cr198 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cr198 + 2, NULL       , "COLOR",              5, 1, 0xc015, 0 },
   { s_cr198 + 3, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { NULL       , s_cr198 + 4, "[",                  1, 1, 0xc012, 0 },
   { NULL       , NULL       , "c",                  1, 1, 0xc00b, 1 }
};
static HB_PP_TOKEN s_cm199[ 6 ] = {
   { s_cm199 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm199 + 2, NULL       , "COLOR",              5, 1, 0xc015, 0 },
   { s_cm199 + 3, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { s_cm199 + 4, NULL       , "(",                  1, 1, 0xc032, 0 },
   { s_cm199 + 5, NULL       , "c",                  1, 0, 0xe001, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cr199[ 4 ] = {
   { s_cr199 + 1, NULL       , "SetColor",           8, 1, 0xc015, 0 },
   { s_cr199 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr199 + 3, NULL       , "c",                  1, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm200[ 5 ] = {
   { s_cm200 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm200 + 2, NULL       , "COLOR",              5, 1, 0xc015, 0 },
   { s_cm200 + 3, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { NULL       , s_cm200 + 4, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "c",                  1, 0, 0xe004, 1 }
};
static HB_PP_TOKEN s_cr200[ 4 ] = {
   { s_cr200 + 1, NULL       , "SetColor",           8, 1, 0xc015, 0 },
   { s_cr200 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr200 + 3, NULL       , "c",                  1, 1, 0xc00c, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm201[ 4 ] = {
   { s_cm201 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm201 + 2, NULL       , "DEVICE",             6, 1, 0xc015, 0 },
   { s_cm201 + 3, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { NULL       , NULL       , "PRINTER",            7, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr201[ 6 ] = {
   { s_cr201 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr201 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr201 + 3, NULL       , "_SET_DEVICE",       11, 1, 0xc015, 0 },
   { s_cr201 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr201 + 5, NULL       , "PRINTER",            7, 1, 0xc029, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm202[ 4 ] = {
   { s_cm202 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm202 + 2, NULL       , "DEVICE",             6, 1, 0xc015, 0 },
   { s_cm202 + 3, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { NULL       , NULL       , "SCREEN",             6, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr202[ 6 ] = {
   { s_cr202 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr202 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr202 + 3, NULL       , "_SET_DEVICE",       11, 1, 0xc015, 0 },
   { s_cr202 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr202 + 5, NULL       , "SCREEN",             6, 1, 0xc029, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm203[ 3 ] = {
   { s_cm203 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm203 + 2, NULL       , "MARGIN",             6, 1, 0xc015, 0 },
   { NULL       , NULL       , "TO",                 2, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr203[ 6 ] = {
   { s_cr203 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr203 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr203 + 3, NULL       , "_SET_MARGIN",       11, 1, 0xc015, 0 },
   { s_cr203 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr203 + 5, NULL       , "0",                  1, 1, 0xc02a, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm204[ 4 ] = {
   { s_cm204 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm204 + 2, NULL       , "MARGIN",             6, 1, 0xc015, 0 },
   { s_cm204 + 3, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { NULL       , NULL       , "x",                  1, 0, 0xe001, 1 }
};
static HB_PP_TOKEN s_cr204[ 6 ] = {
   { s_cr204 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr204 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr204 + 3, NULL       , "_SET_MARGIN",       11, 1, 0xc015, 0 },
   { s_cr204 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr204 + 5, NULL       , "x",                  1, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm205[ 5 ] = {
   { s_cm205 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm205 + 2, NULL       , "CURSOR",             6, 1, 0xc015, 0 },
   { s_cm205 + 3, NULL       , "(",                  1, 1, 0xc032, 0 },
   { s_cm205 + 4, NULL       , "x",                  1, 0, 0xe001, 1 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cr205[ 11 ] = {
   { s_cr205 + 1, NULL       , "SetCursor",          9, 1, 0xc015, 0 },
   { s_cr205 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr205 + 3, NULL       , "iif",                3, 1, 0xc015, 0 },
   { s_cr205 + 4, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr205 + 5, NULL       , "x",                  1, 1, 0xc00b, 1 },
   { s_cr205 + 6, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr205 + 7, NULL       , "1",                  1, 1, 0xc02a, 0 },
   { s_cr205 + 8, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr205 + 9, NULL       , "0",                  1, 1, 0xc02a, 0 },
   { s_cr205 +10, NULL       , ")",                  1, 1, 0xc033, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm206[ 8 ] = {
   { s_cm206 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm206 + 2, NULL       , "CURSOR",             6, 1, 0xc015, 0 },
   { NULL       , s_cm206 + 3, "x",                  1, 0, 0xc003, 1 },
   { s_cm206 + 4, NULL       , "ON",                 2, 0, 0xc015, 0 },
   { s_cm206 + 5, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm206 + 6, NULL       , "OFF",                3, 0, 0xc015, 0 },
   { s_cm206 + 7, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { NULL       , NULL       , "&",                  1, 0, 0xc039, 0 }
};
static HB_PP_TOKEN s_cr206[ 16 ] = {
   { s_cr206 + 1, NULL       , "SetCursor",          9, 1, 0xc015, 0 },
   { s_cr206 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr206 + 3, NULL       , "iif",                3, 1, 0xc015, 0 },
   { s_cr206 + 4, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr206 + 5, NULL       , "Upper",              5, 1, 0xc015, 0 },
   { s_cr206 + 6, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr206 + 7, NULL       , "x",                  1, 1, 0xc00e, 1 },
   { s_cr206 + 8, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr206 + 9, NULL       , "==",                 2, 1, 0xc048, 0 },
   { s_cr206 +10, NULL       , "ON",                 2, 1, 0xc029, 0 },
   { s_cr206 +11, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr206 +12, NULL       , "1",                  1, 1, 0xc02a, 0 },
   { s_cr206 +13, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr206 +14, NULL       , "0",                  1, 1, 0xc02a, 0 },
   { s_cr206 +15, NULL       , ")",                  1, 1, 0xc033, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm207[ 7 ] = {
   { s_cm207 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm207 + 2, NULL       , "PRINTER",            7, 1, 0xc015, 0 },
   { s_cm207 + 3, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { s_cm207 + 4, NULL       , "file",               4, 0, 0xe005, 1 },
   { NULL       , s_cm207 + 5, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm207 + 6, "add",                3, 0, 0xc003, 2 },
   { NULL       , NULL       , "ADDITIVE",           8, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr207[ 8 ] = {
   { s_cr207 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr207 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr207 + 3, NULL       , "_SET_PRINTFILE",    14, 1, 0xc015, 0 },
   { s_cr207 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr207 + 5, NULL       , "file",               4, 1, 0xc00e, 1 },
   { s_cr207 + 6, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr207 + 7, NULL       , "add",                3, 1, 0xc010, 2 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm208[ 3 ] = {
   { s_cm208 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm208 + 2, NULL       , "PRINTER",            7, 1, 0xc015, 0 },
   { NULL       , NULL       , "TO",                 2, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr208[ 6 ] = {
   { s_cr208 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr208 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr208 + 3, NULL       , "_SET_PRINTFILE",    14, 1, 0xc015, 0 },
   { s_cr208 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr208 + 5, NULL       , "",                   0, 1, 0xc029, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm209[ 5 ] = {
   { s_cm209 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm209 + 2, NULL       , "PRINTER",            7, 1, 0xc015, 0 },
   { s_cm209 + 3, NULL       , "(",                  1, 1, 0xc032, 0 },
   { s_cm209 + 4, NULL       , "x",                  1, 0, 0xe001, 1 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cr209[ 6 ] = {
   { s_cr209 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr209 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr209 + 3, NULL       , "_SET_PRINTER",      12, 1, 0xc015, 0 },
   { s_cr209 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr209 + 5, NULL       , "x",                  1, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm210[ 8 ] = {
   { s_cm210 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm210 + 2, NULL       , "PRINTER",            7, 1, 0xc015, 0 },
   { NULL       , s_cm210 + 3, "x",                  1, 0, 0xc003, 1 },
   { s_cm210 + 4, NULL       , "ON",                 2, 0, 0xc015, 0 },
   { s_cm210 + 5, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm210 + 6, NULL       , "OFF",                3, 0, 0xc015, 0 },
   { s_cm210 + 7, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { NULL       , NULL       , "&",                  1, 0, 0xc039, 0 }
};
static HB_PP_TOKEN s_cr210[ 6 ] = {
   { s_cr210 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr210 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr210 + 3, NULL       , "_SET_PRINTER",      12, 1, 0xc015, 0 },
   { s_cr210 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr210 + 5, NULL       , "x",                  1, 1, 0xc00e, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm211[ 7 ] = {
   { s_cm211 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm211 + 2, NULL       , "ALTERNATE",          9, 1, 0xc015, 0 },
   { s_cm211 + 3, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { s_cm211 + 4, NULL       , "file",               4, 0, 0xe005, 1 },
   { NULL       , s_cm211 + 5, "[",                  1, 1, 0xe007, 0 },
   { NULL       , s_cm211 + 6, "add",                3, 0, 0xc003, 2 },
   { NULL       , NULL       , "ADDITIVE",           8, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr211[ 8 ] = {
   { s_cr211 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr211 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr211 + 3, NULL       , "_SET_ALTFILE",      12, 1, 0xc015, 0 },
   { s_cr211 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr211 + 5, NULL       , "file",               4, 1, 0xc00e, 1 },
   { s_cr211 + 6, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr211 + 7, NULL       , "add",                3, 1, 0xc010, 2 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm212[ 3 ] = {
   { s_cm212 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm212 + 2, NULL       , "ALTERNATE",          9, 1, 0xc015, 0 },
   { NULL       , NULL       , "TO",                 2, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr212[ 6 ] = {
   { s_cr212 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr212 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr212 + 3, NULL       , "_SET_ALTFILE",      12, 1, 0xc015, 0 },
   { s_cr212 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr212 + 5, NULL       , "",                   0, 1, 0xc029, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm213[ 5 ] = {
   { s_cm213 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm213 + 2, NULL       , "ALTERNATE",          9, 1, 0xc015, 0 },
   { s_cm213 + 3, NULL       , "(",                  1, 1, 0xc032, 0 },
   { s_cm213 + 4, NULL       , "x",                  1, 0, 0xe001, 1 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cr213[ 6 ] = {
   { s_cr213 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr213 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr213 + 3, NULL       , "_SET_ALTERNATE",    14, 1, 0xc015, 0 },
   { s_cr213 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr213 + 5, NULL       , "x",                  1, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm214[ 8 ] = {
   { s_cm214 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm214 + 2, NULL       , "ALTERNATE",          9, 1, 0xc015, 0 },
   { NULL       , s_cm214 + 3, "x",                  1, 0, 0xc003, 1 },
   { s_cm214 + 4, NULL       , "ON",                 2, 0, 0xc015, 0 },
   { s_cm214 + 5, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm214 + 6, NULL       , "OFF",                3, 0, 0xc015, 0 },
   { s_cm214 + 7, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { NULL       , NULL       , "&",                  1, 0, 0xc039, 0 }
};
static HB_PP_TOKEN s_cr214[ 6 ] = {
   { s_cr214 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr214 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr214 + 3, NULL       , "_SET_ALTERNATE",    14, 1, 0xc015, 0 },
   { s_cr214 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr214 + 5, NULL       , "x",                  1, 1, 0xc00e, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm215[ 5 ] = {
   { s_cm215 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm215 + 2, NULL       , "DELIMITERS",        10, 1, 0xc015, 0 },
   { s_cm215 + 3, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { NULL       , s_cm215 + 4, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "DEFAULT",            7, 0, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr215[ 6 ] = {
   { s_cr215 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr215 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr215 + 3, NULL       , "_SET_DELIMCHARS",   15, 1, 0xc015, 0 },
   { s_cr215 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr215 + 5, NULL       , "::",                 2, 1, 0xc029, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm216[ 4 ] = {
   { s_cm216 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm216 + 2, NULL       , "DELIMITERS",        10, 1, 0xc015, 0 },
   { s_cm216 + 3, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { NULL       , NULL       , "c",                  1, 0, 0xe001, 1 }
};
static HB_PP_TOKEN s_cr216[ 6 ] = {
   { s_cr216 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr216 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr216 + 3, NULL       , "_SET_DELIMCHARS",   15, 1, 0xc015, 0 },
   { s_cr216 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr216 + 5, NULL       , "c",                  1, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm217[ 5 ] = {
   { s_cm217 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm217 + 2, NULL       , "DELIMITERS",        10, 1, 0xc015, 0 },
   { s_cm217 + 3, NULL       , "(",                  1, 1, 0xc032, 0 },
   { s_cm217 + 4, NULL       , "x",                  1, 0, 0xe001, 1 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cr217[ 6 ] = {
   { s_cr217 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr217 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr217 + 3, NULL       , "_SET_DELIMITERS",   15, 1, 0xc015, 0 },
   { s_cr217 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr217 + 5, NULL       , "x",                  1, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm218[ 8 ] = {
   { s_cm218 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm218 + 2, NULL       , "DELIMITERS",        10, 1, 0xc015, 0 },
   { NULL       , s_cm218 + 3, "x",                  1, 0, 0xc003, 1 },
   { s_cm218 + 4, NULL       , "ON",                 2, 0, 0xc015, 0 },
   { s_cm218 + 5, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm218 + 6, NULL       , "OFF",                3, 0, 0xc015, 0 },
   { s_cm218 + 7, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { NULL       , NULL       , "&",                  1, 0, 0xc039, 0 }
};
static HB_PP_TOKEN s_cr218[ 6 ] = {
   { s_cr218 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr218 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr218 + 3, NULL       , "_SET_DELIMITERS",   15, 1, 0xc015, 0 },
   { s_cr218 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr218 + 5, NULL       , "x",                  1, 1, 0xc00e, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm219[ 5 ] = {
   { s_cm219 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm219 + 2, NULL       , "WRAP",               4, 1, 0xc015, 0 },
   { s_cm219 + 3, NULL       , "(",                  1, 1, 0xc032, 0 },
   { s_cm219 + 4, NULL       , "x",                  1, 0, 0xe001, 1 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cr219[ 6 ] = {
   { s_cr219 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr219 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr219 + 3, NULL       , "_SET_WRAP",          9, 1, 0xc015, 0 },
   { s_cr219 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr219 + 5, NULL       , "x",                  1, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm220[ 8 ] = {
   { s_cm220 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm220 + 2, NULL       , "WRAP",               4, 1, 0xc015, 0 },
   { NULL       , s_cm220 + 3, "x",                  1, 0, 0xc003, 1 },
   { s_cm220 + 4, NULL       , "ON",                 2, 0, 0xc015, 0 },
   { s_cm220 + 5, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm220 + 6, NULL       , "OFF",                3, 0, 0xc015, 0 },
   { s_cm220 + 7, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { NULL       , NULL       , "&",                  1, 0, 0xc039, 0 }
};
static HB_PP_TOKEN s_cr220[ 6 ] = {
   { s_cr220 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr220 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr220 + 3, NULL       , "_SET_WRAP",          9, 1, 0xc015, 0 },
   { s_cr220 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr220 + 5, NULL       , "x",                  1, 1, 0xc00e, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm221[ 5 ] = {
   { s_cm221 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm221 + 2, NULL       , "SCOREBOARD",        10, 1, 0xc015, 0 },
   { s_cm221 + 3, NULL       , "(",                  1, 1, 0xc032, 0 },
   { s_cm221 + 4, NULL       , "x",                  1, 0, 0xe001, 1 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cr221[ 6 ] = {
   { s_cr221 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr221 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr221 + 3, NULL       , "_SET_SCOREBOARD",   15, 1, 0xc015, 0 },
   { s_cr221 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr221 + 5, NULL       , "x",                  1, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm222[ 8 ] = {
   { s_cm222 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm222 + 2, NULL       , "SCOREBOARD",        10, 1, 0xc015, 0 },
   { NULL       , s_cm222 + 3, "x",                  1, 0, 0xc003, 1 },
   { s_cm222 + 4, NULL       , "ON",                 2, 0, 0xc015, 0 },
   { s_cm222 + 5, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm222 + 6, NULL       , "OFF",                3, 0, 0xc015, 0 },
   { s_cm222 + 7, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { NULL       , NULL       , "&",                  1, 0, 0xc039, 0 }
};
static HB_PP_TOKEN s_cr222[ 6 ] = {
   { s_cr222 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr222 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr222 + 3, NULL       , "_SET_SCOREBOARD",   15, 1, 0xc015, 0 },
   { s_cr222 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr222 + 5, NULL       , "x",                  1, 1, 0xc00e, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm223[ 5 ] = {
   { s_cm223 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm223 + 2, NULL       , "INTENSITY",          9, 1, 0xc015, 0 },
   { s_cm223 + 3, NULL       , "(",                  1, 1, 0xc032, 0 },
   { s_cm223 + 4, NULL       , "x",                  1, 0, 0xe001, 1 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cr223[ 6 ] = {
   { s_cr223 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr223 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr223 + 3, NULL       , "_SET_INTENSITY",    14, 1, 0xc015, 0 },
   { s_cr223 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr223 + 5, NULL       , "x",                  1, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm224[ 8 ] = {
   { s_cm224 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm224 + 2, NULL       , "INTENSITY",          9, 1, 0xc015, 0 },
   { NULL       , s_cm224 + 3, "x",                  1, 0, 0xc003, 1 },
   { s_cm224 + 4, NULL       , "ON",                 2, 0, 0xc015, 0 },
   { s_cm224 + 5, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm224 + 6, NULL       , "OFF",                3, 0, 0xc015, 0 },
   { s_cm224 + 7, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { NULL       , NULL       , "&",                  1, 0, 0xc039, 0 }
};
static HB_PP_TOKEN s_cr224[ 6 ] = {
   { s_cr224 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr224 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr224 + 3, NULL       , "_SET_INTENSITY",    14, 1, 0xc015, 0 },
   { s_cr224 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr224 + 5, NULL       , "x",                  1, 1, 0xc00e, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm225[ 5 ] = {
   { s_cm225 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm225 + 2, NULL       , "ESCAPE",             6, 1, 0xc015, 0 },
   { s_cm225 + 3, NULL       , "(",                  1, 1, 0xc032, 0 },
   { s_cm225 + 4, NULL       , "x",                  1, 0, 0xe001, 1 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cr225[ 6 ] = {
   { s_cr225 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr225 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr225 + 3, NULL       , "_SET_ESCAPE",       11, 1, 0xc015, 0 },
   { s_cr225 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr225 + 5, NULL       , "x",                  1, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm226[ 8 ] = {
   { s_cm226 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm226 + 2, NULL       , "ESCAPE",             6, 1, 0xc015, 0 },
   { NULL       , s_cm226 + 3, "x",                  1, 0, 0xc003, 1 },
   { s_cm226 + 4, NULL       , "ON",                 2, 0, 0xc015, 0 },
   { s_cm226 + 5, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm226 + 6, NULL       , "OFF",                3, 0, 0xc015, 0 },
   { s_cm226 + 7, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { NULL       , NULL       , "&",                  1, 0, 0xc039, 0 }
};
static HB_PP_TOKEN s_cr226[ 6 ] = {
   { s_cr226 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr226 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr226 + 3, NULL       , "_SET_ESCAPE",       11, 1, 0xc015, 0 },
   { s_cr226 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr226 + 5, NULL       , "x",                  1, 1, 0xc00e, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm227[ 5 ] = {
   { s_cm227 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm227 + 2, NULL       , "CONFIRM",            7, 1, 0xc015, 0 },
   { s_cm227 + 3, NULL       , "(",                  1, 1, 0xc032, 0 },
   { s_cm227 + 4, NULL       , "x",                  1, 0, 0xe001, 1 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cr227[ 6 ] = {
   { s_cr227 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr227 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr227 + 3, NULL       , "_SET_CONFIRM",      12, 1, 0xc015, 0 },
   { s_cr227 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr227 + 5, NULL       , "x",                  1, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm228[ 8 ] = {
   { s_cm228 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm228 + 2, NULL       , "CONFIRM",            7, 1, 0xc015, 0 },
   { NULL       , s_cm228 + 3, "x",                  1, 0, 0xc003, 1 },
   { s_cm228 + 4, NULL       , "ON",                 2, 0, 0xc015, 0 },
   { s_cm228 + 5, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm228 + 6, NULL       , "OFF",                3, 0, 0xc015, 0 },
   { s_cm228 + 7, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { NULL       , NULL       , "&",                  1, 0, 0xc039, 0 }
};
static HB_PP_TOKEN s_cr228[ 6 ] = {
   { s_cr228 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr228 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr228 + 3, NULL       , "_SET_CONFIRM",      12, 1, 0xc015, 0 },
   { s_cr228 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr228 + 5, NULL       , "x",                  1, 1, 0xc00e, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm229[ 5 ] = {
   { s_cm229 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm229 + 2, NULL       , "BELL",               4, 1, 0xc015, 0 },
   { s_cm229 + 3, NULL       , "(",                  1, 1, 0xc032, 0 },
   { s_cm229 + 4, NULL       , "x",                  1, 0, 0xe001, 1 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cr229[ 6 ] = {
   { s_cr229 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr229 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr229 + 3, NULL       , "_SET_BELL",          9, 1, 0xc015, 0 },
   { s_cr229 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr229 + 5, NULL       , "x",                  1, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm230[ 8 ] = {
   { s_cm230 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm230 + 2, NULL       , "BELL",               4, 1, 0xc015, 0 },
   { NULL       , s_cm230 + 3, "x",                  1, 0, 0xc003, 1 },
   { s_cm230 + 4, NULL       , "ON",                 2, 0, 0xc015, 0 },
   { s_cm230 + 5, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm230 + 6, NULL       , "OFF",                3, 0, 0xc015, 0 },
   { s_cm230 + 7, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { NULL       , NULL       , "&",                  1, 0, 0xc039, 0 }
};
static HB_PP_TOKEN s_cr230[ 6 ] = {
   { s_cr230 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr230 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr230 + 3, NULL       , "_SET_BELL",          9, 1, 0xc015, 0 },
   { s_cr230 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr230 + 5, NULL       , "x",                  1, 1, 0xc00e, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm231[ 5 ] = {
   { s_cm231 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm231 + 2, NULL       , "CONSOLE",            7, 1, 0xc015, 0 },
   { s_cm231 + 3, NULL       , "(",                  1, 1, 0xc032, 0 },
   { s_cm231 + 4, NULL       , "x",                  1, 0, 0xe001, 1 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cr231[ 6 ] = {
   { s_cr231 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr231 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr231 + 3, NULL       , "_SET_CONSOLE",      12, 1, 0xc015, 0 },
   { s_cr231 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr231 + 5, NULL       , "x",                  1, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm232[ 8 ] = {
   { s_cm232 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm232 + 2, NULL       , "CONSOLE",            7, 1, 0xc015, 0 },
   { NULL       , s_cm232 + 3, "x",                  1, 0, 0xc003, 1 },
   { s_cm232 + 4, NULL       , "ON",                 2, 0, 0xc015, 0 },
   { s_cm232 + 5, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm232 + 6, NULL       , "OFF",                3, 0, 0xc015, 0 },
   { s_cm232 + 7, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { NULL       , NULL       , "&",                  1, 0, 0xc039, 0 }
};
static HB_PP_TOKEN s_cr232[ 6 ] = {
   { s_cr232 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr232 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr232 + 3, NULL       , "_SET_CONSOLE",      12, 1, 0xc015, 0 },
   { s_cr232 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr232 + 5, NULL       , "x",                  1, 1, 0xc00e, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm233[ 5 ] = {
   { s_cm233 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm233 + 2, NULL       , "DELETED",            7, 1, 0xc015, 0 },
   { s_cm233 + 3, NULL       , "(",                  1, 1, 0xc032, 0 },
   { s_cm233 + 4, NULL       , "x",                  1, 0, 0xe001, 1 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cr233[ 6 ] = {
   { s_cr233 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr233 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr233 + 3, NULL       , "_SET_DELETED",      12, 1, 0xc015, 0 },
   { s_cr233 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr233 + 5, NULL       , "x",                  1, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm234[ 8 ] = {
   { s_cm234 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm234 + 2, NULL       , "DELETED",            7, 1, 0xc015, 0 },
   { NULL       , s_cm234 + 3, "x",                  1, 0, 0xc003, 1 },
   { s_cm234 + 4, NULL       , "ON",                 2, 0, 0xc015, 0 },
   { s_cm234 + 5, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm234 + 6, NULL       , "OFF",                3, 0, 0xc015, 0 },
   { s_cm234 + 7, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { NULL       , NULL       , "&",                  1, 0, 0xc039, 0 }
};
static HB_PP_TOKEN s_cr234[ 6 ] = {
   { s_cr234 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr234 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr234 + 3, NULL       , "_SET_DELETED",      12, 1, 0xc015, 0 },
   { s_cr234 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr234 + 5, NULL       , "x",                  1, 1, 0xc00e, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm235[ 5 ] = {
   { s_cm235 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm235 + 2, NULL       , "UNIQUE",             6, 1, 0xc015, 0 },
   { s_cm235 + 3, NULL       , "(",                  1, 1, 0xc032, 0 },
   { s_cm235 + 4, NULL       , "x",                  1, 0, 0xe001, 1 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cr235[ 6 ] = {
   { s_cr235 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr235 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr235 + 3, NULL       , "_SET_UNIQUE",       11, 1, 0xc015, 0 },
   { s_cr235 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr235 + 5, NULL       , "x",                  1, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm236[ 8 ] = {
   { s_cm236 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm236 + 2, NULL       , "UNIQUE",             6, 1, 0xc015, 0 },
   { NULL       , s_cm236 + 3, "x",                  1, 0, 0xc003, 1 },
   { s_cm236 + 4, NULL       , "ON",                 2, 0, 0xc015, 0 },
   { s_cm236 + 5, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm236 + 6, NULL       , "OFF",                3, 0, 0xc015, 0 },
   { s_cm236 + 7, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { NULL       , NULL       , "&",                  1, 0, 0xc039, 0 }
};
static HB_PP_TOKEN s_cr236[ 6 ] = {
   { s_cr236 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr236 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr236 + 3, NULL       , "_SET_UNIQUE",       11, 1, 0xc015, 0 },
   { s_cr236 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr236 + 5, NULL       , "x",                  1, 1, 0xc00e, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm237[ 5 ] = {
   { s_cm237 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm237 + 2, NULL       , "SOFTSEEK",           8, 1, 0xc015, 0 },
   { s_cm237 + 3, NULL       , "(",                  1, 1, 0xc032, 0 },
   { s_cm237 + 4, NULL       , "x",                  1, 0, 0xe001, 1 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cr237[ 6 ] = {
   { s_cr237 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr237 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr237 + 3, NULL       , "_SET_SOFTSEEK",     13, 1, 0xc015, 0 },
   { s_cr237 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr237 + 5, NULL       , "x",                  1, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm238[ 8 ] = {
   { s_cm238 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm238 + 2, NULL       , "SOFTSEEK",           8, 1, 0xc015, 0 },
   { NULL       , s_cm238 + 3, "x",                  1, 0, 0xc003, 1 },
   { s_cm238 + 4, NULL       , "ON",                 2, 0, 0xc015, 0 },
   { s_cm238 + 5, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm238 + 6, NULL       , "OFF",                3, 0, 0xc015, 0 },
   { s_cm238 + 7, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { NULL       , NULL       , "&",                  1, 0, 0xc039, 0 }
};
static HB_PP_TOKEN s_cr238[ 6 ] = {
   { s_cr238 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr238 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr238 + 3, NULL       , "_SET_SOFTSEEK",     13, 1, 0xc015, 0 },
   { s_cr238 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr238 + 5, NULL       , "x",                  1, 1, 0xc00e, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm239[ 5 ] = {
   { s_cm239 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm239 + 2, NULL       , "EXCLUSIVE",          9, 1, 0xc015, 0 },
   { s_cm239 + 3, NULL       , "(",                  1, 1, 0xc032, 0 },
   { s_cm239 + 4, NULL       , "x",                  1, 0, 0xe001, 1 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cr239[ 6 ] = {
   { s_cr239 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr239 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr239 + 3, NULL       , "_SET_EXCLUSIVE",    14, 1, 0xc015, 0 },
   { s_cr239 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr239 + 5, NULL       , "x",                  1, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm240[ 8 ] = {
   { s_cm240 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm240 + 2, NULL       , "EXCLUSIVE",          9, 1, 0xc015, 0 },
   { NULL       , s_cm240 + 3, "x",                  1, 0, 0xc003, 1 },
   { s_cm240 + 4, NULL       , "ON",                 2, 0, 0xc015, 0 },
   { s_cm240 + 5, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm240 + 6, NULL       , "OFF",                3, 0, 0xc015, 0 },
   { s_cm240 + 7, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { NULL       , NULL       , "&",                  1, 0, 0xc039, 0 }
};
static HB_PP_TOKEN s_cr240[ 6 ] = {
   { s_cr240 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr240 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr240 + 3, NULL       , "_SET_EXCLUSIVE",    14, 1, 0xc015, 0 },
   { s_cr240 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr240 + 5, NULL       , "x",                  1, 1, 0xc00e, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm241[ 5 ] = {
   { s_cm241 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm241 + 2, NULL       , "FIXED",              5, 1, 0xc015, 0 },
   { s_cm241 + 3, NULL       , "(",                  1, 1, 0xc032, 0 },
   { s_cm241 + 4, NULL       , "x",                  1, 0, 0xe001, 1 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cr241[ 6 ] = {
   { s_cr241 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr241 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr241 + 3, NULL       , "_SET_FIXED",        10, 1, 0xc015, 0 },
   { s_cr241 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr241 + 5, NULL       , "x",                  1, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm242[ 8 ] = {
   { s_cm242 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm242 + 2, NULL       , "FIXED",              5, 1, 0xc015, 0 },
   { NULL       , s_cm242 + 3, "x",                  1, 0, 0xc003, 1 },
   { s_cm242 + 4, NULL       , "ON",                 2, 0, 0xc015, 0 },
   { s_cm242 + 5, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm242 + 6, NULL       , "OFF",                3, 0, 0xc015, 0 },
   { s_cm242 + 7, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { NULL       , NULL       , "&",                  1, 0, 0xc039, 0 }
};
static HB_PP_TOKEN s_cr242[ 6 ] = {
   { s_cr242 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr242 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr242 + 3, NULL       , "_SET_FIXED",        10, 1, 0xc015, 0 },
   { s_cr242 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr242 + 5, NULL       , "x",                  1, 1, 0xc00e, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm243[ 5 ] = {
   { s_cm243 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm243 + 2, NULL       , "EXACT",              5, 1, 0xc015, 0 },
   { s_cm243 + 3, NULL       , "(",                  1, 1, 0xc032, 0 },
   { s_cm243 + 4, NULL       , "x",                  1, 0, 0xe001, 1 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cr243[ 6 ] = {
   { s_cr243 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr243 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr243 + 3, NULL       , "_SET_EXACT",        10, 1, 0xc015, 0 },
   { s_cr243 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr243 + 5, NULL       , "x",                  1, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm244[ 8 ] = {
   { s_cm244 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm244 + 2, NULL       , "EXACT",              5, 1, 0xc015, 0 },
   { NULL       , s_cm244 + 3, "x",                  1, 0, 0xc003, 1 },
   { s_cm244 + 4, NULL       , "ON",                 2, 0, 0xc015, 0 },
   { s_cm244 + 5, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm244 + 6, NULL       , "OFF",                3, 0, 0xc015, 0 },
   { s_cm244 + 7, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { NULL       , NULL       , "&",                  1, 0, 0xc039, 0 }
};
static HB_PP_TOKEN s_cr244[ 6 ] = {
   { s_cr244 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr244 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr244 + 3, NULL       , "_SET_EXACT",        10, 1, 0xc015, 0 },
   { s_cr244 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr244 + 5, NULL       , "x",                  1, 1, 0xc00e, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm245[ 3 ] = {
   { s_cm245 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm245 + 2, NULL       , "PATH",               4, 1, 0xc015, 0 },
   { NULL       , NULL       , "TO",                 2, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr245[ 6 ] = {
   { s_cr245 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr245 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr245 + 3, NULL       , "_SET_PATH",          9, 1, 0xc015, 0 },
   { s_cr245 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr245 + 5, NULL       , "",                   0, 1, 0xc029, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm246[ 4 ] = {
   { s_cm246 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm246 + 2, NULL       , "PATH",               4, 1, 0xc015, 0 },
   { s_cm246 + 3, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { NULL       , NULL       , "pth",                3, 0, 0xe004, 1 }
};
static HB_PP_TOKEN s_cr246[ 6 ] = {
   { s_cr246 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr246 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr246 + 3, NULL       , "_SET_PATH",          9, 1, 0xc015, 0 },
   { s_cr246 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr246 + 5, NULL       , "pth",                3, 1, 0xc00e, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm247[ 3 ] = {
   { s_cm247 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm247 + 2, NULL       , "DEFAULT",            7, 1, 0xc015, 0 },
   { NULL       , NULL       , "TO",                 2, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr247[ 6 ] = {
   { s_cr247 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr247 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr247 + 3, NULL       , "_SET_DEFAULT",      12, 1, 0xc015, 0 },
   { s_cr247 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr247 + 5, NULL       , "",                   0, 1, 0xc029, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm248[ 4 ] = {
   { s_cm248 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm248 + 2, NULL       , "DEFAULT",            7, 1, 0xc015, 0 },
   { s_cm248 + 3, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { NULL       , NULL       , "path",               4, 0, 0xe005, 1 }
};
static HB_PP_TOKEN s_cr248[ 6 ] = {
   { s_cr248 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr248 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr248 + 3, NULL       , "_SET_DEFAULT",      12, 1, 0xc015, 0 },
   { s_cr248 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr248 + 5, NULL       , "path",               4, 1, 0xc00e, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm249[ 3 ] = {
   { s_cm249 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm249 + 2, NULL       , "DECIMALS",           8, 1, 0xc015, 0 },
   { NULL       , NULL       , "TO",                 2, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr249[ 6 ] = {
   { s_cr249 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr249 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr249 + 3, NULL       , "_SET_DECIMALS",     13, 1, 0xc015, 0 },
   { s_cr249 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr249 + 5, NULL       , "0",                  1, 1, 0xc02a, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm250[ 4 ] = {
   { s_cm250 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm250 + 2, NULL       , "DECIMALS",           8, 1, 0xc015, 0 },
   { s_cm250 + 3, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { NULL       , NULL       , "x",                  1, 0, 0xe001, 1 }
};
static HB_PP_TOKEN s_cr250[ 6 ] = {
   { s_cr250 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr250 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr250 + 3, NULL       , "_SET_DECIMALS",     13, 1, 0xc015, 0 },
   { s_cr250 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr250 + 5, NULL       , "x",                  1, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm251[ 4 ] = {
   { s_cm251 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm251 + 2, NULL       , "EPOCH",              5, 1, 0xc015, 0 },
   { s_cm251 + 3, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { NULL       , NULL       , "y",                  1, 0, 0xe001, 1 }
};
static HB_PP_TOKEN s_cr251[ 6 ] = {
   { s_cr251 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr251 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr251 + 3, NULL       , "_SET_EPOCH",        10, 1, 0xc015, 0 },
   { s_cr251 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr251 + 5, NULL       , "y",                  1, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm252[ 6 ] = {
   { s_cm252 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm252 + 2, NULL       , "TIME",               4, 1, 0xc015, 0 },
   { s_cm252 + 3, NULL       , "FORMAT",             6, 1, 0xc015, 0 },
   { s_cm252 + 5, s_cm252 + 4, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "TO",                 2, 0, 0xc015, 0 },
   { NULL       , NULL       , "f",                  1, 0, 0xe001, 1 }
};
static HB_PP_TOKEN s_cr252[ 6 ] = {
   { s_cr252 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr252 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr252 + 3, NULL       , "_SET_TIMEFORMAT",   15, 1, 0xc015, 0 },
   { s_cr252 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr252 + 5, NULL       , "f",                  1, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm253[ 6 ] = {
   { s_cm253 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm253 + 2, NULL       , "DATE",               4, 1, 0xc015, 0 },
   { s_cm253 + 3, NULL       , "FORMAT",             6, 1, 0xc015, 0 },
   { s_cm253 + 5, s_cm253 + 4, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "TO",                 2, 0, 0xc015, 0 },
   { NULL       , NULL       , "f",                  1, 0, 0xe001, 1 }
};
static HB_PP_TOKEN s_cr253[ 6 ] = {
   { s_cr253 + 1, NULL       , "Set",                3, 1, 0xc015, 0 },
   { s_cr253 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr253 + 3, NULL       , "_SET_DATEFORMAT",   15, 1, 0xc015, 0 },
   { s_cr253 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr253 + 5, NULL       , "f",                  1, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm254[ 5 ] = {
   { s_cm254 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm254 + 2, NULL       , "CENTURY",            7, 1, 0xc015, 0 },
   { s_cm254 + 3, NULL       , "(",                  1, 1, 0xc032, 0 },
   { s_cm254 + 4, NULL       , "x",                  1, 0, 0xe001, 1 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cr254[ 4 ] = {
   { s_cr254 + 1, NULL       , "__SetCentury",      12, 1, 0xc015, 0 },
   { s_cr254 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr254 + 3, NULL       , "x",                  1, 1, 0xc00b, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm255[ 8 ] = {
   { s_cm255 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm255 + 2, NULL       , "CENTURY",            7, 1, 0xc015, 0 },
   { NULL       , s_cm255 + 3, "x",                  1, 0, 0xc003, 1 },
   { s_cm255 + 4, NULL       , "ON",                 2, 0, 0xc015, 0 },
   { s_cm255 + 5, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cm255 + 6, NULL       , "OFF",                3, 0, 0xc015, 0 },
   { s_cm255 + 7, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { NULL       , NULL       , "&",                  1, 0, 0xc039, 0 }
};
static HB_PP_TOKEN s_cr255[ 4 ] = {
   { s_cr255 + 1, NULL       , "__SetCentury",      12, 1, 0xc015, 0 },
   { s_cr255 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr255 + 3, NULL       , "x",                  1, 1, 0xc00e, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm256[ 5 ] = {
   { s_cm256 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm256 + 2, NULL       , "DATE",               4, 1, 0xc015, 0 },
   { s_cm256 + 4, s_cm256 + 3, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "TO",                 2, 0, 0xc015, 0 },
   { NULL       , NULL       , "USA",                3, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr256[ 6 ] = {
   { s_cr256 + 1, NULL       , "_DFSET",             6, 1, 0xc015, 0 },
   { s_cr256 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr256 + 3, NULL       , "mm-dd-yyyy",        10, 1, 0xc029, 0 },
   { s_cr256 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr256 + 5, NULL       , "mm-dd-yy",           8, 1, 0xc029, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm257[ 5 ] = {
   { s_cm257 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm257 + 2, NULL       , "DATE",               4, 1, 0xc015, 0 },
   { s_cm257 + 4, s_cm257 + 3, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "TO",                 2, 0, 0xc015, 0 },
   { NULL       , NULL       , "JAPANESE",           8, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr257[ 6 ] = {
   { s_cr257 + 1, NULL       , "_DFSET",             6, 1, 0xc015, 0 },
   { s_cr257 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr257 + 3, NULL       , "yyyy/mm/dd",        10, 1, 0xc029, 0 },
   { s_cr257 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr257 + 5, NULL       , "yy/mm/dd",           8, 1, 0xc029, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm258[ 5 ] = {
   { s_cm258 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm258 + 2, NULL       , "DATE",               4, 1, 0xc015, 0 },
   { s_cm258 + 4, s_cm258 + 3, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "TO",                 2, 0, 0xc015, 0 },
   { NULL       , NULL       , "ITALIAN",            7, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr258[ 6 ] = {
   { s_cr258 + 1, NULL       , "_DFSET",             6, 1, 0xc015, 0 },
   { s_cr258 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr258 + 3, NULL       , "dd-mm-yyyy",        10, 1, 0xc029, 0 },
   { s_cr258 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr258 + 5, NULL       , "dd-mm-yy",           8, 1, 0xc029, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm259[ 5 ] = {
   { s_cm259 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm259 + 2, NULL       , "DATE",               4, 1, 0xc015, 0 },
   { s_cm259 + 4, s_cm259 + 3, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "TO",                 2, 0, 0xc015, 0 },
   { NULL       , NULL       , "GERMAN",             6, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr259[ 6 ] = {
   { s_cr259 + 1, NULL       , "_DFSET",             6, 1, 0xc015, 0 },
   { s_cr259 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr259 + 3, NULL       , "dd.mm.yyyy",        10, 1, 0xc029, 0 },
   { s_cr259 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr259 + 5, NULL       , "dd.mm.yy",           8, 1, 0xc029, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm260[ 5 ] = {
   { s_cm260 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm260 + 2, NULL       , "DATE",               4, 1, 0xc015, 0 },
   { s_cm260 + 4, s_cm260 + 3, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "TO",                 2, 0, 0xc015, 0 },
   { NULL       , NULL       , "FRENCH",             6, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr260[ 6 ] = {
   { s_cr260 + 1, NULL       , "_DFSET",             6, 1, 0xc015, 0 },
   { s_cr260 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr260 + 3, NULL       , "dd/mm/yyyy",        10, 1, 0xc029, 0 },
   { s_cr260 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr260 + 5, NULL       , "dd/mm/yy",           8, 1, 0xc029, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm261[ 5 ] = {
   { s_cm261 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm261 + 2, NULL       , "DATE",               4, 1, 0xc015, 0 },
   { s_cm261 + 4, s_cm261 + 3, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "TO",                 2, 0, 0xc015, 0 },
   { NULL       , NULL       , "BRITISH",            7, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr261[ 6 ] = {
   { s_cr261 + 1, NULL       , "_DFSET",             6, 1, 0xc015, 0 },
   { s_cr261 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr261 + 3, NULL       , "dd/mm/yyyy",        10, 1, 0xc029, 0 },
   { s_cr261 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr261 + 5, NULL       , "dd/mm/yy",           8, 1, 0xc029, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm262[ 5 ] = {
   { s_cm262 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm262 + 2, NULL       , "DATE",               4, 1, 0xc015, 0 },
   { s_cm262 + 4, s_cm262 + 3, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "TO",                 2, 0, 0xc015, 0 },
   { NULL       , NULL       , "ANSI",               4, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr262[ 6 ] = {
   { s_cr262 + 1, NULL       , "_DFSET",             6, 1, 0xc015, 0 },
   { s_cr262 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr262 + 3, NULL       , "yyyy.mm.dd",        10, 1, 0xc029, 0 },
   { s_cr262 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr262 + 5, NULL       , "yy.mm.dd",           8, 1, 0xc029, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm263[ 5 ] = {
   { s_cm263 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm263 + 2, NULL       , "DATE",               4, 1, 0xc015, 0 },
   { s_cm263 + 4, s_cm263 + 3, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "TO",                 2, 0, 0xc015, 0 },
   { NULL       , NULL       , "AMERICAN",           8, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr263[ 6 ] = {
   { s_cr263 + 1, NULL       , "_DFSET",             6, 1, 0xc015, 0 },
   { s_cr263 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr263 + 3, NULL       , "mm/dd/yyyy",        10, 1, 0xc029, 0 },
   { s_cr263 + 4, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { s_cr263 + 5, NULL       , "mm/dd/yy",           8, 1, 0xc029, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm264[ 3 ] = {
   { s_cm264 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm264 + 2, NULL       , "FORMAT",             6, 1, 0xc015, 0 },
   { NULL       , NULL       , "TO",                 2, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr264[ 3 ] = {
   { s_cr264 + 1, NULL       , "__SetFormat",       11, 1, 0xc015, 0 },
   { s_cr264 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { NULL       , NULL       , ")",                  1, 0, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm265[ 5 ] = {
   { s_cm265 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm265 + 2, NULL       , "FORMAT",             6, 1, 0xc015, 0 },
   { s_cm265 + 3, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { NULL       , s_cm265 + 4, "id",                 2, 0, 0xc003, 1 },
   { NULL       , NULL       , "&",                  1, 0, 0xc039, 0 }
};
static HB_PP_TOKEN s_cr265[ 27 ] = {
   { s_cr265 + 1, NULL       , "if",                 2, 1, 0xc015, 0 },
   { s_cr265 + 2, NULL       , "(",                  1, 1, 0xc032, 0 },
   { s_cr265 + 3, NULL       , "Empty",              5, 1, 0xc015, 0 },
   { s_cr265 + 4, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr265 + 5, NULL       , "id",                 2, 1, 0xc00e, 1 },
   { s_cr265 + 6, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr265 + 7, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr265 + 8, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr265 + 9, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cr265 +10, NULL       , "FORMAT",             6, 1, 0xc015, 0 },
   { s_cr265 +11, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { s_cr265 +12, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr265 +13, NULL       , "else",               4, 1, 0xc015, 0 },
   { s_cr265 +14, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr265 +15, NULL       , "__SetFormat",       11, 1, 0xc015, 0 },
   { s_cr265 +16, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr265 +17, NULL       , "&",                  1, 1, 0xc039, 0 },
   { s_cr265 +18, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr265 +19, NULL       , "{||",                3, 1, 0xc029, 0 },
   { s_cr265 +20, NULL       , "+",                  1, 1, 0xc050, 0 },
   { s_cr265 +21, NULL       , "id",                 2, 1, 0xc00e, 1 },
   { s_cr265 +22, NULL       , "+",                  1, 1, 0xc050, 0 },
   { s_cr265 +23, NULL       , "()}",                3, 1, 0xc029, 0 },
   { s_cr265 +24, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr265 +25, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr265 +26, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { NULL       , NULL       , "end",                3, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cm266[ 6 ] = {
   { s_cm266 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm266 + 2, NULL       , "FORMAT",             6, 1, 0xc015, 0 },
   { s_cm266 + 3, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { s_cm266 + 4, NULL       , "id",                 2, 0, 0xe001, 1 },
   { s_cm266 + 5, NULL       , ".",                  1, 0, 0xc01c, 0 },
   { NULL       , NULL       , "ext",                3, 0, 0xe001, 2 }
};
static HB_PP_TOKEN s_cr266[ 19 ] = {
   { s_cr266 + 1, NULL       , "_ProcReq_",          9, 1, 0xc015, 0 },
   { s_cr266 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr266 + 3, NULL       , "id",                 2, 1, 0xc00e, 1 },
   { s_cr266 + 4, NULL       , "+",                  1, 1, 0xc050, 0 },
   { s_cr266 + 5, NULL       , ".",                  1, 1, 0xc029, 0 },
   { s_cr266 + 6, NULL       , "+",                  1, 1, 0xc050, 0 },
   { s_cr266 + 7, NULL       , "ext",                3, 1, 0xc00e, 2 },
   { s_cr266 + 8, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr266 + 9, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr266 +10, NULL       , "__SetFormat",       11, 1, 0xc015, 0 },
   { s_cr266 +11, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr266 +12, NULL       , "{",                  1, 1, 0xc036, 0 },
   { s_cr266 +13, NULL       , "|",                  1, 0, 0xc01b, 0 },
   { s_cr266 +14, NULL       , "|",                  1, 0, 0xc01b, 0 },
   { s_cr266 +15, NULL       , "id",                 2, 1, 0xc00b, 1 },
   { s_cr266 +16, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr266 +17, NULL       , ")",                  1, 0, 0xc033, 0 },
   { s_cr266 +18, NULL       , "}",                  1, 1, 0xc037, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm267[ 4 ] = {
   { s_cm267 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm267 + 2, NULL       , "FORMAT",             6, 1, 0xc015, 0 },
   { s_cm267 + 3, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { NULL       , NULL       , "id",                 2, 0, 0xe001, 1 }
};
static HB_PP_TOKEN s_cr267[ 17 ] = {
   { s_cr267 + 1, NULL       , "_ProcReq_",          9, 1, 0xc015, 0 },
   { s_cr267 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr267 + 3, NULL       , "id",                 2, 1, 0xc00e, 1 },
   { s_cr267 + 4, NULL       , "+",                  1, 1, 0xc050, 0 },
   { s_cr267 + 5, NULL       , ".fmt",               4, 1, 0xc029, 0 },
   { s_cr267 + 6, NULL       , ")",                  1, 1, 0xc033, 0 },
   { s_cr267 + 7, NULL       , ";",                  1, 1, 0xc01e, 0 },
   { s_cr267 + 8, NULL       , "__SetFormat",       11, 1, 0xc015, 0 },
   { s_cr267 + 9, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr267 +10, NULL       , "{",                  1, 1, 0xc036, 0 },
   { s_cr267 +11, NULL       , "|",                  1, 0, 0xc01b, 0 },
   { s_cr267 +12, NULL       , "|",                  1, 0, 0xc01b, 0 },
   { s_cr267 +13, NULL       , "id",                 2, 1, 0xc00b, 1 },
   { s_cr267 +14, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr267 +15, NULL       , ")",                  1, 0, 0xc033, 0 },
   { s_cr267 +16, NULL       , "}",                  1, 1, 0xc037, 0 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm268[ 4 ] = {
   { s_cm268 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm268 + 2, NULL       , "PROCEDURE",          9, 1, 0xc015, 0 },
   { s_cm268 + 3, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { NULL       , NULL       , "f",                  1, 0, 0xe001, 1 }
};
static HB_PP_TOKEN s_cr268[ 4 ] = {
   { s_cr268 + 1, NULL       , "_ProcReq_",          9, 1, 0xc015, 0 },
   { s_cr268 + 2, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cr268 + 3, NULL       , "f",                  1, 1, 0xc00e, 1 },
   { NULL       , NULL       , ")",                  1, 1, 0xc033, 0 }
};
static HB_PP_TOKEN s_cm269[ 3 ] = {
   { s_cm269 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm269 + 2, NULL       , "PROCEDURE",          9, 1, 0xc015, 0 },
   { NULL       , NULL       , "TO",                 2, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cm270[ 3 ] = {
   { s_cm270 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm270 + 2, NULL       , "TALK",               4, 1, 0xc015, 0 },
   { NULL       , NULL       , "x",                  1, 0, 0xe004, 0 }
};
static HB_PP_TOKEN s_cm271[ 3 ] = {
   { s_cm271 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm271 + 2, NULL       , "SAFETY",             6, 1, 0xc015, 0 },
   { NULL       , NULL       , "x",                  1, 0, 0xe004, 0 }
};
static HB_PP_TOKEN s_cm272[ 3 ] = {
   { s_cm272 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm272 + 2, NULL       , "STEP",               4, 1, 0xc015, 0 },
   { NULL       , NULL       , "x",                  1, 0, 0xe004, 0 }
};
static HB_PP_TOKEN s_cm273[ 3 ] = {
   { s_cm273 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm273 + 2, NULL       , "STATUS",             6, 1, 0xc015, 0 },
   { NULL       , NULL       , "x",                  1, 0, 0xe004, 0 }
};
static HB_PP_TOKEN s_cm274[ 3 ] = {
   { s_cm274 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm274 + 2, NULL       , "MENU",               4, 1, 0xc015, 0 },
   { NULL       , NULL       , "x",                  1, 0, 0xe004, 0 }
};
static HB_PP_TOKEN s_cm275[ 3 ] = {
   { s_cm275 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm275 + 2, NULL       , "HEADING",            7, 1, 0xc015, 0 },
   { NULL       , NULL       , "x",                  1, 0, 0xe004, 0 }
};
static HB_PP_TOKEN s_cm276[ 3 ] = {
   { s_cm276 + 1, NULL       , "SET",                3, 1, 0xc015, 0 },
   { s_cm276 + 2, NULL       , "ECHO",               4, 1, 0xc015, 0 },
   { NULL       , NULL       , "x",                  1, 0, 0xe004, 0 }
};
static HB_PP_TOKEN s_cm277[ 7 ] = {
   { s_cm277 + 1, NULL       , "STORE",              5, 1, 0xc015, 0 },
   { s_cm277 + 2, NULL       , "v",                  1, 0, 0xe001, 3 },
   { s_cm277 + 3, NULL       , "TO",                 2, 1, 0xc015, 0 },
   { s_cm277 + 4, NULL       , "v1",                 2, 0, 0xe001, 1 },
   { NULL       , s_cm277 + 5, "[",                  1, 1, 0xe007, 0 },
   { s_cm277 + 6, NULL       , ",",                  1, 0, 0xc01d, 0 },
   { NULL       , NULL       , "vN",                 2, 0, 0xe001, 2 }
};
static HB_PP_TOKEN s_cr277[ 6 ] = {
   { s_cr277 + 1, NULL       , "v1",                 2, 1, 0xc00b, 1 },
   { s_cr277 + 2, NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { s_cr277 + 5, s_cr277 + 3, "[",                  1, 1, 0xc012, 0 },
   { s_cr277 + 4, NULL       , "vN",                 2, 1, 0xc00b, 2 },
   { NULL       , NULL       , ":=",                 2, 1, 0xc03c, 0 },
   { NULL       , NULL       , "v",                  1, 1, 0xc00b, 3 }
};
static HB_PP_TOKEN s_cm278[ 7 ] = {
   { s_cm278 + 1, NULL       , "CALL",               4, 1, 0xc015, 0 },
   { s_cm278 + 2, NULL       , "proc",               4, 0, 0xe001, 1 },
   { s_cm278 + 3, NULL       , "(",                  1, 0, 0xc032, 0 },
   { s_cm278 + 4, NULL       , ")",                  1, 0, 0xc033, 0 },
   { NULL       , s_cm278 + 5, "[",                  1, 1, 0xe007, 0 },
   { s_cm278 + 6, NULL       , "WITH",               4, 0, 0xc015, 0 },
   { NULL       , NULL       , "p",                  1, 0, 0xe002, 2 }
};
static HB_PP_TOKEN s_cr278[ 5 ] = {
   { s_cr278 + 1, NULL       , "call",               4, 1, 0xc015, 0 },
   { s_cr278 + 2, NULL       , "proc",               4, 1, 0xc00b, 1 },
   { NULL       , s_cr278 + 3, "[",                  1, 1, 0xc012, 0 },
   { s_cr278 + 4, NULL       , "WITH",               4, 1, 0xc015, 0 },
   { NULL       , NULL       , "p",                  1, 1, 0xc00b, 2 }
};
static HB_PP_TOKEN s_cm279[ 7 ] = {
   { s_cm279 + 1, NULL       , "DO",                 2, 1, 0xc015, 0 },
   { s_cm279 + 2, NULL       , "proc",               4, 0, 0xe001, 1 },
   { s_cm279 + 3, NULL       , ".",                  1, 0, 0xc01c, 0 },
   { s_cm279 + 4, NULL       , "prg",                3, 0, 0xc015, 0 },
   { NULL       , s_cm279 + 5, "[",                  1, 1, 0xe007, 0 },
   { s_cm279 + 6, NULL       , "WITH",               4, 0, 0xc015, 0 },
   { NULL       , NULL       , "p",                  1, 0, 0xe002, 2 }
};
static HB_PP_TOKEN s_cr279[ 5 ] = {
   { s_cr279 + 1, NULL       , "do",                 2, 1, 0xc015, 0 },
   { s_cr279 + 2, NULL       , "proc",               4, 1, 0xc00b, 1 },
   { NULL       , s_cr279 + 3, "[",                  1, 1, 0xc012, 0 },
   { s_cr279 + 4, NULL       , "WITH",               4, 1, 0xc015, 0 },
   { NULL       , NULL       , "p",                  1, 1, 0xc00b, 2 }
};
static HB_PP_TOKEN s_cm280[ 8 ] = {
   { s_cm280 + 1, NULL       , "NEXT",               4, 1, 0xc015, 0 },
   { s_cm280 + 2, NULL       , "v",                  1, 0, 0xe001, 0 },
   { s_cm280 + 5, s_cm280 + 3, "[",                  1, 1, 0xe007, 0 },
   { s_cm280 + 4, NULL       , "TO",                 2, 0, 0xc015, 0 },
   { NULL       , NULL       , "x",                  1, 0, 0xe001, 0 },
   { NULL       , s_cm280 + 6, "[",                  1, 1, 0xe007, 0 },
   { s_cm280 + 7, NULL       , "STEP",               4, 0, 0xc015, 0 },
   { NULL       , NULL       , "s",                  1, 0, 0xe001, 0 }
};
static HB_PP_TOKEN s_cr280[ 1 ] = {
   { NULL       , NULL       , "next",               4, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cm281[ 3 ] = {
   { s_cm281 + 1, NULL       , "ENDFOR",             6, 1, 0xc015, 0 },
   { NULL       , s_cm281 + 2, "[",                  1, 1, 0xe007, 0 },
   { NULL       , NULL       , "x",                  1, 0, 0xe004, 0 }
};
static HB_PP_TOKEN s_cr281[ 1 ] = {
   { NULL       , NULL       , "next",               4, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cm282[ 2 ] = {
   { s_cm282 + 1, NULL       , "ENDCASE",            7, 1, 0xc015, 0 },
   { NULL       , NULL       , "x",                  1, 0, 0xe004, 0 }
};
static HB_PP_TOKEN s_cr282[ 1 ] = {
   { NULL       , NULL       , "endcase",            7, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cm283[ 2 ] = {
   { s_cm283 + 1, NULL       , "ENDIF",              5, 1, 0xc015, 0 },
   { NULL       , NULL       , "x",                  1, 0, 0xe004, 0 }
};
static HB_PP_TOKEN s_cr283[ 1 ] = {
   { NULL       , NULL       , "endif",              5, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cm284[ 2 ] = {
   { s_cm284 + 1, NULL       , "ENDDO",              5, 1, 0xc015, 0 },
   { NULL       , NULL       , "x",                  1, 0, 0xe004, 0 }
};
static HB_PP_TOKEN s_cr284[ 1 ] = {
   { NULL       , NULL       , "enddo",              5, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cm285[ 2 ] = {
   { s_cm285 + 1, NULL       , "END",                3, 1, 0xc015, 0 },
   { NULL       , NULL       , "x",                  1, 0, 0xe001, 0 }
};
static HB_PP_TOKEN s_cr285[ 1 ] = {
   { NULL       , NULL       , "end",                3, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cm286[ 3 ] = {
   { s_cm286 + 1, NULL       , "DO",                 2, 1, 0xc015, 0 },
   { s_cm286 + 2, NULL       , "WHILE",              5, 1, 0xc015, 0 },
   { NULL       , NULL       , "exp",                3, 0, 0xe001, 1 }
};
static HB_PP_TOKEN s_cr286[ 2 ] = {
   { s_cr286 + 1, NULL       , "while",              5, 1, 0xc015, 0 },
   { NULL       , NULL       , "exp",                3, 1, 0xc00b, 1 }
};
static HB_PP_TOKEN s_cm287[ 2 ] = {
   { s_cm287 + 1, NULL       , "END",                3, 1, 0xc015, 0 },
   { NULL       , NULL       , "OBJECT",             6, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr287[ 1 ] = {
   { NULL       , NULL       , "endwith",            7, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cm288[ 2 ] = {
   { s_cm288 + 1, NULL       , "END",                3, 1, 0xc015, 0 },
   { NULL       , NULL       , "WITH",               4, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr288[ 1 ] = {
   { NULL       , NULL       , "endwith",            7, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cm289[ 2 ] = {
   { s_cm289 + 1, NULL       , "END",                3, 1, 0xc015, 0 },
   { NULL       , NULL       , "SWITCH",             6, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr289[ 1 ] = {
   { NULL       , NULL       , "endswitch",          9, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cm290[ 2 ] = {
   { s_cm290 + 1, NULL       , "END",                3, 1, 0xc015, 0 },
   { NULL       , NULL       , "SEQUENCE",           8, 1, 0xc015, 0 }
};
static HB_PP_TOKEN s_cr290[ 1 ] = {
   { NULL       , NULL       , "endsequence",       11, 1, 0xc015, 0 }
};
static const HB_PP_DEFRULE s_cmd[ 290 ] = {
   { s_cm001, s_cr001, 2, 1, 0x0000 },
   { s_cm002, s_cr002, 2, 1, 0x0000 },
   { s_cm003, s_cr003, 2, 1, 0x0000 },
   { s_cm004, s_cr004, 2, 0, 0x0000 },
   { s_cm005, s_cr005, 2, 1, 0x0000 },
   { s_cm006, s_cr006, 2, 1, 0x0000 },
   { s_cm007, s_cr007, 2, 1, 0x0000 },
   { s_cm008, s_cr008, 2, 1, 0x0000 },
   { s_cm009, s_cr009, 2, 1, 0x0000 },
   { s_cm010, s_cr010, 2, 1, 0x0000 },
   { s_cm011, s_cr011, 2,12, 0x0e00 },
   { s_cm012, s_cr012, 2,11, 0x0700 },
   { s_cm013, s_cr013, 2,15, 0x6000 },
   { s_cm014, s_cr014, 2,20, 0xc0000 },
   { s_cm015, s_cr015, 2,18, 0x30000 },
   { s_cm016, s_cr016, 2,14, 0x3000 },
   { s_cm017, s_cr017, 2, 9, 0x01c0 },
   { s_cm018, s_cr018, 2, 5, 0x0000 },
   { s_cm019, s_cr019, 2, 5, 0x0000 },
   { s_cm020, s_cr020, 2, 6, 0x0028 },
   { s_cm021, s_cr021, 2, 7, 0x0048 },
   { s_cm022, s_cr022, 2, 6, 0x0028 },
   { s_cm023, s_cr023, 1, 2, 0x0003 },
   { s_cm024, s_cr024, 2, 0, 0x0000 },
   { s_cm025, s_cr025, 2, 0, 0x0000 },
   { s_cm026, s_cr026, 2, 0, 0x0000 },
   { s_cm027, s_cr027, 2, 0, 0x0000 },
   { s_cm028, s_cr028, 2, 3, 0x0000 },
   { s_cm029, s_cr029, 2, 3, 0x0000 },
   { s_cm030, s_cr030, 2,20, 0x8ff82 },
   { s_cm031, s_cr031, 2,20, 0x8ff82 },
   { s_cm032, s_cr032, 2, 4, 0x000c },
   { s_cm033, s_cr033, 2,10, 0x0000 },
   { s_cm034, s_cr034, 2,13, 0x0000 },
   { s_cm035, s_cr035, 2,10, 0x0000 },
   { s_cm036, s_cr036, 2, 9, 0x0000 },
   { s_cm037, s_cr037, 2, 9, 0x000a },
   { s_cm038, s_cr038, 2, 9, 0x000a },
   { s_cm039, s_cr039, 2, 6, 0x0000 },
   { s_cm040, s_cr040, 2, 6, 0x0000 },
   { s_cm041, s_cr041, 2, 7, 0x0060 },
   { s_cm042, s_cr042, 2,10, 0x0000 },
   { s_cm043, s_cr043, 2, 9, 0x0000 },
   { s_cm044, s_cr044, 2, 9, 0x0000 },
   { s_cm045, s_cr045, 2, 8, 0x0000 },
   { s_cm046, s_cr046, 2, 9, 0x0000 },
   { s_cm047, s_cr047, 2, 9, 0x0000 },
   { s_cm048, s_cr048, 2, 8, 0x0000 },
   { s_cm049, s_cr049, 2, 9, 0x0000 },
   { s_cm050, s_cr050, 2, 2, 0x0000 },
   { s_cm051, s_cr051, 2, 1, 0x0000 },
   { s_cm052, s_cr052, 2, 6, 0x0020 },
   { s_cm053, s_cr053, 2, 0, 0x0000 },
   { s_cm054, s_cr054, 2, 5, 0x0000 },
   { s_cm055, s_cr055, 2, 0, 0x0000 },
   { s_cm056, s_cr056, 2, 5, 0x0000 },
   { s_cm057, s_cr057, 2, 4, 0x000c },
   { s_cm058, s_cr058, 2, 9, 0x000c },
   { s_cm059, s_cr059, 2, 1, 0x0000 },
   { s_cm060, s_cr060, 2, 1, 0x0000 },
   { s_cm061, s_cr061, 2, 0, 0x0000 },
   { s_cm062, s_cr062, 2, 7, 0x0070 },
   { s_cm063, s_cr063, 2, 0, 0x0000 },
   { s_cm064, s_cr064, 2, 5, 0x0000 },
   { s_cm065, s_cr065, 2, 3, 0x0000 },
   { s_cm066, s_cr066, 2, 0, 0x0000 },
   { s_cm067, s_cr067, 2, 1, 0x0000 },
   { s_cm068, s_cr068, 2, 1, 0x0000 },
   { s_cm069, s_cr069, 2, 1, 0x0000 },
   { s_cm070, s_cr070, 2, 2, 0x0000 },
   { s_cm071, s_cr071, 2, 1, 0x0000 },
   { s_cm072, s_cr072, 2, 1, 0x0000 },
   { s_cm073, s_cr073, 2, 0, 0x0000 },
   { s_cm074, s_cr074, 2, 0, 0x0000 },
   { s_cm075, s_cr075, 2, 0, 0x0000 },
   { s_cm076, s_cr076, 2, 0, 0x0000 },
   { s_cm077, s_cr077, 2, 0, 0x0000 },
   { s_cm078, s_cr078, 2, 1, 0x0000 },
   { s_cm079, s_cr079, 2, 1, 0x0000 },
   { s_cm080, s_cr080, 2, 0, 0x0000 },
   { s_cm081, s_cr081, 2, 0, 0x0000 },
   { s_cm082, s_cr082, 2, 0, 0x0000 },
   { s_cm083, s_cr083, 2, 0, 0x0000 },
   { s_cm084, s_cr084, 2, 0, 0x0000 },
   { s_cm085, s_cr085, 2, 0, 0x0000 },
   { s_cm086, s_cr086, 2,10, 0x0380 },
   { s_cm087, s_cr087, 2, 0, 0x0000 },
   { s_cm088, s_cr088, 2, 2, 0x0000 },
   { s_cm089, s_cr089, 2, 1, 0x0000 },
   { s_cm090, s_cr090, 2, 0, 0x0000 },
   { s_cm091, s_cr091, 2, 0, 0x0000 },
   { s_cm092, s_cr092, 2, 0, 0x0000 },
   { s_cm093, NULL   , 2, 0, 0x0000 },
   { s_cm094, s_cr094, 2, 0, 0x0000 },
   { s_cm095, s_cr095, 2, 0, 0x0000 },
   { s_cm096, s_cr096, 2, 0, 0x0000 },
   { s_cm097, s_cr097, 2, 0, 0x0000 },
   { s_cm098, s_cr098, 2, 0, 0x0000 },
   { s_cm099, s_cr099, 2, 1, 0x0000 },
   { s_cm100, s_cr100, 2, 1, 0x0000 },
   { s_cm101, s_cr101, 2, 1, 0x0000 },
   { s_cm102, s_cr102, 2, 1, 0x0000 },
   { s_cm103, s_cr103, 2, 1, 0x0000 },
   { s_cm104, s_cr104, 2, 1, 0x0000 },
   { s_cm105, s_cr105, 2, 0, 0x0000 },
   { s_cm106, s_cr106, 2, 0, 0x0000 },
   { s_cm107, s_cr107, 2, 1, 0x0000 },
   { s_cm108, s_cr108, 2, 2, 0x0000 },
   { s_cm109, s_cr109, 2, 3, 0x0004 },
   { s_cm110, s_cr110, 2, 1, 0x0000 },
   { s_cm111, s_cr111, 2, 2, 0x0000 },
   { s_cm112, s_cr112, 2, 2, 0x0000 },
   { s_cm113, s_cr113, 2, 1, 0x0000 },
   { s_cm114, s_cr114, 2, 1, 0x0000 },
   { s_cm115, s_cr115, 2, 1, 0x0000 },
   { s_cm116, s_cr116, 2, 2, 0x0000 },
   { s_cm117, s_cr117, 2, 2, 0x0000 },
   { s_cm118, s_cr118, 2, 2, 0x0000 },
   { s_cm119, s_cr119, 2, 2, 0x0000 },
   { s_cm120, s_cr120, 2, 2, 0x0000 },
   { s_cm121, s_cr121, 2, 1, 0x0000 },
   { s_cm122, s_cr122, 2, 2, 0x0000 },
   { s_cm123, s_cr123, 2, 2, 0x0000 },
   { s_cm124, s_cr124, 2, 2, 0x0000 },
   { s_cm125, s_cr125, 2, 2, 0x0000 },
   { s_cm126, s_cr126, 2, 2, 0x0000 },
   { s_cm127, s_cr127, 2, 1, 0x0000 },
   { s_cm128, s_cr128, 2, 1, 0x0000 },
   { s_cm129, s_cr129, 2, 0, 0x0000 },
   { s_cm130, s_cr130, 2, 1, 0x0000 },
   { s_cm131, s_cr131, 2, 0, 0x0000 },
   { s_cm132, s_cr132, 2, 0, 0x0000 },
   { s_cm133, s_cr133, 2, 1, 0x0000 },
   { s_cm134, s_cr134, 2, 2, 0x0000 },
   { s_cm135, s_cr135, 2, 2, 0x0000 },
   { s_cm136, s_cr136, 2, 2, 0x0000 },
   { s_cm137, s_cr137, 2, 1, 0x0000 },
   { s_cm138, s_cr138, 2, 1, 0x0000 },
   { s_cm139, s_cr139, 2, 4, 0x0000 },
   { s_cm140, s_cr140, 2, 4, 0x0008 },
   { s_cm141, s_cr141, 2, 5, 0x0010 },
   { s_cm142, s_cr142, 2, 5, 0x0010 },
   { s_cm143, s_cr143, 2, 5, 0x0010 },
   { s_cm144, s_cr144, 2, 6, 0x0020 },
   { s_cm145, s_cr145, 2, 4, 0x0000 },
   { s_cm146, s_cr146, 2, 2, 0x0000 },
   { s_cm147, s_cr147, 2, 2, 0x0000 },
   { s_cm148, s_cr148, 2, 1, 0x0000 },
   { s_cm149, s_cr149, 2, 1, 0x0000 },
   { s_cm150, s_cr150, 2, 0, 0x0000 },
   { s_cm151, s_cr151, 2, 0, 0x0000 },
   { s_cm152, s_cr152, 2, 0, 0x0000 },
   { s_cm153, s_cr153, 2, 0, 0x0000 },
   { s_cm154, NULL   , 1, 0, 0x0000 },
   { s_cm155, s_cr155, 2, 0, 0x0000 },
   { s_cm156, s_cr156, 2, 1, 0x0000 },
   { s_cm157, s_cr157, 2, 0, 0x0000 },
   { s_cm158, s_cr158, 2, 0, 0x0000 },
   { s_cm159, s_cr159, 2, 1, 0x0000 },
   { s_cm160, s_cr160, 2, 1, 0x0000 },
   { s_cm161, s_cr161, 2, 1, 0x0000 },
   { s_cm162, s_cr162, 2, 1, 0x0000 },
   { s_cm163, s_cr163, 2, 1, 0x0000 },
   { s_cm164, s_cr164, 2, 1, 0x0000 },
   { s_cm165, s_cr165, 2, 1, 0x0000 },
   { s_cm166, s_cr166, 2, 1, 0x0000 },
   { s_cm167, s_cr167, 2, 1, 0x0000 },
   { s_cm168, s_cr168, 2, 1, 0x0000 },
   { s_cm169, s_cr169, 2, 1, 0x0000 },
   { s_cm170, s_cr170, 2, 1, 0x0000 },
   { s_cm171, s_cr171, 2, 0, 0x0000 },
   { s_cm172, s_cr172, 2, 1, 0x0000 },
   { s_cm173, s_cr173, 2, 0, 0x0000 },
   { s_cm174, s_cr174, 2, 0, 0x0000 },
   { s_cm175, s_cr175, 2, 0, 0x0000 },
   { s_cm176, s_cr176, 2, 0, 0x0000 },
   { s_cm177, s_cr177, 2, 1, 0x0000 },
   { s_cm178, s_cr178, 2, 1, 0x0000 },
   { s_cm179, s_cr179, 2, 2, 0x0000 },
   { s_cm180, s_cr180, 2, 0, 0x0000 },
   { s_cm181, s_cr181, 2, 1, 0x0000 },
   { s_cm182, s_cr182, 2, 0, 0x0000 },
   { s_cm183, s_cr183, 2, 1, 0x0000 },
   { s_cm184, s_cr184, 2, 0, 0x0000 },
   { s_cm185, s_cr185, 2, 1, 0x0000 },
   { s_cm186, s_cr186, 2, 1, 0x0000 },
   { s_cm187, s_cr187, 2, 2, 0x0000 },
   { s_cm188, s_cr188, 2, 1, 0x0000 },
   { s_cm189, s_cr189, 2, 2, 0x0000 },
   { s_cm190, s_cr190, 2, 2, 0x0000 },
   { s_cm191, s_cr191, 2, 2, 0x0000 },
   { s_cm192, s_cr192, 2, 1, 0x0000 },
   { s_cm193, s_cr193, 2, 0, 0x0000 },
   { s_cm194, s_cr194, 2, 2, 0x0000 },
   { s_cm195, s_cr195, 2, 3, 0x0006 },
   { s_cm196, s_cr196, 2, 2, 0x0002 },
   { s_cm197, s_cr197, 2, 2, 0x0002 },
   { s_cm198, s_cr198, 2, 1, 0x0001 },
   { s_cm199, s_cr199, 2, 1, 0x0000 },
   { s_cm200, s_cr200, 2, 1, 0x0000 },
   { s_cm201, s_cr201, 2, 0, 0x0000 },
   { s_cm202, s_cr202, 2, 0, 0x0000 },
   { s_cm203, s_cr203, 2, 0, 0x0000 },
   { s_cm204, s_cr204, 2, 1, 0x0000 },
   { s_cm205, s_cr205, 2, 1, 0x0000 },
   { s_cm206, s_cr206, 2, 1, 0x0000 },
   { s_cm207, s_cr207, 2, 2, 0x0000 },
   { s_cm208, s_cr208, 2, 0, 0x0000 },
   { s_cm209, s_cr209, 2, 1, 0x0000 },
   { s_cm210, s_cr210, 2, 1, 0x0000 },
   { s_cm211, s_cr211, 2, 2, 0x0000 },
   { s_cm212, s_cr212, 2, 0, 0x0000 },
   { s_cm213, s_cr213, 2, 1, 0x0000 },
   { s_cm214, s_cr214, 2, 1, 0x0000 },
   { s_cm215, s_cr215, 2, 0, 0x0000 },
   { s_cm216, s_cr216, 2, 1, 0x0000 },
   { s_cm217, s_cr217, 2, 1, 0x0000 },
   { s_cm218, s_cr218, 2, 1, 0x0000 },
   { s_cm219, s_cr219, 2, 1, 0x0000 },
   { s_cm220, s_cr220, 2, 1, 0x0000 },
   { s_cm221, s_cr221, 2, 1, 0x0000 },
   { s_cm222, s_cr222, 2, 1, 0x0000 },
   { s_cm223, s_cr223, 2, 1, 0x0000 },
   { s_cm224, s_cr224, 2, 1, 0x0000 },
   { s_cm225, s_cr225, 2, 1, 0x0000 },
   { s_cm226, s_cr226, 2, 1, 0x0000 },
   { s_cm227, s_cr227, 2, 1, 0x0000 },
   { s_cm228, s_cr228, 2, 1, 0x0000 },
   { s_cm229, s_cr229, 2, 1, 0x0000 },
   { s_cm230, s_cr230, 2, 1, 0x0000 },
   { s_cm231, s_cr231, 2, 1, 0x0000 },
   { s_cm232, s_cr232, 2, 1, 0x0000 },
   { s_cm233, s_cr233, 2, 1, 0x0000 },
   { s_cm234, s_cr234, 2, 1, 0x0000 },
   { s_cm235, s_cr235, 2, 1, 0x0000 },
   { s_cm236, s_cr236, 2, 1, 0x0000 },
   { s_cm237, s_cr237, 2, 1, 0x0000 },
   { s_cm238, s_cr238, 2, 1, 0x0000 },
   { s_cm239, s_cr239, 2, 1, 0x0000 },
   { s_cm240, s_cr240, 2, 1, 0x0000 },
   { s_cm241, s_cr241, 2, 1, 0x0000 },
   { s_cm242, s_cr242, 2, 1, 0x0000 },
   { s_cm243, s_cr243, 2, 1, 0x0000 },
   { s_cm244, s_cr244, 2, 1, 0x0000 },
   { s_cm245, s_cr245, 2, 0, 0x0000 },
   { s_cm246, s_cr246, 2, 1, 0x0000 },
   { s_cm247, s_cr247, 2, 0, 0x0000 },
   { s_cm248, s_cr248, 2, 1, 0x0000 },
   { s_cm249, s_cr249, 2, 0, 0x0000 },
   { s_cm250, s_cr250, 2, 1, 0x0000 },
   { s_cm251, s_cr251, 2, 1, 0x0000 },
   { s_cm252, s_cr252, 2, 1, 0x0000 },
   { s_cm253, s_cr253, 2, 1, 0x0000 },
   { s_cm254, s_cr254, 2, 1, 0x0000 },
   { s_cm255, s_cr255, 2, 1, 0x0000 },
   { s_cm256, s_cr256, 2, 0, 0x0000 },
   { s_cm257, s_cr257, 2, 0, 0x0000 },
   { s_cm258, s_cr258, 2, 0, 0x0000 },
   { s_cm259, s_cr259, 2, 0, 0x0000 },
   { s_cm260, s_cr260, 2, 0, 0x0000 },
   { s_cm261, s_cr261, 2, 0, 0x0000 },
   { s_cm262, s_cr262, 2, 0, 0x0000 },
   { s_cm263, s_cr263, 2, 0, 0x0000 },
   { s_cm264, s_cr264, 2, 0, 0x0000 },
   { s_cm265, s_cr265, 2, 1, 0x0000 },
   { s_cm266, s_cr266, 2, 2, 0x0000 },
   { s_cm267, s_cr267, 2, 1, 0x0000 },
   { s_cm268, s_cr268, 2, 1, 0x0000 },
   { s_cm269, NULL   , 2, 0, 0x0000 },
   { s_cm270, NULL   , 2, 0, 0x0000 },
   { s_cm271, NULL   , 2, 0, 0x0000 },
   { s_cm272, NULL   , 2, 0, 0x0000 },
   { s_cm273, NULL   , 2, 0, 0x0000 },
   { s_cm274, NULL   , 2, 0, 0x0000 },
   { s_cm275, NULL   , 2, 0, 0x0000 },
   { s_cm276, NULL   , 2, 0, 0x0000 },
   { s_cm277, s_cr277, 2, 3, 0x0002 },
   { s_cm278, s_cr278, 2, 2, 0x0002 },
   { s_cm279, s_cr279, 2, 2, 0x0002 },
   { s_cm280, s_cr280, 2, 0, 0x0000 },
   { s_cm281, s_cr281, 2, 0, 0x0000 },
   { s_cm282, s_cr282, 2, 0, 0x0000 },
   { s_cm283, s_cr283, 2, 0, 0x0000 },
   { s_cm284, s_cr284, 2, 0, 0x0000 },
   { s_cm285, s_cr285, 2, 0, 0x0000 },
   { s_cm286, s_cr286, 2, 1, 0x0000 },
   { s_cm287, s_cr287, 2, 0, 0x0000 },
   { s_cm288, s_cr288, 2, 0, 0x0000 },
   { s_cm289, s_cr289, 2, 0, 0x0000 },
   { s_cm290, s_cr290, 2, 0, 0x0000 }
};


void hb_pp_setStdRules( PHB_PP_STATE pState )
{
   hb_pp_initRules( &pState->pDefinitions, &pState->iDefinitions, s_def, 82 );
   hb_pp_initRules( &pState->pTranslations, &pState->iTranslations, NULL, 0 );
   hb_pp_initRules( &pState->pCommands, &pState->iCommands, s_cmd, 290 );
}
