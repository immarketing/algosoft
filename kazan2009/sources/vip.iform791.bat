@echo off

set timever=901234

call sets.bat

if exist %ApiOutFile% del %ApiOutFile%
if exist AtlantIs.res del AtlantIs.res

rem set ApiExePath=D:\GALAKTIKA\GAL810\exe

rem set tempDateStr1=%DATE%
rem date 01.01.2007
%ApiExePath%\vip.exe iform791.prj %1
rem date %tempDateStr1%

if exist AtlantIs.res del AtlantIs.res

copy /Y *.res ..\

del *.res

