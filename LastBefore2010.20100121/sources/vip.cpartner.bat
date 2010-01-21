@echo off


call sets.bat

if exist %ApiOutFile% del %ApiOutFile%
if exist AtlantIs.res del AtlantIs.res


%ApiExePath%\vip.exe cPartner.prj %1

if exist AtlantIs.res del AtlantIs.res

copy /Y *.res ..\

del *.res
