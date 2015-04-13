/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.4 - Mon, 13 Apr 2015 14:12:37 ***/


#include "ngspice/ngspice.h"
#include "ekvdefs.h"
#include "ngspice/sperror.h"
#include "ngspice/suffix.h"

int ekvdelete(GENmodel *inModel, IFuid name, GENinstance **inInst)

{
  register ekvmodel *model = (ekvmodel*)inModel;
  register ekvinstance **fast =(ekvinstance**)inInst;
  
  ekvinstance **prev = NULL;
  ekvinstance *here;
  
  for ( ; model ; model = model->ekvnextModel ) {
      prev = &(model->ekvinstances);  
      for (here = *prev; here ; here  = *prev) {
          if(here->ekvname == name || (fast && here==*fast) ) {
	      *prev = here->ekvnextInstance;
	      FREE(here);
	      return(OK);
	      }
         
    } 
  } 
  return(E_NODEV);
}
