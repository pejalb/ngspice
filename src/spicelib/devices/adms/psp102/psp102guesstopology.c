/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.4 - Mon, 13 Apr 2015 14:13:14 ***/


#include "ngspice/ngspice.h"
#include "ngspice/cktdefs.h"
#include "ngspice/smpdefs.h"
#include "psp102defs.h"
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


int psp102guesstopology (SMPmatrix *matrix, CKTcircuit *ckt, psp102model *model, psp102instance *here)
     /* guess topology */
{
  NG_IGNOREABLE(matrix);
  NG_IGNOREABLE(ckt);double h2=0.0/0.0;
double h1=0.0/0.0;
double vbbtlim=0.0/0.0;
double vch=0.0/0.0;
double vfmin=0.0/0.0;
double vbimin=0.0/0.0;
double VMAX=0.0/0.0;
if
((model->CHNL_TYPE==(+1)))
{
}
else
{
}
if
((here->DNSUB_i>0.0))
{
}
else
{
}
if
(((((model->SWIGATE!=0)&&(here->IGOV_i>0))||((model->SWGIDL!=0)&&(here->AGIDL_i>0)))||(here->CGOV_i>0)))
{
}
if
((model->SWIGATE!=0))
{
if
((here->IGOV_i>0))
{
if
((here->GC3_i<0))
{
}
if
((here->GC3_i<0))
{
}
}
if
((here->IGINV_i>0))
{
if
((here->GC3_i<0))
{
}
}
}
if
(((model->SWGIDL!=0)&&(here->AGIDL_i>0)))
{
}
if
((here->qq>0.0))
{
}
VMAX=here->VMAXS;
vbimin=here->vbimins;
vfmin=here->vfmins;
vch=here->vchs;
vbbtlim=here->vbbtlims;
if
((!(((here->ABSOURCE_i==0)&&(here->LSSOURCE_i==0))&&(here->LGSOURCE_i==0))))
{
h1=((4.0*vch)*vch);
h2=(vch/vfmin);
}
if
((here->ABSOURCE_i==0))
{
}
else
{
if
((model->one_minus_PBOT==0.5))
{
}
else
{
}
if
(((model->CSRHBOT_i==0)&&(model->CTATBOT_i==0)))
{
}
else
{
if
((model->PBOT_i==0.5))
{
}
else
{
}
if
((model->PBOT_i==0.5))
{
}
else
{
}
}
if
((model->CTATBOT_i==0))
{
}
else
{
if
((((-model->PBOT_i)*model->one_over_one_minus_PBOT)==(-1)))
{
}
else
{
}
}
if
((model->CBBTBOT_i==0))
{
}
else
{
if
((model->PBOT_i==0.5))
{
}
else
{
}
}
if
((model->VBRBOT_i>1000))
{
}
else
{
}
}
if
((here->LSSOURCE_i==0))
{
}
else
{
if
((model->one_minus_PSTI==0.5))
{
}
else
{
}
if
(((model->CSRHSTI_i==0)&&(model->CTATSTI_i==0)))
{
}
else
{
if
((model->PSTI_i==0.5))
{
}
else
{
}
if
((model->PSTI_i==0.5))
{
}
else
{
}
}
if
((model->CTATSTI_i==0))
{
}
else
{
if
((((-model->PSTI_i)*model->one_over_one_minus_PSTI)==(-1)))
{
}
else
{
}
}
if
((model->CBBTSTI_i==0))
{
}
else
{
if
((model->PSTI_i==0.5))
{
}
else
{
}
}
if
((model->VBRSTI_i>1000))
{
}
else
{
}
}
if
((here->LGSOURCE_i==0))
{
}
else
{
if
((model->one_minus_PGAT==0.5))
{
}
else
{
}
if
(((model->CSRHGAT_i==0)&&(model->CTATGAT_i==0)))
{
}
else
{
if
((model->PGAT_i==0.5))
{
}
else
{
}
if
((model->PGAT_i==0.5))
{
}
else
{
}
}
if
((model->CTATGAT_i==0))
{
}
else
{
if
((((-model->PGAT_i)*model->one_over_one_minus_PGAT)==(-1)))
{
}
else
{
}
}
if
((model->CBBTGAT_i==0))
{
}
else
{
if
((model->PGAT_i==0.5))
{
}
else
{
}
}
if
((model->VBRGAT_i>1000))
{
}
else
{
}
}
VMAX=here->VMAXD;
vbimin=here->vbimind;
vfmin=here->vfmind;
vch=here->vchd;
vbbtlim=here->vbbtlimd;
if
((!(((here->ABDRAIN_i==0)&&(here->LSDRAIN_i==0))&&(here->LGDRAIN_i==0))))
{
h1=((4.0*vch)*vch);
h2=(vch/vfmin);
}
if
((here->ABDRAIN_i==0))
{
}
else
{
if
((model->one_minus_PBOT==0.5))
{
}
else
{
}
if
(((model->CSRHBOT_i==0)&&(model->CTATBOT_i==0)))
{
}
else
{
if
((model->PBOT_i==0.5))
{
}
else
{
}
if
((model->PBOT_i==0.5))
{
}
else
{
}
}
if
((model->CTATBOT_i==0))
{
}
else
{
if
((((-model->PBOT_i)*model->one_over_one_minus_PBOT)==(-1)))
{
}
else
{
}
}
if
((model->CBBTBOT_i==0))
{
}
else
{
if
((model->PBOT_i==0.5))
{
}
else
{
}
}
if
((model->VBRBOT_i>1000))
{
}
else
{
}
}
if
((here->LSDRAIN_i==0))
{
}
else
{
if
((model->one_minus_PSTI==0.5))
{
}
else
{
}
if
(((model->CSRHSTI_i==0)&&(model->CTATSTI_i==0)))
{
}
else
{
if
((model->PSTI_i==0.5))
{
}
else
{
}
if
((model->PSTI_i==0.5))
{
}
else
{
}
}
if
((model->CTATSTI_i==0))
{
}
else
{
if
((((-model->PSTI_i)*model->one_over_one_minus_PSTI)==(-1)))
{
}
else
{
}
}
if
((model->CBBTSTI_i==0))
{
}
else
{
if
((model->PSTI_i==0.5))
{
}
else
{
}
}
if
((model->VBRSTI_i>1000))
{
}
else
{
}
}
if
((here->LGDRAIN_i==0))
{
}
else
{
if
((model->one_minus_PGAT==0.5))
{
}
else
{
}
if
(((model->CSRHGAT_i==0)&&(model->CTATGAT_i==0)))
{
}
else
{
if
((model->PGAT_i==0.5))
{
}
else
{
}
if
((model->PGAT_i==0.5))
{
}
else
{
}
}
if
((model->CTATGAT_i==0))
{
}
else
{
if
((((-model->PGAT_i)*model->one_over_one_minus_PGAT)==(-1)))
{
}
else
{
}
}
if
((model->CBBTGAT_i==0))
{
}
else
{
if
((model->PGAT_i==0.5))
{
}
else
{
}
}
if
((model->VBRGAT_i>1000))
{
}
else
{
}
}
  static_jacobian4(G,B,S,B)
  static_jacobian4(G,B,D,S)
  static_jacobian4(G,B,G,S)
  static_jacobian4(B,S,S,B)
  static_jacobian4(B,D,S,B)
  static_jacobian4(B,D,D,B)
  static_jacobian4(D,S,D,S)
  dynamic_jacobian4(G,S,S,B)
  dynamic_jacobian4(G,S,G,S)
  dynamic_jacobian4(G,S,D,S)
  dynamic_jacobian4(B,S,S,B)
  dynamic_jacobian4(B,S,G,S)
  dynamic_jacobian4(B,S,D,S)
  dynamic_jacobian4(D,S,S,B)
  dynamic_jacobian4(D,S,D,S)
  dynamic_jacobian4(D,S,G,S)
  dynamic_jacobian4(G,S,G,S)
  dynamic_jacobian4(G,S,D,S)
  dynamic_jacobian4(G,S,S,B)
  dynamic_jacobian4(G,D,G,S)
  dynamic_jacobian4(G,D,D,S)
  dynamic_jacobian4(G,D,S,B)
  dynamic_jacobian4(G,B,S,B)
  dynamic_jacobian4(G,B,G,S)
  dynamic_jacobian4(G,B,D,S)
  dynamic_jacobian4(B,S,S,B)
  dynamic_jacobian4(B,D,S,B)
  dynamic_jacobian4(B,D,D,B)
  static_jacobian1(NOI2,NOI2)
  static_jacobian2p(NOI2,S,B)
  static_jacobian2p(NOI2,G,S)
  static_jacobian2p(NOI2,D,S)
  static_jacobian2p(NOI,S,B)
  static_jacobian2p(NOI,G,S)
  static_jacobian2p(NOI,D,S)
  static_jacobian1(NOI,NOI2)
  static_jacobian2p(NOI,S,B)
  static_jacobian2p(NOI,G,S)
  static_jacobian2p(NOI,D,S)
  static_jacobian1(NOI,NOI)
  dynamic_jacobian1(NOI,NOI)
  dynamic_jacobian2p(NOI,S,B)
  dynamic_jacobian2p(NOI,G,S)
  dynamic_jacobian2p(NOI,D,S)
  static_jacobian4(D,S,S,B)
  static_jacobian4(D,S,G,S)
  static_jacobian4(D,S,D,S)
  static_jacobian4(D,S,S,B)
  static_jacobian4(D,S,G,S)
  static_jacobian4(D,S,D,S)
  static_jacobian2s(D,S,NOI2)
  static_jacobian4(D,S,S,B)
  static_jacobian4(D,S,G,S)
  static_jacobian4(D,S,D,S)
  dynamic_jacobian2s(G,S,NOI)
  dynamic_jacobian4(G,S,S,B)
  dynamic_jacobian4(G,S,G,S)
  dynamic_jacobian4(G,S,D,S)
  dynamic_jacobian2s(G,D,NOI)
  dynamic_jacobian4(G,D,S,B)
  dynamic_jacobian4(G,D,G,S)
  dynamic_jacobian4(G,D,D,S)
  static_jacobian4(G,S,S,B)
  static_jacobian4(G,S,D,S)
  static_jacobian4(G,S,G,S)
  static_jacobian4(G,D,S,B)
  static_jacobian4(G,D,D,S)
  static_jacobian4(G,D,G,S)
  static_jacobian4(B,S,S,B)
  static_jacobian4(B,S,G,S)
  static_jacobian4(B,S,D,S)
  static_jacobian4(B,D,G,S)
  static_jacobian4(B,D,D,S)
  static_jacobian4(B,D,S,B)
  static_jacobian4(B,D,D,B)

  return(OK);
}
