@echo off

set timever=901234

call sets.bat

if exist %ApiOutFile% del %ApiOutFile%
if exist AtlantIs.res del AtlantIs.res

rem set ApiExePath=D:\GALAKTIKA\GAL810\exe

set tempDateStr1=%DATE%
date 01.01.2007
%ApiExePath%\vip.exe iform741.prj %1
date %tempDateStr1%

if exist AtlantIs.res del AtlantIs.res

copy /Y *.res ..\

del *.res

rem copy debug.res .\.tmp\gal_GorbunovAV\atlantis_gal_GorbunovAV.res
rem copy debug.res resourses\szmn_form741.res

