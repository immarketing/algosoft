@echo off

rem set timever=901234

call sets.bat

if exist %ApiOutFile% del %ApiOutFile%
if exist AtlantIs.res del AtlantIs.res

rem set ApiExePath=D:\GALAKTIKA\GAL810\exe

%ApiExePath%\vip.exe iform641.prj %1

if exist AtlantIs.res del AtlantIs.res

copy /Y *.res ..\

del *.res


