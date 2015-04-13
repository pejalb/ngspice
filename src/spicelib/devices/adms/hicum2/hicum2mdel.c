/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.4 - Mon, 13 Apr 2015 14:12:45 ***/


#include "ngspice/ngspice.h"
#include "hicum2defs.h"
#include "ngspice/sperror.h"
#include "ngspice/suffix.h"

int hicum2mDelete(GENmodel **inModel, IFuid modname, GENmodel *kill)

{
  register hicum2model **model = (hicum2model**)inModel;
  register hicum2model *modfast =(hicum2model*)kill;
  hicum2instance *here;
  hicum2instance *prev = NULL;
  hicum2model **oldmod;
  
  oldmod = model;
  for ( ; *model ; model = &((*model)->hicum2nextModel)) {
      if ((*model)->hicum2modName == modname ||
          (modfast && *model == modfast))
	  goto delgot;
      oldmod = model;   
  } 
  return(E_NOMOD);
  
  delgot:
    *oldmod = (*model)->hicum2nextModel; /* cut deleted device out of list */
    for (here = (*model)->hicum2instances; here; here = here->hicum2nextInstance)
    {    if(prev) FREE(prev);
         prev = here;
    }
    if(prev) FREE(prev);
    FREE(*model);
    return(OK);
}
