/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.4 - Mon, 13 Apr 2015 14:12:40 ***/


#include "ngspice/ngspice.h"
#include "hicum0defs.h"
#include "ngspice/cktdefs.h"
#include "ngspice/iferrmsg.h"
#include "ngspice/noisedef.h"
#include "ngspice/suffix.h"

extern void   NevalSrc();
extern double Nintegrate();

static char* hicum0nNames []= {"","","","","","",""
};

int
hicum0noise (int mode, int operation, GENmodel *genmodel, CKTcircuit *ckt, Ndata *data, double *OnDens)
{
  hicum0model *firstModel = (hicum0model *) genmodel;
  hicum0model *model;
  hicum0instance *inst;
  for (model=firstModel; model != NULL; model=model->hicum0nextModel)
  {
    for (inst=model->hicum0instances; inst != NULL; inst=inst->hicum0nextInstance)
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