@echo off


call sets.bat

if exist %ApiOutFile% del %ApiOutFile%
if exist AtlantIs.res del AtlantIs.res

rem set tempDateStr1=%DATE%
rem date 01.01.2007

%ApiExePath%\vip.exe uks.prj %1

rem date %tempDateStr1%

if exist AtlantIs.res del AtlantIs.res

copy /Y *.res ..\

del *.res