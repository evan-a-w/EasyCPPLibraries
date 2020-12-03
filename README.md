# EasyCPPLibraries
A tool to move C/C++ header files and object files into the current directory for use as a kind of library.

Requirements are g++ and windows since the tool is hard coded using cmd and g++ commands.

To use, first create a folder with your desired .h, .c and .cpp files to use with the library. You can compile these to object files if you want, but the tool will also automatically compile the files from the source if the .o file is not present.
Next, create a system environment variable called BUILD_BAT with the value of the newly created folder's directory (search it up if you don't know how).
Thirdly, create another environment variable called LIBOFILES which contains the name of all of the intended object files (even if not yet compiled) separated by spaces.
Finally, add the folder containing importlib, importlibs and maketool to PATH.

Once setup, call importlibs from a terminal in any directory and it will copy the .h and .o files for each name in PATHOLIB to the working directory.
If using cmd commands (not powershell) or a makefile, the .o files can automatically be linked to a file by adding %PATHOLIB% to the end of the g++ command.
