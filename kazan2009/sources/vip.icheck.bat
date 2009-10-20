@echo off


call sets.bat

if exist %ApiOutFile% del %ApiOutFile%
if exist AtlantIs.res del AtlantIs.res

rem set ApiExePath=D:\GALAKTIKA\GAL810\exe

rem set tempDateStr1=%DATE%
rem date 01.01.2007
rem %ApiExePath%\vip.exe iform741.prj %1

%ApiExePath%\vip.exe icheck.prj %1

rem %ApiExePath%\vip.exe all.prj %1
rem %ApiExePath%\vip.exe uks.prj %1
rem date %tempDateStr1%

if exist AtlantIs.res del AtlantIs.res

copy /Y *.res ..\

del *.res