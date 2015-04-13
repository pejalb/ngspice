/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.4 - Mon, 13 Apr 2015 14:13:01 ***/


#include "ngspice/ngspice.h"
#include "ngspice/cktdefs.h"
#include "ngspice/smpdefs.h"
#include "bjt504tdefs.h"
#include "ngspice/const.h"
#include "ngspice/sperror.h"
#include "ngspice/ifsim.h"
#include "ngspice/suffix.h"

#define jacobian(a,b) here->PTR_J_##a##_##b##_required=1;
#define static_jacobian4(p,q,r,s)  jacobian(p,r) jacobian(p,s) jacobian(q,r) jacobian(q,s)
#define static_jacobian2s(p,q,r)   jacobian(p,r) jacobian(q,r)
#define static_jacobian2p(p,r,s)   jacobian(p,r) jacobian(p,s)
#define static_jacobian1(p,r)      jacobian(p,r)
#define dynamic_jacobian4(p,q,r,s) jacobian(p,r) jacobian(p,s) jacobian(q,r) jacobian(q,s)
#define dynamic_jacobian2s(p,q,r)  jacobian(p,r) jacobian(q,r)
#define dynamic_jacobian2p(p,r,s)  jacobian(p,r) jacobian(p,s)
#define dynamic_jacobian1(p,r)     jacobian(p,r)
#define whitenoise_jacobian4(p,q,r,s)
#define whitenoise_jacobian2s(p,q,r)
#define whitenoise_jacobian2p(p,r,s)
#define whitenoise_jacobian1(p)
#define flickernoise_jacobian4(p,q,r,s)
#define flickernoise_jacobian2s(p,q,r)
#define flickernoise_jacobian2p(p,r,s)
#define flickernoise_jacobian1(p)


int bjt504tguesstopology (SMPmatrix *matrix, CKTcircuit *ckt, bjt504tmodel *model, bjt504tinstance *here)
     /* guess topology */
{
  NG_IGNOREABLE(matrix);
  NG_IGNOREABLE(ckt);double exponentFBC1fB2=0.0/0.0;
double RTH_Tamb_M=0.0/0.0;
double IHC_M=0.0/0.0;
double RTH_Tamb=0.0/0.0;
double VtrINV=0.0/0.0;
double Vtr=0.0/0.0;
double Tamb=0.0/0.0;
double inv_VDE=0.0/0.0;
double inv_VGZEB_Tr=0.0/0.0;
double VGZEB_Tr=0.0/0.0;
double VGZEBOK=0.0/0.0;
double _dxa=0.0/0.0;
double _a=0.0/0.0;
double _x0=0.0/0.0;
double _x=0.0/0.0;
double Trk=0.0/0.0;
double pow2_PEm2=0.0/0.0;
double pow2_2mPE=0.0/0.0;
double SCRCV_M=0.0/0.0;
double invMULT=0.0/0.0;
double CBCO_M=0.0/0.0;
double CBEO_M=0.0/0.0;
double CTH_M=0.0/0.0;
double Xext1=0.0/0.0;
double Bn=0.0/0.0;
double An=0.0/0.0;
if
((model->TYPE==1))
{
An=7.03e7;
Bn=1.23e8;
}
else
{
An=1.58e8;
Bn=2.04e8;
}
Xext1=(1.0-model->XEXT);
CTH_M=(model->CTH*model->MULT);
CBEO_M=(model->CBEO*model->MULT);
CBCO_M=(model->CBCO*model->MULT);
invMULT=(1.0/model->MULT);
SCRCV_M=(model->SCRCV*invMULT);
here->KF_M=(model->KF*pow(model->MULT,(1.0-model->AF)));
here->KFN_M=(model->KFN*pow(model->MULT,(1.0-((2.0*(model->MLF-1.0))+(model->AF*(2.0-model->MLF))))));
pow2_2mPE=pow(2.0,(2.0-model->PE));
pow2_PEm2=(1.0/pow2_2mPE);
Trk=(model->TREF+273.15);
_x=(model->VGZEB+(((model->AVGEB*Trk)*Trk)/(Trk+model->TVGEB)));
_x0=0.05;
_a=0.1;
_dxa=((_x-_x0)/_a);
if
((_x<_x0))
{
VGZEBOK=(_x0+(_a*log((1.0+exp(_dxa)))));
}
else
{
VGZEBOK=(_x+(_a*log((1.0+exp((-_dxa))))));
}
VGZEB_Tr=model->VGZEB;
inv_VGZEB_Tr=(1.0/VGZEB_Tr);
inv_VDE=(1.0/model->VDE);
Tamb=(Trk+model->DTA);
Vtr=(8.61708691805812512584e-5*Trk);
VtrINV=(1.0/Vtr);
RTH_Tamb=(model->RTH*pow((Tamb/Trk),model->ATH));
IHC_M=(model->IHC*model->MULT);
if
((model->RCC>0.0))
{
}
else
{
}
if
((model->RCBLX>0.0))
{
}
else
{
}
if
((model->RCBLI>0.0))
{
}
else
{
}
RTH_Tamb_M=(RTH_Tamb*invMULT);
if
((model->RCBLX>0.0))
{
if
((model->RCBLI>0.0))
{
}
else
{
}
}
else
{
if
((model->RCBLI>0.0))
{
}
else
{
}
}
if
((model->DEG==0.0))
{
}
else
{
}
if
((model->XREC==0.0))
{
}
else
{
}
if
((model->ICSS<0.0))
{
}
else
{
}
if
((model->EXMOD==1))
{
}
else
{
}
if
((model->EXMOD==1))
{
}
if
((model->EXPHI==1))
{
}
else
{
}
  static_jacobian4(c1,c2,c1,c2)
  static_jacobian4(c1,c2,b2,c1)
  static_jacobian4(c1,c2,b2,c2)
  static_jacobian2s(c1,c2,dt)
  static_jacobian4(c2,e1,c1,c2)
  static_jacobian4(c2,e1,b2,c1)
  static_jacobian4(c2,e1,b2,c2)
  static_jacobian4(c2,e1,b2,e1)
  static_jacobian2s(c2,e1,dt)
  static_jacobian4(b1,e1,b1,e1)
  static_jacobian2s(b1,e1,dt)
  static_jacobian4(b2,e1,b2,e1)
  static_jacobian2s(b2,e1,dt)
  static_jacobian4(b2,e1,c1,c2)
  static_jacobian4(b2,e1,b2,c1)
  static_jacobian4(b2,e1,b2,c2)
  static_jacobian4(b1,s,c4,c1)
  static_jacobian4(b1,s,c1,c2)
  static_jacobian4(b1,s,b2,c2)
  static_jacobian4(b1,s,b1,b2)
  static_jacobian2s(b1,s,dt)
  static_jacobian4(b,s,c1,c2)
  static_jacobian4(b,s,b2,c1)
  static_jacobian4(b,s,b2,c2)
  static_jacobian4(b,s,b2,e1)
  static_jacobian4(b,s,c3,c4)
  static_jacobian4(b,s,c3,c1)
  static_jacobian4(b,s,c4,c1)
  static_jacobian4(b,s,b1,b2)
  static_jacobian4(b,s,b,b1)
  static_jacobian4(b,s,b,c)
  static_jacobian2s(b,s,dt)
  static_jacobian4(s,c1,s,c1)
  static_jacobian2s(s,c1,dt)
  static_jacobian4(b1,b2,c1,c2)
  static_jacobian4(b1,b2,b2,c1)
  static_jacobian4(b1,b2,b2,c2)
  static_jacobian4(b1,b2,b2,e1)
  static_jacobian4(b1,b2,c3,c4)
  static_jacobian4(b1,b2,c3,c1)
  static_jacobian4(b1,b2,c4,c1)
  static_jacobian4(b1,b2,b,b1)
  static_jacobian4(b1,b2,b,c)
  static_jacobian4(b1,b2,b1,b2)
  static_jacobian2s(b1,b2,dt)
  static_jacobian4(b2,c2,b2,e1)
  static_jacobian4(b2,c2,c3,c4)
  static_jacobian4(b2,c2,c3,c1)
  static_jacobian4(b2,c2,c4,c1)
  static_jacobian4(b2,c2,b1,b2)
  static_jacobian4(b2,c2,b,b1)
  static_jacobian4(b2,c2,b,c)
  static_jacobian4(b2,c2,c1,c2)
  static_jacobian4(b2,c2,b2,c1)
  static_jacobian4(b2,c2,b2,c2)
  static_jacobian2s(b2,c2,dt)
  static_jacobian2s(e,e1,dt)
  static_jacobian4(e,e1,e,e1)
  static_jacobian2s(b,b1,dt)
  static_jacobian4(b,b1,b,b1)
  static_jacobian1(dt,dt)
  dynamic_jacobian1(dt,dt)
  static_jacobian2p(dt,s,c1)
  static_jacobian2p(dt,b1,e1)
  static_jacobian2p(dt,e,e1)
  static_jacobian2p(dt,c3,c4)
  static_jacobian2p(dt,c3,c1)
  static_jacobian2p(dt,c4,c1)
  static_jacobian2p(dt,b1,b2)
  static_jacobian2p(dt,b,b1)
  static_jacobian2p(dt,b,c)
  static_jacobian2p(dt,c1,c2)
  static_jacobian2p(dt,b2,c1)
  static_jacobian2p(dt,b2,c2)
  static_jacobian2p(dt,b2,e1)
  static_jacobian1(dt,dt)
  static_jacobian4(noi,e1,noi,e1)
  static_jacobian4(b2,e1,noi,e1)
  static_jacobian4(b2,e1,c1,c2)
  static_jacobian4(b2,e1,b2,c2)
  static_jacobian4(b2,e1,b2,c1)
  static_jacobian2s(b2,e1,dt)
  static_jacobian4(e1,c2,noi,e1)
  static_jacobian4(e1,c2,c1,c2)
  static_jacobian4(e1,c2,b2,c2)
  static_jacobian4(e1,c2,b2,c1)
  static_jacobian2s(e1,c2,dt)
  dynamic_jacobian4(b2,e1,c3,c4)
  dynamic_jacobian4(b2,e1,c3,c1)
  dynamic_jacobian4(b2,e1,c4,c1)
  dynamic_jacobian4(b2,e1,b1,b2)
  dynamic_jacobian4(b2,e1,b,b1)
  dynamic_jacobian4(b2,e1,b,c)
  dynamic_jacobian4(b2,e1,c1,c2)
  dynamic_jacobian4(b2,e1,b2,c1)
  dynamic_jacobian4(b2,e1,b2,c2)
  dynamic_jacobian4(b2,e1,b2,e1)
  dynamic_jacobian2s(b2,e1,dt)
  dynamic_jacobian4(b1,e1,c1,c2)
  dynamic_jacobian4(b1,e1,b2,c1)
  dynamic_jacobian4(b1,e1,b2,c2)
  dynamic_jacobian4(b1,e1,b2,e1)
  dynamic_jacobian4(b1,e1,b1,e1)
  dynamic_jacobian2s(b1,e1,dt)
  dynamic_jacobian4(b2,c2,c3,c4)
  dynamic_jacobian4(b2,c2,c3,c1)
  dynamic_jacobian4(b2,c2,c4,c1)
  dynamic_jacobian4(b2,c2,b1,b2)
  dynamic_jacobian4(b2,c2,b,b1)
  dynamic_jacobian4(b2,c2,b,c)
  dynamic_jacobian4(b2,c2,b2,e1)
  dynamic_jacobian4(b2,c2,c1,c2)
  dynamic_jacobian4(b2,c2,b2,c1)
  dynamic_jacobian4(b2,c2,b2,c2)
  dynamic_jacobian2s(b2,c2,dt)
  dynamic_jacobian4(s,c1,c1,c2)
  dynamic_jacobian4(s,c1,b2,c1)
  dynamic_jacobian4(s,c1,b2,c2)
  dynamic_jacobian4(s,c1,b2,e1)
  dynamic_jacobian4(s,c1,b1,e1)
  dynamic_jacobian4(s,c1,c4,c1)
  dynamic_jacobian4(s,c1,b1,b2)
  dynamic_jacobian4(s,c1,c3,c4)
  dynamic_jacobian4(s,c1,c3,c1)
  dynamic_jacobian4(s,c1,b,b1)
  dynamic_jacobian4(s,c1,b,c)
  dynamic_jacobian4(s,c1,s,c1)
  dynamic_jacobian2s(s,c1,dt)
  dynamic_jacobian4(b1,b2,c3,c4)
  dynamic_jacobian4(b1,b2,c3,c1)
  dynamic_jacobian4(b1,b2,c4,c1)
  dynamic_jacobian4(b1,b2,b,b1)
  dynamic_jacobian4(b1,b2,b,c)
  dynamic_jacobian4(b1,b2,c1,c2)
  dynamic_jacobian4(b1,b2,b2,c1)
  dynamic_jacobian4(b1,b2,b2,c2)
  dynamic_jacobian4(b1,b2,b2,e1)
  dynamic_jacobian2s(b1,b2,dt)
  dynamic_jacobian4(b1,b2,b1,b2)
  dynamic_jacobian4(b,e,b,e)
  dynamic_jacobian4(b,c,b,c)
if
((model->RCBLX>0.0))
{
  static_jacobian4(b,c3,c1,c2)
  static_jacobian4(b,c3,b2,c1)
  static_jacobian4(b,c3,b2,c2)
  static_jacobian4(b,c3,b2,e1)
  static_jacobian4(b,c3,c3,c4)
  static_jacobian4(b,c3,c3,c1)
  static_jacobian4(b,c3,c4,c1)
  static_jacobian4(b,c3,b1,b2)
  static_jacobian4(b,c3,b,b1)
  static_jacobian4(b,c3,b,c)
  static_jacobian2s(b,c3,dt)
  static_jacobian2s(c,c3,dt)
  static_jacobian4(c,c3,c3,c4)
  static_jacobian4(c,c3,c3,c1)
  static_jacobian4(c,c3,c4,c1)
  static_jacobian4(c,c3,c1,c2)
  static_jacobian4(c,c3,b2,c2)
  static_jacobian4(c,c3,b1,b2)
  static_jacobian4(c,c3,b,b1)
  static_jacobian4(c,c3,b,c)
  dynamic_jacobian4(b,c3,b2,c1)
  dynamic_jacobian4(b,c3,b2,e1)
  dynamic_jacobian4(b,c3,b1,e1)
  dynamic_jacobian4(b,c3,c3,c4)
  dynamic_jacobian4(b,c3,c3,c1)
  dynamic_jacobian4(b,c3,c4,c1)
  dynamic_jacobian4(b,c3,c1,c2)
  dynamic_jacobian4(b,c3,b2,c2)
  dynamic_jacobian4(b,c3,b1,b2)
  dynamic_jacobian4(b,c3,b,b1)
  dynamic_jacobian4(b,c3,b,c)
  dynamic_jacobian2s(b,c3,dt)
if
((model->RCBLI>0.0))
{
  static_jacobian2s(c4,c1,dt)
  static_jacobian4(c4,c1,c4,c1)
  static_jacobian4(b1,c4,b2,e1)
  static_jacobian4(b1,c4,c4,c1)
  static_jacobian4(b1,c4,c1,c2)
  static_jacobian4(b1,c4,b2,c2)
  static_jacobian4(b1,c4,b1,b2)
  static_jacobian2s(b1,c4,dt)
  static_jacobian2s(c3,c4,dt)
  static_jacobian4(c3,c4,c3,c4)
  static_jacobian4(c3,c4,c3,c1)
  dynamic_jacobian4(b1,c4,b2,c1)
  dynamic_jacobian4(b1,c4,b2,e1)
  dynamic_jacobian4(b1,c4,b1,e1)
  dynamic_jacobian4(b1,c4,c4,c1)
  dynamic_jacobian4(b1,c4,c1,c2)
  dynamic_jacobian4(b1,c4,b2,c2)
  dynamic_jacobian4(b1,c4,b1,b2)
  dynamic_jacobian2s(b1,c4,dt)
}
else
{
here->c1Node = here->c4Node; /* nnode collapsed */ 
here->c4Node = here->c1Node; /* pnode collapsed */ 
  static_jacobian4(b1,c1,b2,e1)
  static_jacobian4(b1,c1,c4,c1)
  static_jacobian4(b1,c1,c1,c2)
  static_jacobian4(b1,c1,b2,c2)
  static_jacobian4(b1,c1,b1,b2)
  static_jacobian2s(b1,c1,dt)
  dynamic_jacobian4(b1,c1,b2,c1)
  dynamic_jacobian4(b1,c1,b2,e1)
  dynamic_jacobian4(b1,c1,b1,e1)
  dynamic_jacobian4(b1,c1,c4,c1)
  dynamic_jacobian4(b1,c1,c1,c2)
  dynamic_jacobian4(b1,c1,b2,c2)
  dynamic_jacobian4(b1,c1,b1,b2)
  dynamic_jacobian2s(b1,c1,dt)
  static_jacobian2s(c3,c1,dt)
  static_jacobian4(c3,c1,c3,c4)
  static_jacobian4(c3,c1,c3,c1)
}
}
else
{
here->c4Node = here->c3Node; /* nnode collapsed */ 
here->c3Node = here->c4Node; /* pnode collapsed */ 
if
((model->RCBLI>0.0))
{
  static_jacobian4(b,c4,c1,c2)
  static_jacobian4(b,c4,b2,c1)
  static_jacobian4(b,c4,b2,c2)
  static_jacobian4(b,c4,b2,e1)
  static_jacobian4(b,c4,c3,c4)
  static_jacobian4(b,c4,c3,c1)
  static_jacobian4(b,c4,c4,c1)
  static_jacobian4(b,c4,b1,b2)
  static_jacobian4(b,c4,b,b1)
  static_jacobian4(b,c4,b,c)
  static_jacobian2s(b,c4,dt)
  static_jacobian2s(c,c4,dt)
  static_jacobian4(c,c4,c3,c4)
  static_jacobian4(c,c4,c3,c1)
  static_jacobian4(c,c4,c4,c1)
  static_jacobian4(c,c4,c1,c2)
  static_jacobian4(c,c4,b2,c2)
  static_jacobian4(c,c4,b1,b2)
  static_jacobian4(c,c4,b,b1)
  static_jacobian4(c,c4,b,c)
  static_jacobian2s(c4,c1,dt)
  static_jacobian4(c4,c1,c4,c1)
  static_jacobian4(b1,c4,b2,e1)
  static_jacobian4(b1,c4,c4,c1)
  static_jacobian4(b1,c4,c1,c2)
  static_jacobian4(b1,c4,b2,c2)
  static_jacobian4(b1,c4,b1,b2)
  static_jacobian2s(b1,c4,dt)
  dynamic_jacobian4(b1,c4,b2,c1)
  dynamic_jacobian4(b1,c4,b2,e1)
  dynamic_jacobian4(b1,c4,b1,e1)
  dynamic_jacobian4(b1,c4,c4,c1)
  dynamic_jacobian4(b1,c4,c1,c2)
  dynamic_jacobian4(b1,c4,b2,c2)
  dynamic_jacobian4(b1,c4,b1,b2)
  dynamic_jacobian2s(b1,c4,dt)
  dynamic_jacobian4(b,c4,b2,c1)
  dynamic_jacobian4(b,c4,b2,e1)
  dynamic_jacobian4(b,c4,b1,e1)
  dynamic_jacobian4(b,c4,c3,c4)
  dynamic_jacobian4(b,c4,c3,c1)
  dynamic_jacobian4(b,c4,c4,c1)
  dynamic_jacobian4(b,c4,c1,c2)
  dynamic_jacobian4(b,c4,b2,c2)
  dynamic_jacobian4(b,c4,b1,b2)
  dynamic_jacobian4(b,c4,b,b1)
  dynamic_jacobian4(b,c4,b,c)
  dynamic_jacobian2s(b,c4,dt)
}
else
{
  static_jacobian4(b,c1,c1,c2)
  static_jacobian4(b,c1,b2,c1)
  static_jacobian4(b,c1,b2,c2)
  static_jacobian4(b,c1,b2,e1)
  static_jacobian4(b,c1,c3,c4)
  static_jacobian4(b,c1,c3,c1)
  static_jacobian4(b,c1,c4,c1)
  static_jacobian4(b,c1,b1,b2)
  static_jacobian4(b,c1,b,b1)
  static_jacobian4(b,c1,b,c)
  static_jacobian2s(b,c1,dt)
  static_jacobian2s(c,c1,dt)
  static_jacobian4(c,c1,c3,c4)
  static_jacobian4(c,c1,c3,c1)
  static_jacobian4(c,c1,c4,c1)
  static_jacobian4(c,c1,c1,c2)
  static_jacobian4(c,c1,b2,c2)
  static_jacobian4(c,c1,b1,b2)
  static_jacobian4(c,c1,b,b1)
  static_jacobian4(c,c1,b,c)
here->c1Node = here->c4Node; /* nnode collapsed */ 
here->c4Node = here->c1Node; /* pnode collapsed */ 
  static_jacobian4(b1,c1,b2,e1)
  static_jacobian4(b1,c1,c4,c1)
  static_jacobian4(b1,c1,c1,c2)
  static_jacobian4(b1,c1,b2,c2)
  static_jacobian4(b1,c1,b1,b2)
  static_jacobian2s(b1,c1,dt)
  dynamic_jacobian4(b1,c1,b2,c1)
  dynamic_jacobian4(b1,c1,b2,e1)
  dynamic_jacobian4(b1,c1,b1,e1)
  dynamic_jacobian4(b1,c1,c4,c1)
  dynamic_jacobian4(b1,c1,c1,c2)
  dynamic_jacobian4(b1,c1,b2,c2)
  dynamic_jacobian4(b1,c1,b1,b2)
  dynamic_jacobian2s(b1,c1,dt)
  dynamic_jacobian4(b,c1,b2,c1)
  dynamic_jacobian4(b,c1,b2,e1)
  dynamic_jacobian4(b,c1,b1,e1)
  dynamic_jacobian4(b,c1,c3,c4)
  dynamic_jacobian4(b,c1,c3,c1)
  dynamic_jacobian4(b,c1,c4,c1)
  dynamic_jacobian4(b,c1,c1,c2)
  dynamic_jacobian4(b,c1,b2,c2)
  dynamic_jacobian4(b,c1,b1,b2)
  dynamic_jacobian4(b,c1,b,b1)
  dynamic_jacobian4(b,c1,b,c)
  dynamic_jacobian2s(b,c1,dt)
  static_jacobian2s(c3,c1,dt)
  static_jacobian4(c3,c1,c3,c4)
  static_jacobian4(c3,c1,c3,c1)
}
}
exponentFBC1fB2=((2.0*(model->MLF-1.0))+(model->AF*(2.0-model->MLF)));
if
((model->XIBI==0))
{
}
else
{
}
if
((model->XEXT==0.0))
{
}
else
{
}
  static_jacobian2s(e,e1,dt)
  static_jacobian2s(b,b1,dt)
  static_jacobian4(b1,b2,c1,c2)
  static_jacobian4(b1,b2,b2,c1)
  static_jacobian4(b1,b2,b2,c2)
  static_jacobian4(b1,b2,b2,e1)
  static_jacobian4(b1,b2,c3,c4)
  static_jacobian4(b1,b2,c3,c1)
  static_jacobian4(b1,b2,c4,c1)
  static_jacobian4(b1,b2,b1,b2)
  static_jacobian4(b1,b2,b,b1)
  static_jacobian4(b1,b2,b,c)
  static_jacobian2s(b1,b2,dt)
  static_jacobian4(noi,e1,b2,e1)
  static_jacobian4(noi,e1,c1,c2)
  static_jacobian4(noi,e1,b2,c2)
  static_jacobian4(noi,e1,b2,c1)
  static_jacobian2s(noi,e1,dt)
  static_jacobian4(c2,e1,c1,c2)
  static_jacobian4(c2,e1,b2,c1)
  static_jacobian4(c2,e1,b2,c2)
  static_jacobian4(c2,e1,b2,e1)
  static_jacobian2s(c2,e1,dt)
  static_jacobian4(b2,e1,b2,e1)
  static_jacobian2s(b2,e1,dt)
  static_jacobian4(b2,e1,c1,c2)
  static_jacobian4(b2,e1,b2,c1)
  static_jacobian4(b2,e1,b2,c2)
  static_jacobian4(b2,e1,b2,e1)
  static_jacobian2s(b2,e1,dt)
  static_jacobian4(b2,e1,c1,c2)
  static_jacobian4(b2,e1,b2,c1)
  static_jacobian4(b2,e1,b2,c2)
  static_jacobian4(b2,e1,b2,e1)
  static_jacobian2s(b2,e1,dt)
  static_jacobian4(e1,b1,b1,e1)
  static_jacobian2s(e1,b1,dt)
  static_jacobian4(e1,b1,b1,e1)
  static_jacobian2s(e1,b1,dt)
  static_jacobian4(b1,c4,b2,e1)
  static_jacobian4(b1,c4,c4,c1)
  static_jacobian4(b1,c4,c1,c2)
  static_jacobian4(b1,c4,b2,c2)
  static_jacobian4(b1,c4,b1,b2)
  static_jacobian2s(b1,c4,dt)
  static_jacobian4(b1,c4,b2,e1)
  static_jacobian4(b1,c4,c4,c1)
  static_jacobian4(b1,c4,c1,c2)
  static_jacobian4(b1,c4,b2,c2)
  static_jacobian4(b1,c4,b1,b2)
  static_jacobian2s(b1,c4,dt)
  static_jacobian4(b1,c4,c4,c1)
  static_jacobian4(b1,c4,c1,c2)
  static_jacobian4(b1,c4,b2,c2)
  static_jacobian4(b1,c4,b1,b2)
  static_jacobian2s(b1,c4,dt)
  static_jacobian4(b1,c4,c4,c1)
  static_jacobian4(b1,c4,c1,c2)
  static_jacobian4(b1,c4,b2,c2)
  static_jacobian4(b1,c4,b1,b2)
  static_jacobian2s(b1,c4,dt)
  static_jacobian4(b,c3,c1,c2)
  static_jacobian4(b,c3,b2,c1)
  static_jacobian4(b,c3,b2,c2)
  static_jacobian4(b,c3,b2,e1)
  static_jacobian4(b,c3,c3,c4)
  static_jacobian4(b,c3,c3,c1)
  static_jacobian4(b,c3,c4,c1)
  static_jacobian4(b,c3,b1,b2)
  static_jacobian4(b,c3,b,b1)
  static_jacobian4(b,c3,b,c)
  static_jacobian2s(b,c3,dt)
  static_jacobian4(b,c3,c1,c2)
  static_jacobian4(b,c3,b2,c1)
  static_jacobian4(b,c3,b2,c2)
  static_jacobian4(b,c3,b2,e1)
  static_jacobian4(b,c3,c3,c4)
  static_jacobian4(b,c3,c3,c1)
  static_jacobian4(b,c3,c4,c1)
  static_jacobian4(b,c3,b1,b2)
  static_jacobian4(b,c3,b,b1)
  static_jacobian4(b,c3,b,c)
  static_jacobian2s(b,c3,dt)
  static_jacobian4(b1,s,c4,c1)
  static_jacobian4(b1,s,c1,c2)
  static_jacobian4(b1,s,b2,c2)
  static_jacobian4(b1,s,b1,b2)
  static_jacobian2s(b1,s,dt)
  static_jacobian4(b,s,c1,c2)
  static_jacobian4(b,s,b2,c1)
  static_jacobian4(b,s,b2,c2)
  static_jacobian4(b,s,b2,e1)
  static_jacobian4(b,s,c3,c4)
  static_jacobian4(b,s,c3,c1)
  static_jacobian4(b,s,c4,c1)
  static_jacobian4(b,s,b1,b2)
  static_jacobian4(b,s,b,b1)
  static_jacobian4(b,s,b,c)
  static_jacobian2s(b,s,dt)
if
((model->RCBLX>0.0))
{
if
((model->RCBLI>0.0))
{
  static_jacobian2s(c,c3,dt)
  static_jacobian2s(c3,c4,dt)
  static_jacobian2s(c4,c1,dt)
}
else
{
  static_jacobian2s(c,c3,dt)
  static_jacobian2s(c3,c1,dt)
}
}
else
{
if
((model->RCBLI>0.0))
{
  static_jacobian2s(c,c4,dt)
  static_jacobian2s(c4,c1,dt)
}
else
{
  static_jacobian2s(c,c1,dt)
}
}

  return(OK);
}
