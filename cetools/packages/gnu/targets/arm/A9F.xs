/* 
 *  Copyright (c) 2012 Texas Instruments and others.
 *  All rights reserved. This program and the accompanying materials
 *  are made available under the terms of the Eclipse Public License v1.0
 *  which accompanies this distribution, and is available at
 *  http://www.eclipse.org/legal/epl-v10.html
 * 
 *  Contributors:
 *      Texas Instruments - initial implementation
 * 
 * */
/*
 *  ======== A9.getISAChain ========
 *  A9 implementation for ITarget.getISAChain()
 */
function getISAChain (isa)
{
    var myChain = ["v7A", this.isa];
    var isaIn = (isa == null ? this.isa : isa)

    /* Check if 'isa' belongs to v7A family */
    for (var i = 0; i < myChain.length; i++) {
        if (myChain[i] == isaIn) {
            break;
        }
    }

    if (i == myChain.length) {
        return (null);
    }
    else {
        return (myChain.slice(0, i + 1));
    }
}

/*
 *  @(#) gnu.targets.arm; 1, 0, 0,408; 3-12-2013 15:04:42; /db/ztree/library/trees/xdctargets/xdctargets-g22x/src/ xlibrary

 */

