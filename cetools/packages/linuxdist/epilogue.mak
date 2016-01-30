#
#  Copyright 2013 by Texas Instruments Incorporated.
#  
#

.libraries: package/.config

package/.config: preconfig/development/configPkg_86U/compiler.opt
package/.config: preconfig/production/configPkg_86U/compiler.opt
	-$(RM) $@
	$(TOUCH) $@
	
package/.config: preconfig/development/configPkg_v5T/compiler.opt
package/.config: preconfig/production/configPkg_v5T/compiler.opt
	-$(RM) $@
	$(TOUCH) $@
	
preconfig/development/configPkg_86U/compiler.opt: preconfig/development/preConfig.cfg
	$(MAKE) -C preconfig/development

preconfig/production/configPkg_86U/compiler.opt: preconfig/production/preConfig.cfg
	$(MAKE) -C preconfig/production

preconfig/development/configPkg_v5T/compiler.opt: preconfig/development/preConfig.cfg
	$(MAKE) -C preconfig/development

preconfig/production/configPkg_v5T/compiler.opt: preconfig/production/preConfig.cfg
	$(MAKE) -C preconfig/production

clean::
	$(MAKE) -C preconfig/development clean
	$(MAKE) -C preconfig/production clean
	$(MAKE) -f makefile clean

.libraries: package/.lib

#package/.lib: build/lib/osal.av5T cstubs/lib/cstubs.av5T 
#package/.lib: build/lib/osal.a86U cstubs/lib/cstubs.a86U
package/.lib: package/.config
	-$(RM) $@
	$(TOUCH) $@
	$(MAKE) -f makefile all
#
#  @(#) linuxdist; 1, 0, 0,1; 5-20-2013 14:38:49; /db/atree/library/trees/osal/osal-g09/src/packages/ xlibrary

#

