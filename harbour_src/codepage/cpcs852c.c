/*
 * National Collation Support Module (CS852C)
 *
 * Copyright 2009 Przemyslaw Czerpak <druzus / at / priv.onet.pl>
 *
 * This file is generated automatically by cpinfo.prg
 */

#define HB_CP_ID        CS852C
#define HB_CP_INFO      "Czech CP-852 (ntxcz852.obj compatible)"
#define HB_CP_UNITB     HB_UNITB_852

#define HB_CP_RAW

static const unsigned char s_flags[ 256 ] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,0,0,0,0,0,0,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,0,0,0,0,0,0,6,6,0,6,6,0,0,0,6,0,0,0,0,10,0,10,10,6,6,6,10,6,0,0,10,10,10,6,0,0,6,6,6,6,6,0,0,10,6,0,0,0,0,10,0,0,0,0,0,0,0,0,10,0,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,10,6,10,10,0,6,0,0,0,0,0,10,0,10,0,10,0,0,6,10,6,10,10,6,0,6,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,6,0,0 };
static const unsigned char s_upper[ 256 ] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,123,124,125,126,127,128,154,144,131,142,222,134,135,136,211,138,139,140,141,142,143,144,145,145,226,153,149,149,151,152,153,154,155,155,157,158,172,181,214,224,233,164,165,166,166,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,210,213,214,215,183,217,218,219,220,221,222,223,224,225,226,227,228,213,230,230,232,233,232,235,237,237,238,239,240,241,242,243,244,245,246,247,248,249,250,235,252,252,254,255 };
static const unsigned char s_lower[ 256 ] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,132,143,130,146,146,147,148,150,150,151,152,148,129,156,156,157,158,159,160,161,162,163,164,165,167,167,168,169,170,171,159,173,174,175,176,177,178,179,180,160,182,216,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,212,137,212,229,161,215,216,217,218,219,220,221,133,223,162,225,147,227,228,229,231,231,234,163,234,235,236,236,238,239,240,241,242,243,244,245,246,247,248,249,250,251,253,253,254,255 };
static const unsigned char s_sort [ 256 ] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,71,73,77,81,89,91,93,95,99,101,103,109,111,115,123,125,127,133,137,141,149,151,153,155,159,163,164,165,166,167,168,66,72,74,78,82,90,92,94,96,100,102,104,110,112,116,124,126,128,134,138,142,150,152,154,156,160,169,170,171,172,173,174,148,84,175,70,146,176,177,178,88,179,180,181,182,69,183,83,105,106,120,122,107,108,184,185,121,147,139,140,186,187,76,68,98,118,144,188,189,161,162,190,191,192,193,75,194,195,196,197,198,199,200,201,67,202,85,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,79,87,80,113,97,229,86,230,231,232,233,234,145,235,117,236,119,237,238,114,135,136,129,143,130,239,158,157,240,241,242,243,244,245,246,247,248,249,250,251,252,253,131,132,254,255 };

/* include CP registration code */
#include "hbcdpreg.h"
