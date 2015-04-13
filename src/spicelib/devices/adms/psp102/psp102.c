/***
*** Interface: ads2002 2.2.0.0
 *** created by: admsXml-2.3.4 - Mon, 13 Apr 2015 14:13:14 ***/


#include "ngspice/ngspice.h"
#include "ngspice/devdefs.h"
#include "psp102defs.h"
#include "ngspice/suffix.h"
IFparm psp102pTable[] = {
 IOP("l",psp102_instance_L,IF_REAL,"L"),
 IOP("w",psp102_instance_W,IF_REAL,"W"),
 IOP("sa",psp102_instance_SA,IF_REAL,"SA"),
 IOP("sb",psp102_instance_SB,IF_REAL,"SB"),
 IOP("absource",psp102_instance_ABSOURCE,IF_REAL,"ABSOURCE"),
 IOP("lssource",psp102_instance_LSSOURCE,IF_REAL,"LSSOURCE"),
 IOP("lgsource",psp102_instance_LGSOURCE,IF_REAL,"LGSOURCE"),
 IOP("abdrain",psp102_instance_ABDRAIN,IF_REAL,"ABDRAIN"),
 IOP("lsdrain",psp102_instance_LSDRAIN,IF_REAL,"LSDRAIN"),
 IOP("lgdrain",psp102_instance_LGDRAIN,IF_REAL,"LGDRAIN"),
 IOP("as",psp102_instance_AS,IF_REAL,"AS"),
 IOP("ps",psp102_instance_PS,IF_REAL,"PS"),
 IOP("ad",psp102_instance_AD,IF_REAL,"AD"),
 IOP("pd",psp102_instance_PD,IF_REAL,"PD"),
 IOP("mult",psp102_instance_MULT,IF_REAL,"MULT")
};
IFparm psp102mPTable[] = {
 IOP("pmos",psp102_model_pmos,IF_INTEGER,"pmos"),
 IOP("nmos",psp102_model_nmos,IF_INTEGER,"nmos"),
 IOP("level",psp102_model_LEVEL,IF_REAL,"LEVEL"),
 IOP("type",psp102_model_TYPE,IF_REAL,"TYPE"),
 IOP("tr",psp102_model_TR,IF_REAL,"TR"),
 IOP("swigate",psp102_model_SWIGATE,IF_REAL,"SWIGATE"),
 IOP("swimpact",psp102_model_SWIMPACT,IF_REAL,"SWIMPACT"),
 IOP("swgidl",psp102_model_SWGIDL,IF_REAL,"SWGIDL"),
 IOP("swjuncap",psp102_model_SWJUNCAP,IF_REAL,"SWJUNCAP"),
 IOP("qmc",psp102_model_QMC,IF_REAL,"QMC"),
 IOP("lvaro",psp102_model_LVARO,IF_REAL,"LVARO"),
 IOP("lvarl",psp102_model_LVARL,IF_REAL,"LVARL"),
 IOP("lvarw",psp102_model_LVARW,IF_REAL,"LVARW"),
 IOP("lap",psp102_model_LAP,IF_REAL,"LAP"),
 IOP("wvaro",psp102_model_WVARO,IF_REAL,"WVARO"),
 IOP("wvarl",psp102_model_WVARL,IF_REAL,"WVARL"),
 IOP("wvarw",psp102_model_WVARW,IF_REAL,"WVARW"),
 IOP("wot",psp102_model_WOT,IF_REAL,"WOT"),
 IOP("dlq",psp102_model_DLQ,IF_REAL,"DLQ"),
 IOP("dwq",psp102_model_DWQ,IF_REAL,"DWQ"),
 IOP("vfbo",psp102_model_VFBO,IF_REAL,"VFBO"),
 IOP("vfbl",psp102_model_VFBL,IF_REAL,"VFBL"),
 IOP("vfbw",psp102_model_VFBW,IF_REAL,"VFBW"),
 IOP("vfblw",psp102_model_VFBLW,IF_REAL,"VFBLW"),
 IOP("stvfbo",psp102_model_STVFBO,IF_REAL,"STVFBO"),
 IOP("stvfbl",psp102_model_STVFBL,IF_REAL,"STVFBL"),
 IOP("stvfbw",psp102_model_STVFBW,IF_REAL,"STVFBW"),
 IOP("stvfblw",psp102_model_STVFBLW,IF_REAL,"STVFBLW"),
 IOP("toxo",psp102_model_TOXO,IF_REAL,"TOXO"),
 IOP("nsubo",psp102_model_NSUBO,IF_REAL,"NSUBO"),
 IOP("nsubw",psp102_model_NSUBW,IF_REAL,"NSUBW"),
 IOP("wseg",psp102_model_WSEG,IF_REAL,"WSEG"),
 IOP("npck",psp102_model_NPCK,IF_REAL,"NPCK"),
 IOP("npckw",psp102_model_NPCKW,IF_REAL,"NPCKW"),
 IOP("wsegp",psp102_model_WSEGP,IF_REAL,"WSEGP"),
 IOP("lpck",psp102_model_LPCK,IF_REAL,"LPCK"),
 IOP("lpckw",psp102_model_LPCKW,IF_REAL,"LPCKW"),
 IOP("fol1",psp102_model_FOL1,IF_REAL,"FOL1"),
 IOP("fol2",psp102_model_FOL2,IF_REAL,"FOL2"),
 IOP("vnsubo",psp102_model_VNSUBO,IF_REAL,"VNSUBO"),
 IOP("nslpo",psp102_model_NSLPO,IF_REAL,"NSLPO"),
 IOP("dnsubo",psp102_model_DNSUBO,IF_REAL,"DNSUBO"),
 IOP("dphibo",psp102_model_DPHIBO,IF_REAL,"DPHIBO"),
 IOP("dphibl",psp102_model_DPHIBL,IF_REAL,"DPHIBL"),
 IOP("dphiblexp",psp102_model_DPHIBLEXP,IF_REAL,"DPHIBLEXP"),
 IOP("dphibw",psp102_model_DPHIBW,IF_REAL,"DPHIBW"),
 IOP("dphiblw",psp102_model_DPHIBLW,IF_REAL,"DPHIBLW"),
 IOP("npo",psp102_model_NPO,IF_REAL,"NPO"),
 IOP("npl",psp102_model_NPL,IF_REAL,"NPL"),
 IOP("cto",psp102_model_CTO,IF_REAL,"CTO"),
 IOP("ctl",psp102_model_CTL,IF_REAL,"CTL"),
 IOP("ctlexp",psp102_model_CTLEXP,IF_REAL,"CTLEXP"),
 IOP("ctw",psp102_model_CTW,IF_REAL,"CTW"),
 IOP("ctlw",psp102_model_CTLW,IF_REAL,"CTLW"),
 IOP("toxovo",psp102_model_TOXOVO,IF_REAL,"TOXOVO"),
 IOP("lov",psp102_model_LOV,IF_REAL,"LOV"),
 IOP("novo",psp102_model_NOVO,IF_REAL,"NOVO"),
 IOP("cfl",psp102_model_CFL,IF_REAL,"CFL"),
 IOP("cflexp",psp102_model_CFLEXP,IF_REAL,"CFLEXP"),
 IOP("cfw",psp102_model_CFW,IF_REAL,"CFW"),
 IOP("cfbo",psp102_model_CFBO,IF_REAL,"CFBO"),
 IOP("uo",psp102_model_UO,IF_REAL,"UO"),
 IOP("fbet1",psp102_model_FBET1,IF_REAL,"FBET1"),
 IOP("fbet1w",psp102_model_FBET1W,IF_REAL,"FBET1W"),
 IOP("lp1",psp102_model_LP1,IF_REAL,"LP1"),
 IOP("lp1w",psp102_model_LP1W,IF_REAL,"LP1W"),
 IOP("fbet2",psp102_model_FBET2,IF_REAL,"FBET2"),
 IOP("lp2",psp102_model_LP2,IF_REAL,"LP2"),
 IOP("betw1",psp102_model_BETW1,IF_REAL,"BETW1"),
 IOP("betw2",psp102_model_BETW2,IF_REAL,"BETW2"),
 IOP("wbet",psp102_model_WBET,IF_REAL,"WBET"),
 IOP("stbeto",psp102_model_STBETO,IF_REAL,"STBETO"),
 IOP("stbetl",psp102_model_STBETL,IF_REAL,"STBETL"),
 IOP("stbetw",psp102_model_STBETW,IF_REAL,"STBETW"),
 IOP("stbetlw",psp102_model_STBETLW,IF_REAL,"STBETLW"),
 IOP("mueo",psp102_model_MUEO,IF_REAL,"MUEO"),
 IOP("muew",psp102_model_MUEW,IF_REAL,"MUEW"),
 IOP("stmueo",psp102_model_STMUEO,IF_REAL,"STMUEO"),
 IOP("themuo",psp102_model_THEMUO,IF_REAL,"THEMUO"),
 IOP("stthemuo",psp102_model_STTHEMUO,IF_REAL,"STTHEMUO"),
 IOP("cso",psp102_model_CSO,IF_REAL,"CSO"),
 IOP("csl",psp102_model_CSL,IF_REAL,"CSL"),
 IOP("cslexp",psp102_model_CSLEXP,IF_REAL,"CSLEXP"),
 IOP("csw",psp102_model_CSW,IF_REAL,"CSW"),
 IOP("cslw",psp102_model_CSLW,IF_REAL,"CSLW"),
 IOP("stcso",psp102_model_STCSO,IF_REAL,"STCSO"),
 IOP("xcoro",psp102_model_XCORO,IF_REAL,"XCORO"),
 IOP("xcorl",psp102_model_XCORL,IF_REAL,"XCORL"),
 IOP("xcorw",psp102_model_XCORW,IF_REAL,"XCORW"),
 IOP("xcorlw",psp102_model_XCORLW,IF_REAL,"XCORLW"),
 IOP("stxcoro",psp102_model_STXCORO,IF_REAL,"STXCORO"),
 IOP("fetao",psp102_model_FETAO,IF_REAL,"FETAO"),
 IOP("rsw1",psp102_model_RSW1,IF_REAL,"RSW1"),
 IOP("rsw2",psp102_model_RSW2,IF_REAL,"RSW2"),
 IOP("strso",psp102_model_STRSO,IF_REAL,"STRSO"),
 IOP("rsbo",psp102_model_RSBO,IF_REAL,"RSBO"),
 IOP("rsgo",psp102_model_RSGO,IF_REAL,"RSGO"),
 IOP("thesato",psp102_model_THESATO,IF_REAL,"THESATO"),
 IOP("thesatl",psp102_model_THESATL,IF_REAL,"THESATL"),
 IOP("thesatlexp",psp102_model_THESATLEXP,IF_REAL,"THESATLEXP"),
 IOP("thesatw",psp102_model_THESATW,IF_REAL,"THESATW"),
 IOP("thesatlw",psp102_model_THESATLW,IF_REAL,"THESATLW"),
 IOP("stthesato",psp102_model_STTHESATO,IF_REAL,"STTHESATO"),
 IOP("stthesatl",psp102_model_STTHESATL,IF_REAL,"STTHESATL"),
 IOP("stthesatw",psp102_model_STTHESATW,IF_REAL,"STTHESATW"),
 IOP("stthesatlw",psp102_model_STTHESATLW,IF_REAL,"STTHESATLW"),
 IOP("thesatbo",psp102_model_THESATBO,IF_REAL,"THESATBO"),
 IOP("thesatgo",psp102_model_THESATGO,IF_REAL,"THESATGO"),
 IOP("axo",psp102_model_AXO,IF_REAL,"AXO"),
 IOP("axl",psp102_model_AXL,IF_REAL,"AXL"),
 IOP("alpl",psp102_model_ALPL,IF_REAL,"ALPL"),
 IOP("alplexp",psp102_model_ALPLEXP,IF_REAL,"ALPLEXP"),
 IOP("alpw",psp102_model_ALPW,IF_REAL,"ALPW"),
 IOP("alp1l1",psp102_model_ALP1L1,IF_REAL,"ALP1L1"),
 IOP("alp1lexp",psp102_model_ALP1LEXP,IF_REAL,"ALP1LEXP"),
 IOP("alp1l2",psp102_model_ALP1L2,IF_REAL,"ALP1L2"),
 IOP("alp1w",psp102_model_ALP1W,IF_REAL,"ALP1W"),
 IOP("alp2l1",psp102_model_ALP2L1,IF_REAL,"ALP2L1"),
 IOP("alp2lexp",psp102_model_ALP2LEXP,IF_REAL,"ALP2LEXP"),
 IOP("alp2l2",psp102_model_ALP2L2,IF_REAL,"ALP2L2"),
 IOP("alp2w",psp102_model_ALP2W,IF_REAL,"ALP2W"),
 IOP("vpo",psp102_model_VPO,IF_REAL,"VPO"),
 IOP("a1o",psp102_model_A1O,IF_REAL,"A1O"),
 IOP("a1l",psp102_model_A1L,IF_REAL,"A1L"),
 IOP("a1w",psp102_model_A1W,IF_REAL,"A1W"),
 IOP("a2o",psp102_model_A2O,IF_REAL,"A2O"),
 IOP("sta2o",psp102_model_STA2O,IF_REAL,"STA2O"),
 IOP("a3o",psp102_model_A3O,IF_REAL,"A3O"),
 IOP("a3l",psp102_model_A3L,IF_REAL,"A3L"),
 IOP("a3w",psp102_model_A3W,IF_REAL,"A3W"),
 IOP("a4o",psp102_model_A4O,IF_REAL,"A4O"),
 IOP("a4l",psp102_model_A4L,IF_REAL,"A4L"),
 IOP("a4w",psp102_model_A4W,IF_REAL,"A4W"),
 IOP("gcoo",psp102_model_GCOO,IF_REAL,"GCOO"),
 IOP("iginvlw",psp102_model_IGINVLW,IF_REAL,"IGINVLW"),
 IOP("igovw",psp102_model_IGOVW,IF_REAL,"IGOVW"),
 IOP("stigo",psp102_model_STIGO,IF_REAL,"STIGO"),
 IOP("gc2o",psp102_model_GC2O,IF_REAL,"GC2O"),
 IOP("gc3o",psp102_model_GC3O,IF_REAL,"GC3O"),
 IOP("chibo",psp102_model_CHIBO,IF_REAL,"CHIBO"),
 IOP("agidlw",psp102_model_AGIDLW,IF_REAL,"AGIDLW"),
 IOP("bgidlo",psp102_model_BGIDLO,IF_REAL,"BGIDLO"),
 IOP("stbgidlo",psp102_model_STBGIDLO,IF_REAL,"STBGIDLO"),
 IOP("cgidlo",psp102_model_CGIDLO,IF_REAL,"CGIDLO"),
 IOP("cgbovl",psp102_model_CGBOVL,IF_REAL,"CGBOVL"),
 IOP("cfrw",psp102_model_CFRW,IF_REAL,"CFRW"),
 IOP("fnto",psp102_model_FNTO,IF_REAL,"FNTO"),
 IOP("nfalw",psp102_model_NFALW,IF_REAL,"NFALW"),
 IOP("nfblw",psp102_model_NFBLW,IF_REAL,"NFBLW"),
 IOP("nfclw",psp102_model_NFCLW,IF_REAL,"NFCLW"),
 IOP("dta",psp102_model_DTA,IF_REAL,"DTA"),
 IOP("saref",psp102_model_SAREF,IF_REAL,"SAREF"),
 IOP("sbref",psp102_model_SBREF,IF_REAL,"SBREF"),
 IOP("wlod",psp102_model_WLOD,IF_REAL,"WLOD"),
 IOP("kuo",psp102_model_KUO,IF_REAL,"KUO"),
 IOP("kvsat",psp102_model_KVSAT,IF_REAL,"KVSAT"),
 IOP("tkuo",psp102_model_TKUO,IF_REAL,"TKUO"),
 IOP("lkuo",psp102_model_LKUO,IF_REAL,"LKUO"),
 IOP("wkuo",psp102_model_WKUO,IF_REAL,"WKUO"),
 IOP("pkuo",psp102_model_PKUO,IF_REAL,"PKUO"),
 IOP("llodkuo",psp102_model_LLODKUO,IF_REAL,"LLODKUO"),
 IOP("wlodkuo",psp102_model_WLODKUO,IF_REAL,"WLODKUO"),
 IOP("kvtho",psp102_model_KVTHO,IF_REAL,"KVTHO"),
 IOP("lkvtho",psp102_model_LKVTHO,IF_REAL,"LKVTHO"),
 IOP("wkvtho",psp102_model_WKVTHO,IF_REAL,"WKVTHO"),
 IOP("pkvtho",psp102_model_PKVTHO,IF_REAL,"PKVTHO"),
 IOP("llodvth",psp102_model_LLODVTH,IF_REAL,"LLODVTH"),
 IOP("wlodvth",psp102_model_WLODVTH,IF_REAL,"WLODVTH"),
 IOP("stetao",psp102_model_STETAO,IF_REAL,"STETAO"),
 IOP("lodetao",psp102_model_LODETAO,IF_REAL,"LODETAO"),
 IOP("trj",psp102_model_TRJ,IF_REAL,"TRJ"),
 IOP("imax",psp102_model_IMAX,IF_REAL,"IMAX"),
 IOP("cjorbot",psp102_model_CJORBOT,IF_REAL,"CJORBOT"),
 IOP("cjorsti",psp102_model_CJORSTI,IF_REAL,"CJORSTI"),
 IOP("cjorgat",psp102_model_CJORGAT,IF_REAL,"CJORGAT"),
 IOP("vbirbot",psp102_model_VBIRBOT,IF_REAL,"VBIRBOT"),
 IOP("vbirsti",psp102_model_VBIRSTI,IF_REAL,"VBIRSTI"),
 IOP("vbirgat",psp102_model_VBIRGAT,IF_REAL,"VBIRGAT"),
 IOP("pbot",psp102_model_PBOT,IF_REAL,"PBOT"),
 IOP("psti",psp102_model_PSTI,IF_REAL,"PSTI"),
 IOP("pgat",psp102_model_PGAT,IF_REAL,"PGAT"),
 IOP("phigbot",psp102_model_PHIGBOT,IF_REAL,"PHIGBOT"),
 IOP("phigsti",psp102_model_PHIGSTI,IF_REAL,"PHIGSTI"),
 IOP("phiggat",psp102_model_PHIGGAT,IF_REAL,"PHIGGAT"),
 IOP("idsatrbot",psp102_model_IDSATRBOT,IF_REAL,"IDSATRBOT"),
 IOP("idsatrsti",psp102_model_IDSATRSTI,IF_REAL,"IDSATRSTI"),
 IOP("idsatrgat",psp102_model_IDSATRGAT,IF_REAL,"IDSATRGAT"),
 IOP("csrhbot",psp102_model_CSRHBOT,IF_REAL,"CSRHBOT"),
 IOP("csrhsti",psp102_model_CSRHSTI,IF_REAL,"CSRHSTI"),
 IOP("csrhgat",psp102_model_CSRHGAT,IF_REAL,"CSRHGAT"),
 IOP("xjunsti",psp102_model_XJUNSTI,IF_REAL,"XJUNSTI"),
 IOP("xjungat",psp102_model_XJUNGAT,IF_REAL,"XJUNGAT"),
 IOP("ctatbot",psp102_model_CTATBOT,IF_REAL,"CTATBOT"),
 IOP("ctatsti",psp102_model_CTATSTI,IF_REAL,"CTATSTI"),
 IOP("ctatgat",psp102_model_CTATGAT,IF_REAL,"CTATGAT"),
 IOP("mefftatbot",psp102_model_MEFFTATBOT,IF_REAL,"MEFFTATBOT"),
 IOP("mefftatsti",psp102_model_MEFFTATSTI,IF_REAL,"MEFFTATSTI"),
 IOP("mefftatgat",psp102_model_MEFFTATGAT,IF_REAL,"MEFFTATGAT"),
 IOP("cbbtbot",psp102_model_CBBTBOT,IF_REAL,"CBBTBOT"),
 IOP("cbbtsti",psp102_model_CBBTSTI,IF_REAL,"CBBTSTI"),
 IOP("cbbtgat",psp102_model_CBBTGAT,IF_REAL,"CBBTGAT"),
 IOP("fbbtrbot",psp102_model_FBBTRBOT,IF_REAL,"FBBTRBOT"),
 IOP("fbbtrsti",psp102_model_FBBTRSTI,IF_REAL,"FBBTRSTI"),
 IOP("fbbtrgat",psp102_model_FBBTRGAT,IF_REAL,"FBBTRGAT"),
 IOP("stfbbtbot",psp102_model_STFBBTBOT,IF_REAL,"STFBBTBOT"),
 IOP("stfbbtsti",psp102_model_STFBBTSTI,IF_REAL,"STFBBTSTI"),
 IOP("stfbbtgat",psp102_model_STFBBTGAT,IF_REAL,"STFBBTGAT"),
 IOP("vbrbot",psp102_model_VBRBOT,IF_REAL,"VBRBOT"),
 IOP("vbrsti",psp102_model_VBRSTI,IF_REAL,"VBRSTI"),
 IOP("vbrgat",psp102_model_VBRGAT,IF_REAL,"VBRGAT"),
 IOP("pbrbot",psp102_model_PBRBOT,IF_REAL,"PBRBOT"),
 IOP("pbrsti",psp102_model_PBRSTI,IF_REAL,"PBRSTI"),
 IOP("pbrgat",psp102_model_PBRGAT,IF_REAL,"PBRGAT")
};


char *psp102names[] = { "D",
 "G",
 "S",
 "B",
 "NOI",
 "NOI2"
};

int psp102nSize = NUMELEMS(psp102names);
int psp102pTSize = NUMELEMS(psp102pTable);
int psp102mPTSize = NUMELEMS(psp102mPTable);
int psp102iSize = sizeof(psp102instance);
int psp102mSize = sizeof(psp102model);