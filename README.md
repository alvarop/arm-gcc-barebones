arm-gcc-barebones
=================

Quick project to get gcc-arm working for my LPC1768. The result is a combination of a makefile, linker file, and a few c files to get started.

I started by exporting a simple blinky program from the MBED online compiler. It generated the makefile and supplied all additional needed files.

Once I tested by compiling myself and running the blinky, I began removing MBED stuff and replacing it with plain old C. Eventually, I was able to remove all the precompiled MBED libraries.

You can look through the commit history to see what I did. :-)
