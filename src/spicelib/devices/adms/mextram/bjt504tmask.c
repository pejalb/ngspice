/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.4 - Mon, 13 Apr 2015 14:13:01 ***/


#include "ngspice/ngspice.h"
#include "ngspice/const.h"
#include "ngspice/ifsim.h"
#include "ngspice/cktdefs.h"
#include "ngspice/devdefs.h"
#include "bjt504tdefs.h"
#include "ngspice/sperror.h"
#include "ngspice/suffix.h"

int bjt504tmAsk(CKTcircuit *ckt, GENmodel *inst, int which, IFvalue *value)
{
  bjt504tmodel *model = (bjt504tmodel *)inst;
  NG_IGNOREABLE(ckt);
  switch (which) {  case  bjt504t_model_pnp  :
    value->iValue = model->pnp;
    return OK;
  case  bjt504t_model_npn  :
    value->iValue = model->npn;
    return OK;
  case  bjt504t_model_LEVEL  :
    value->iValue = model->LEVEL;
    return OK;
  case  bjt504t_model_TREF  :
    value->rValue = model->TREF;
    return OK;
  case  bjt504t_model_DTA  :
    value->rValue = model->DTA;
    return OK;
  case  bjt504t_model_EXMOD  :
    value->iValue = model->EXMOD;
    return OK;
  case  bjt504t_model_EXPHI  :
    value->iValue = model->EXPHI;
    return OK;
  case  bjt504t_model_EXAVL  :
    value->iValue = model->EXAVL;
    return OK;
  case  bjt504t_model_IS  :
    value->rValue = model->IS;
    return OK;
  case  bjt504t_model_IK  :
    value->rValue = model->IK;
    return OK;
  case  bjt504t_model_VER  :
    value->rValue = model->VER;
    return OK;
  case  bjt504t_model_VEF  :
    value->rValue = model->VEF;
    return OK;
  case  bjt504t_model_BF  :
    value->rValue = model->BF;
    return OK;
  case  bjt504t_model_IBF  :
    value->rValue = model->IBF;
    return OK;
  case  bjt504t_model_MLF  :
    value->rValue = model->MLF;
    return OK;
  case  bjt504t_model_XIBI  :
    value->rValue = model->XIBI;
    return OK;
  case  bjt504t_model_IZEB  :
    value->rValue = model->IZEB;
    return OK;
  case  bjt504t_model_NZEB  :
    value->rValue = model->NZEB;
    return OK;
  case  bjt504t_model_BRI  :
    value->rValue = model->BRI;
    return OK;
  case  bjt504t_model_IBR  :
    value->rValue = model->IBR;
    return OK;
  case  bjt504t_model_VLR  :
    value->rValue = model->VLR;
    return OK;
  case  bjt504t_model_XEXT  :
    value->rValue = model->XEXT;
    return OK;
  case  bjt504t_model_WAVL  :
    value->rValue = model->WAVL;
    return OK;
  case  bjt504t_model_VAVL  :
    value->rValue = model->VAVL;
    return OK;
  case  bjt504t_model_SFH  :
    value->rValue = model->SFH;
    return OK;
  case  bjt504t_model_RE  :
    value->rValue = model->RE;
    return OK;
  case  bjt504t_model_RBC  :
    value->rValue = model->RBC;
    return OK;
  case  bjt504t_model_RBV  :
    value->rValue = model->RBV;
    return OK;
  case  bjt504t_model_RCC  :
    value->rValue = model->RCC;
    return OK;
  case  bjt504t_model_RCV  :
    value->rValue = model->RCV;
    return OK;
  case  bjt504t_model_SCRCV  :
    value->rValue = model->SCRCV;
    return OK;
  case  bjt504t_model_IHC  :
    value->rValue = model->IHC;
    return OK;
  case  bjt504t_model_AXI  :
    value->rValue = model->AXI;
    return OK;
  case  bjt504t_model_CJE  :
    value->rValue = model->CJE;
    return OK;
  case  bjt504t_model_VDE  :
    value->rValue = model->VDE;
    return OK;
  case  bjt504t_model_PE  :
    value->rValue = model->PE;
    return OK;
  case  bjt504t_model_XCJE  :
    value->rValue = model->XCJE;
    return OK;
  case  bjt504t_model_CBEO  :
    value->rValue = model->CBEO;
    return OK;
  case  bjt504t_model_CJC  :
    value->rValue = model->CJC;
    return OK;
  case  bjt504t_model_VDC  :
    value->rValue = model->VDC;
    return OK;
  case  bjt504t_model_PC  :
    value->rValue = model->PC;
    return OK;
  case  bjt504t_model_XP  :
    value->rValue = model->XP;
    return OK;
  case  bjt504t_model_MC  :
    value->rValue = model->MC;
    return OK;
  case  bjt504t_model_XCJC  :
    value->rValue = model->XCJC;
    return OK;
  case  bjt504t_model_RCBLX  :
    value->rValue = model->RCBLX;
    return OK;
  case  bjt504t_model_RCBLI  :
    value->rValue = model->RCBLI;
    return OK;
  case  bjt504t_model_CBCO  :
    value->rValue = model->CBCO;
    return OK;
  case  bjt504t_model_MTAU  :
    value->rValue = model->MTAU;
    return OK;
  case  bjt504t_model_TAUE  :
    value->rValue = model->TAUE;
    return OK;
  case  bjt504t_model_TAUB  :
    value->rValue = model->TAUB;
    return OK;
  case  bjt504t_model_TEPI  :
    value->rValue = model->TEPI;
    return OK;
  case  bjt504t_model_TAUR  :
    value->rValue = model->TAUR;
    return OK;
  case  bjt504t_model_DEG  :
    value->rValue = model->DEG;
    return OK;
  case  bjt504t_model_XREC  :
    value->rValue = model->XREC;
    return OK;
  case  bjt504t_model_AQBO  :
    value->rValue = model->AQBO;
    return OK;
  case  bjt504t_model_AE  :
    value->rValue = model->AE;
    return OK;
  case  bjt504t_model_AB  :
    value->rValue = model->AB;
    return OK;
  case  bjt504t_model_AEPI  :
    value->rValue = model->AEPI;
    return OK;
  case  bjt504t_model_AEX  :
    value->rValue = model->AEX;
    return OK;
  case  bjt504t_model_AC  :
    value->rValue = model->AC;
    return OK;
  case  bjt504t_model_ACBL  :
    value->rValue = model->ACBL;
    return OK;
  case  bjt504t_model_DVGBF  :
    value->rValue = model->DVGBF;
    return OK;
  case  bjt504t_model_DVGBR  :
    value->rValue = model->DVGBR;
    return OK;
  case  bjt504t_model_VGB  :
    value->rValue = model->VGB;
    return OK;
  case  bjt504t_model_VGC  :
    value->rValue = model->VGC;
    return OK;
  case  bjt504t_model_VGJ  :
    value->rValue = model->VGJ;
    return OK;
  case  bjt504t_model_VGZEB  :
    value->rValue = model->VGZEB;
    return OK;
  case  bjt504t_model_AVGEB  :
    value->rValue = model->AVGEB;
    return OK;
  case  bjt504t_model_TVGEB  :
    value->rValue = model->TVGEB;
    return OK;
  case  bjt504t_model_DVGTE  :
    value->rValue = model->DVGTE;
    return OK;
  case  bjt504t_model_DAIS  :
    value->rValue = model->DAIS;
    return OK;
  case  bjt504t_model_AF  :
    value->rValue = model->AF;
    return OK;
  case  bjt504t_model_KF  :
    value->rValue = model->KF;
    return OK;
  case  bjt504t_model_KFN  :
    value->rValue = model->KFN;
    return OK;
  case  bjt504t_model_KAVL  :
    value->iValue = model->KAVL;
    return OK;
  case  bjt504t_model_ISS  :
    value->rValue = model->ISS;
    return OK;
  case  bjt504t_model_ICSS  :
    value->rValue = model->ICSS;
    return OK;
  case  bjt504t_model_IKS  :
    value->rValue = model->IKS;
    return OK;
  case  bjt504t_model_CJS  :
    value->rValue = model->CJS;
    return OK;
  case  bjt504t_model_VDS  :
    value->rValue = model->VDS;
    return OK;
  case  bjt504t_model_PS  :
    value->rValue = model->PS;
    return OK;
  case  bjt504t_model_VGS  :
    value->rValue = model->VGS;
    return OK;
  case  bjt504t_model_AS  :
    value->rValue = model->AS;
    return OK;
  case  bjt504t_model_ASUB  :
    value->rValue = model->ASUB;
    return OK;
  case  bjt504t_model_RTH  :
    value->rValue = model->RTH;
    return OK;
  case  bjt504t_model_CTH  :
    value->rValue = model->CTH;
    return OK;
  case  bjt504t_model_ATH  :
    value->rValue = model->ATH;
    return OK;
  case  bjt504t_model_MULT  :
    value->rValue = model->MULT;
    return OK;
  case  bjt504t_model_TYPE  :
    value->iValue = model->TYPE;
    return OK;
  case  bjt504t_model_GMIN  :
    value->rValue = model->GMIN;
    return OK;

  default:
    return(-1);
  }
  return(-1);
}
