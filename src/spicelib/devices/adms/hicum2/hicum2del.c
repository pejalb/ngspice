/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.4 - Mon, 13 Apr 2015 14:12:45 ***/


#include "ngspice/ngspice.h"
#include "hicum2defs.h"
#include "ngspice/sperror.h"
#include "ngspice/suffix.h"

int hicum2delete(GENmodel *inModel, IFuid name, GENinstance **inInst)

{
  register hicum2model *model = (hicum2model*)inModel;
  register hicum2instance **fast =(hicum2instance**)inInst;
  
  hicum2instance **prev = NULL;
  hicum2instance *here;
  
  for ( ; model ; model = model->hicum2nextModel ) {
      prev = &(model->hicum2instances);  
      for (here = *prev; here ; here  = *prev) {
          if(here->hicum2name == name || (fast && here==*fast) ) {
	      *prev = here->hicum2nextInstance;
	      FREE(here);
	      return(OK);
	      }
         
    } 
  } 
  return(E_NODEV);
}
