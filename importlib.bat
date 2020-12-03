cd > tmpFile
set /p cwd= < tmpFile
del tmpFile

IF EXIST %BUILD_BAT%%1.o GOTO OK
cd %BUILD_BAT%
g++ -o %1.o -c %1.cpp
cd %cwd%

:OK
copy %BUILD_BAT%%1.o
copy %BUILD_BAT%%1.h
