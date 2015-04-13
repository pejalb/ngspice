/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.4 - Mon, 13 Apr 2015 14:12:37 ***/


#include "ngspice/ngspice.h"
#include "ekvdefs.h"
#include "ngspice/cktdefs.h"
#include "ngspice/iferrmsg.h"
#include "ngspice/noisedef.h"
#include "ngspice/suffix.h"

extern void   NevalSrc();
extern double Nintegrate();

static char* ekvnNames []= {""
};

int
ekvnoise (int mode, int operation, GENmodel *genmodel, CKTcircuit *ckt, Ndata *data, double *OnDens)
{
  ekvmodel *firstModel = (ekvmodel *) genmodel;
  ekvmodel *model;
  ekvinstance *inst;
  for (model=firstModel; model != NULL; model=model->ekvnextModel)
  {
    for (inst=model->ekvinstances; inst != NULL; inst=inst->ekvnextInstance)
    {
      switch (operation)
      {
        case N_OPEN:
          break;
        case N_CALC:
          switch (mode)
          {
            case N_DENS:
              break;
            case INT_NOIZ:
              break;
          }
          break;
        case N_CLOSE:
          return (OK);
          break;
      }
    }
  }
  return(OK);
}