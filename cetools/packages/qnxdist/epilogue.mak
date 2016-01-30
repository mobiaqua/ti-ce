#
#  Copyright 2013 by Texas Instruments Incorporated.
#  
#


.libraries: package/.config

package/.config: preconfig/production/configPkg_qv7/compiler.opt preconfig/development/configPkg_qv7/compiler.opt
	-$(RM) $@
	$(TOUCH) $@

preconfig/development/configPkg_qv7/compiler.opt: preconfig/development/preConfig.cfg
	$(MAKE) -C preconfig/development



preconfig/production/configPkg_qv7/compiler.opt: preconfig/production/preConfig.cfg
	$(MAKE) -C preconfig/production

clean::
	$(MAKE) -C preconfig/development clean
	$(MAKE) -C preconfig/production clean
	$(MAKE) -f makefile clean
	$(RMDIR) build/lib
	$(RMDIR) cstubs/lib

.libraries: package/.lib

#package/.lib: build/lib/osal.aqv7 cstubs/lib/cstubs.aqv7
package/.lib: package/.config
	-$(RM) $@
	$(TOUCH) $@
	$(MAKE) -f makefile all
#
#  @(#) qnxdist; 1, 0, 0,1; 5-20-2013 14:38:59; /db/atree/library/trees/osal/osal-g09/src/packages/ xlibrary

#

