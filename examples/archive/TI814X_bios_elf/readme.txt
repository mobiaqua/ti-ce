This directory contains zipped examples for the TI814X platform.
Each example is separated into its own stand-alone .zip file and
builds independently.

Use the unzip command to unpack the examples. Remember to protect
wildcard characters from the shell (unzip must see the wildcard).

Some examples:

1. Unpack all TI814X examples into the root of the examples folder.

$ unzip archive/TI814X/\*.zip


2. From the TI814X folder, unpack all examples to a destination folder.

$ cd archive/TI814X
$ unzip \*.zip -d /home/examples


To build an example:

1. cd into the unzipped example directory and set the environment variables
   in products.mak

2. Build the example by running:
       gmake clean
       gmake

Note:  Each example contains its own products.mak file so it can be built
       stand-alone.  However, the products.mak file will look for other
       products.mak files to override the local settings.  It will use the
       first products.mak file encountered one, two, and three directories up.
       This allows you to set one products.mak file that can be used by
       multiple examples in subdirectories below, instead of having to
       edit every example products.mak file.


Here is a brief description of each example:

ex01_universalcopy_bios_dsp:
    Local BIOS universal_copy codec example for the dsp.

ex01_universalcopy_bios_video:
    Local BIOS universal_copy codec example for the video processor.

ex01_universalcopy_bios_vpss:
    Local BIOS universal_copy codec example for the vpss processor.

ex01_universalcopy_linux_local:
    Local Linux universal_copy codec example for the ARM.

ex01_universalcopy_linux2dsp:
    Remote Linux universal_copy codec example for the ARM, with a server that
    runs on the DSP.

ex01_universalcopy_linux2video:
    Remote Linux universal_copy codec example for the ARM, with a server that
    runs on the video processor.

ex01_universalcopy_linux2vpss:
    Remote Linux universal_copy codec example for the ARM, with a server that
    runs on the vpss processor.

