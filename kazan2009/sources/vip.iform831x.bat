@echo off

rem set timever=901234

call sets.bat

if exist %ApiOutFile% del %ApiOutFile%
if exist AtlantIs.res del AtlantIs.res

rem set ApiExePath=D:\GALAKTIKA\GAL810\exe

set tempDateStr1=%DATE%
date 01.01.2007
%ApiExePath%\vip.exe iform831x.prj %IS_SZMN_DEBUG% %1
date %tempDateStr1%

if exist AtlantIs.res del AtlantIs.res

copy /Y *.res ..\

del *.res

