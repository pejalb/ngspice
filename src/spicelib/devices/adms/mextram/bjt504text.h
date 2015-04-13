/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.4 - Mon, 13 Apr 2015 14:13:01 ***/


#ifndef __bjt504tEXT_H
#define __bjt504tEXT_H


#include "bjt504tdefs.h"

extern int bjt504tpar(int,IFvalue*,GENinstance*,IFvalue*);
extern int bjt504tmParam(int,IFvalue*,GENmodel*);
extern int bjt504tload(GENmodel*,CKTcircuit*);
extern int bjt504tsetup(SMPmatrix*,GENmodel*,CKTcircuit*,int*);
extern int bjt504tguesstopology(SMPmatrix *, CKTcircuit *, bjt504tmodel *, bjt504tinstance *);
extern int bjt504ttemp(GENmodel*,CKTcircuit*);
extern int bjt504task(CKTcircuit *,GENinstance*,int,IFvalue*,IFvalue*);
extern int bjt504tmAsk(CKTcircuit*,GENmodel *,int, IFvalue*);
extern int bjt504tacLoad(GENmodel *,CKTcircuit*);
extern int bjt504tconvTest(GENmodel *,CKTcircuit*);
extern int bjt504tdelete(GENmodel*,IFuid,GENinstance**);
extern int bjt504tgetic(GENmodel*,CKTcircuit*);
extern int bjt504tmDelete(GENmodel**,IFuid,GENmodel*);
extern int bjt504tnoise(int,int,GENmodel*,CKTcircuit*,Ndata*,double*);
extern int bjt504tpzLoad(GENmodel*,CKTcircuit*,SPcomplex*);
extern int bjt504ttrunc(GENmodel*,CKTcircuit*,double*);
extern int bjt504tunsetup(GENmodel*,CKTcircuit*);
extern void bjt504tdestroy(GENmodel**);

#endif
