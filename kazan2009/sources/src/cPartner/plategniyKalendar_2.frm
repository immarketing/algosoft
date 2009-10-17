.LinkForm 'OFPAKTSE01_RTS_2' Prototype is 'OFPAKTSE'
.NameInList 'Платежный календарь_2'
.p 55
.DEFO LANDSCAPE
.create view t1 as select *
from
  AktOfp,
  dogovor,
  fpco,
  ATTRDOG,
  katorg,
  fpstbud
;
.var
  tt:word;
  Str1:string; 
  Str2:double;
  Otdel:string;
.endvar
.begin
 var shablon:string;
 var NameExcel:string;
 NameExcel:='C:\TEMP\7.4.1';
 shablon:=translatepath('%startpath%')+'xls\f_fpbudget\7.4.1.xls';
 tt:=1;
 xlCreateExcel('',true);
 if (xlIsExcelValid)                          
 {
   xlOpenWorkBook(shablon);
   xlSetActiveWorkBookByName(shablon);
   xlSaveAsWorkBookByName(shablon, NameExcel+'.xls'); 
 }                                                     
 else
 {
  message('Нет доступа к EXCEL')
 };
 xlSetActiveSheet(1);
 if (getfirst X$USERS where ((UserId == X$USERS.Atl_NRec)) = tsok) { xlSetCellStringValue(X$USERS.XU$FULLNAME,1, 16, 1, 16); }
end.
.begin
// runinterface('GetOtdel',Otdel);
// xlSetCellStringValue(Otdel,1, 17, 1, 17);
end.
.{
.[H
Отчет сформирован
.]H
.{CheckEnter AKTOFP_BODY
.begin

        xlSetCellStringValue(DocName         ,tt, 1, tt, 1);
	xlSetCellStringValue(Summa2     ,tt, 2, tt, 2);
        if (getfirst ATTRDOG where ((comp(AKTOFPNREC) == AktOfp.nrec and AktOfp.cDogovor == ATTRDOG.cDogovor))=tsok ) { xlSetCellStringValue(ATTRDOG.SUBJECT1,tt, 3, tt, 3); }
        if (getfirst fpstbud where (( Trim(DocName) == fpstbud.name (noindex) )) = tsok) {
          xlSetCellStringValue(fpstbud.levelcode,tt, 4, tt, 4);
	  xlSetCellStringValue(fpstbud.code,tt, 8, tt, 8);
        }
        if (getfirst dogovor where ((comp(AKTOFPNREC) == AktOfp.nrec and AktOfp.cDogovor == dogovor.nrec)) = tsok) { xlSetCellStringValue(dogovor.nodoc,tt, 5, tt, 5); }
        if (getfirst dogovor where ((comp(AKTOFPNREC) == AktOfp.nrec and AktOfp.cAppDogovor == dogovor.nrec)) = tsok) { xlSetCellStringValue(dogovor.nodoc + ' от ' + dogovor.ddoc + ' на сумму ' + dogovor.summa+'руб',tt, 6, tt, 6); }
        if (getfirst katorg where ((comp(AKTOFPNREC) == AktOfp.nrec and AktOfp.corg == katorg.nrec)) = tsok){ xlSetCellStringValue(katorg.unn,tt, 7, tt, 7); }
        if (getfirst persons where ((comp(AKTOFPNREC) == AktOfp.nrec and AktOfp.cpodr == fpco.nrec and fpco.cpersons == persons.nrec)) = tsok) { xlSetCellStringValue(persons.fio, 1, 10, 1, 10); }
        if (getfirst fpco where ((comp(AKTOFPNREC) == AktOfp.nrec and AktOfp.cpodr == fpco.nrec)) = tsok){ 
          xlSetCellStringValue(fpco.name,tt, 18, tt, 18);
          xlSetCellStringValue(fpco.name,1, 17, 1, 17);
        }

	xlSetCellStringValue(dates,1, 9, 1, 9);
      	inc(tt);
end.
.{CheckEnter AKTOFP_PERFOMANCE
.}
.{CheckEnter AKTOFP_LINE
.}
.}
.}
.begin
 xlRunMacro('GalFpUser_AfterReport');
 xlKillExcel;
end.
.endform