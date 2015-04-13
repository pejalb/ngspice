/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.4 - Mon, 13 Apr 2015 14:13:01 ***/


#include "ngspice/ngspice.h"
#include "bjt504tdefs.h"
#include "ngspice/sperror.h"
#include "ngspice/suffix.h"

int bjt504tmDelete(GENmodel **inModel, IFuid modname, GENmodel *kill)

{
  register bjt504tmodel **model = (bjt504tmodel**)inModel;
  register bjt504tmodel *modfast =(bjt504tmodel*)kill;
  bjt504tinstance *here;
  bjt504tinstance *prev = NULL;
  bjt504tmodel **oldmod;
  
  oldmod = model;
  for ( ; *model ; model = &((*model)->bjt504tnextModel)) {
      if ((*model)->bjt504tmodName == modname ||
          (modfast && *model == modfast))
	  goto delgot;
      oldmod = model;   
  } 
  return(E_NOMOD);
  
  delgot:
    *oldmod = (*model)->bjt504tnextModel; /* cut deleted device out of list */
    for (here = (*model)->bjt504tinstances; here; here = here->bjt504tnextInstance)
    {    if(prev) FREE(prev);
         prev = here;
    }
    if(prev) FREE(prev);
    FREE(*model);
    return(OK);
}
