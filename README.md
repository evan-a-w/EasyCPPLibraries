# EasyCPPLibraries
A simple tool to move C/C++ header files and object files into the current directory for use as a kind of library. This is efficient if you have a small number of libraries that you wish to use for a small project, since you can simply import them all and be done with it. To use larger libraries or specific libraries for a project, it would be more effective to use other tools (eg. cmake or even just .lib or .a files).

Requirements are g++ and windows since the tool is hard coded using cmd and g++ commands.

To use, first create a folder with your desired .h, .c and .cpp files to use with the library. You can compile these to object files if you want, but the tool will also automatically compile the files from the source if the .o file is not present.
Next, create a system environment variable called BUILD_BAT with the value of the newly created folder's directory (search it up if you don't know how).
Thirdly, create another environment variable called LIBOFILES which contains the name of all of the intended object files (eg. mylib.o, even if not yet compiled) separated by spaces.
Finally, add the folder containing importlib, importlibs and maketool to PATH.

Once setup, call importlibs from a terminal in any directory and it will copy the .h and .o files (as in LIBOFILES) to the working directory.

The .o files can also automatically be linked to a file through LIBOFILES by adding it to the end of the g++ command with the environment variable syntax. For cmd, this is %LIBOFILES%; in a makefile, this is $(LIBOFILES); and in powershell, use $env:LIBOFILES.
