/***
*** Interface: ads2002 2.2.0.0
 *** created by: admsXml-2.3.4 - Mon, 13 Apr 2015 14:13:01 ***/


#include "ngspice/ngspice.h"
#include "ngspice/devdefs.h"
#include "bjt504tdefs.h"
#include "ngspice/suffix.h"
IFparm bjt504tpTable[] = {

};
IFparm bjt504tmPTable[] = {
 IOP("pnp",bjt504t_model_pnp,IF_INTEGER,"pnp"),
 IOP("npn",bjt504t_model_npn,IF_INTEGER,"npn"),
 IOP("level",bjt504t_model_LEVEL,IF_INTEGER,"LEVEL"),
 IOP("tref",bjt504t_model_TREF,IF_REAL,"TREF"),
 IOP("dta",bjt504t_model_DTA,IF_REAL,"DTA"),
 IOP("exmod",bjt504t_model_EXMOD,IF_INTEGER,"EXMOD"),
 IOP("exphi",bjt504t_model_EXPHI,IF_INTEGER,"EXPHI"),
 IOP("exavl",bjt504t_model_EXAVL,IF_INTEGER,"EXAVL"),
 IOP("is",bjt504t_model_IS,IF_REAL,"IS"),
 IOP("ik",bjt504t_model_IK,IF_REAL,"IK"),
 IOP("ver",bjt504t_model_VER,IF_REAL,"VER"),
 IOP("vef",bjt504t_model_VEF,IF_REAL,"VEF"),
 IOP("bf",bjt504t_model_BF,IF_REAL,"BF"),
 IOP("ibf",bjt504t_model_IBF,IF_REAL,"IBF"),
 IOP("mlf",bjt504t_model_MLF,IF_REAL,"MLF"),
 IOP("xibi",bjt504t_model_XIBI,IF_REAL,"XIBI"),
 IOP("izeb",bjt504t_model_IZEB,IF_REAL,"IZEB"),
 IOP("nzeb",bjt504t_model_NZEB,IF_REAL,"NZEB"),
 IOP("bri",bjt504t_model_BRI,IF_REAL,"BRI"),
 IOP("ibr",bjt504t_model_IBR,IF_REAL,"IBR"),
 IOP("vlr",bjt504t_model_VLR,IF_REAL,"VLR"),
 IOP("xext",bjt504t_model_XEXT,IF_REAL,"XEXT"),
 IOP("wavl",bjt504t_model_WAVL,IF_REAL,"WAVL"),
 IOP("vavl",bjt504t_model_VAVL,IF_REAL,"VAVL"),
 IOP("sfh",bjt504t_model_SFH,IF_REAL,"SFH"),
 IOP("re",bjt504t_model_RE,IF_REAL,"RE"),
 IOP("rbc",bjt504t_model_RBC,IF_REAL,"RBC"),
 IOP("rbv",bjt504t_model_RBV,IF_REAL,"RBV"),
 IOP("rcc",bjt504t_model_RCC,IF_REAL,"RCC"),
 IOP("rcv",bjt504t_model_RCV,IF_REAL,"RCV"),
 IOP("scrcv",bjt504t_model_SCRCV,IF_REAL,"SCRCV"),
 IOP("ihc",bjt504t_model_IHC,IF_REAL,"IHC"),
 IOP("axi",bjt504t_model_AXI,IF_REAL,"AXI"),
 IOP("cje",bjt504t_model_CJE,IF_REAL,"CJE"),
 IOP("vde",bjt504t_model_VDE,IF_REAL,"VDE"),
 IOP("pe",bjt504t_model_PE,IF_REAL,"PE"),
 IOP("xcje",bjt504t_model_XCJE,IF_REAL,"XCJE"),
 IOP("cbeo",bjt504t_model_CBEO,IF_REAL,"CBEO"),
 IOP("cjc",bjt504t_model_CJC,IF_REAL,"CJC"),
 IOP("vdc",bjt504t_model_VDC,IF_REAL,"VDC"),
 IOP("pc",bjt504t_model_PC,IF_REAL,"PC"),
 IOP("xp",bjt504t_model_XP,IF_REAL,"XP"),
 IOP("mc",bjt504t_model_MC,IF_REAL,"MC"),
 IOP("xcjc",bjt504t_model_XCJC,IF_REAL,"XCJC"),
 IOP("rcblx",bjt504t_model_RCBLX,IF_REAL,"RCBLX"),
 IOP("rcbli",bjt504t_model_RCBLI,IF_REAL,"RCBLI"),
 IOP("cbco",bjt504t_model_CBCO,IF_REAL,"CBCO"),
 IOP("mtau",bjt504t_model_MTAU,IF_REAL,"MTAU"),
 IOP("taue",bjt504t_model_TAUE,IF_REAL,"TAUE"),
 IOP("taub",bjt504t_model_TAUB,IF_REAL,"TAUB"),
 IOP("tepi",bjt504t_model_TEPI,IF_REAL,"TEPI"),
 IOP("taur",bjt504t_model_TAUR,IF_REAL,"TAUR"),
 IOP("deg",bjt504t_model_DEG,IF_REAL,"DEG"),
 IOP("xrec",bjt504t_model_XREC,IF_REAL,"XREC"),
 IOP("aqbo",bjt504t_model_AQBO,IF_REAL,"AQBO"),
 IOP("ae",bjt504t_model_AE,IF_REAL,"AE"),
 IOP("ab",bjt504t_model_AB,IF_REAL,"AB"),
 IOP("aepi",bjt504t_model_AEPI,IF_REAL,"AEPI"),
 IOP("aex",bjt504t_model_AEX,IF_REAL,"AEX"),
 IOP("ac",bjt504t_model_AC,IF_REAL,"AC"),
 IOP("acbl",bjt504t_model_ACBL,IF_REAL,"ACBL"),
 IOP("dvgbf",bjt504t_model_DVGBF,IF_REAL,"DVGBF"),
 IOP("dvgbr",bjt504t_model_DVGBR,IF_REAL,"DVGBR"),
 IOP("vgb",bjt504t_model_VGB,IF_REAL,"VGB"),
 IOP("vgc",bjt504t_model_VGC,IF_REAL,"VGC"),
 IOP("vgj",bjt504t_model_VGJ,IF_REAL,"VGJ"),
 IOP("vgzeb",bjt504t_model_VGZEB,IF_REAL,"VGZEB"),
 IOP("avgeb",bjt504t_model_AVGEB,IF_REAL,"AVGEB"),
 IOP("tvgeb",bjt504t_model_TVGEB,IF_REAL,"TVGEB"),
 IOP("dvgte",bjt504t_model_DVGTE,IF_REAL,"DVGTE"),
 IOP("dais",bjt504t_model_DAIS,IF_REAL,"DAIS"),
 IOP("af",bjt504t_model_AF,IF_REAL,"AF"),
 IOP("kf",bjt504t_model_KF,IF_REAL,"KF"),
 IOP("kfn",bjt504t_model_KFN,IF_REAL,"KFN"),
 IOP("kavl",bjt504t_model_KAVL,IF_INTEGER,"KAVL"),
 IOP("iss",bjt504t_model_ISS,IF_REAL,"ISS"),
 IOP("icss",bjt504t_model_ICSS,IF_REAL,"ICSS"),
 IOP("iks",bjt504t_model_IKS,IF_REAL,"IKS"),
 IOP("cjs",bjt504t_model_CJS,IF_REAL,"CJS"),
 IOP("vds",bjt504t_model_VDS,IF_REAL,"VDS"),
 IOP("ps",bjt504t_model_PS,IF_REAL,"PS"),
 IOP("vgs",bjt504t_model_VGS,IF_REAL,"VGS"),
 IOP("as",bjt504t_model_AS,IF_REAL,"AS"),
 IOP("asub",bjt504t_model_ASUB,IF_REAL,"ASUB"),
 IOP("rth",bjt504t_model_RTH,IF_REAL,"RTH"),
 IOP("cth",bjt504t_model_CTH,IF_REAL,"CTH"),
 IOP("ath",bjt504t_model_ATH,IF_REAL,"ATH"),
 IOP("mult",bjt504t_model_MULT,IF_REAL,"MULT"),
 IOP("type",bjt504t_model_TYPE,IF_INTEGER,"TYPE"),
 IOP("gmin",bjt504t_model_GMIN,IF_REAL,"GMIN")
};


char *bjt504tnames[] = { "c",
 "b",
 "e",
 "s",
 "dt",
 "c1",
 "e1",
 "b1",
 "b2",
 "c2",
 "c3",
 "c4",
 "noi"
};

int bjt504tnSize = NUMELEMS(bjt504tnames);
int bjt504tpTSize = NUMELEMS(bjt504tpTable);
int bjt504tmPTSize = NUMELEMS(bjt504tmPTable);
int bjt504tiSize = sizeof(bjt504tinstance);
int bjt504tmSize = sizeof(bjt504tmodel);
