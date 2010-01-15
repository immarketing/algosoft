.LinkForm 'OFPAKTSE01_RTS' Prototype is 'OFPAKTSE'
.NameInList 'Платежный календарь'
.p 55
.DEFO LANDSCAPE
.create view t1 as select
  AktOfp.*, ATTRDOG.*
from
  dogovor,
  synonym dogovor dog1
where ((
  comp(AKTOFPNREC) == AktOfp.nrec 
  and AktOfp.cDogovor == ATTRDOG.cDogovor
  and AktOfp.cDogovor == dogovor.nrec 
//  AktOfp.cDopsogl == dog1.nrec 
  and AktOfp.cAppDogovor == dog1.nrec 
  and AktOfp.corg     == katorg.nrec 
  and AktOfp.cpodr    == fpco.nrec 
  and fpco.cpersons   == persons.nrec
//and  dogovor.cval    == klval.nrec 
//and  AktOfp.cbudget  == fpstbud.nrec
  and Trim(DocName) == fpstbud.name (noindex)
))
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
 xlSetCellStringValue(fpco.name,1, 17, 1, 17);
end.
.{
.[H
Отчет сформирован
.]H
.{CheckEnter AKTOFP_BODY
.{table 't1'
.begin

      if (AktOfp.nrec <> comp(0)){
        if(tt=1){
	xlSetCellStringValue(DocName         ,tt, 1, tt, 1);
	xlSetCellStringValue(Summa2     ,tt, 2, tt, 2);
//    if (getfirst t1.ATTRDOG=tsok)
        xlSetCellStringValue(t1.ATTRDOG.SUBJECT1,tt, 3, tt, 3);
//	xlSetCellStringValue(fpSpAxtf.code,tt, 4, tt, 4);
	xlSetCellStringValue(fpstbud.levelcode,tt, 4, tt, 4);
	xlSetCellStringValue(fpstbud.code,tt, 8, tt, 8);
	xlSetCellStringValue(dogovor.nodoc,tt, 5, tt, 5);
//        xlSetCellStringValue(dogovor.nodoc + ' от ' + dogovor.ddoc + ' на сумму ' + dogovor.summa + klval.dollar,tt, 7, tt, 7);
	if (dog1.nrec<>comp(0)) { xlSetCellStringValue(dog1.nodoc + ' от ' + dog1.ddoc + ' на сумму ' + dog1.summa+'руб',tt, 6, tt, 6); }
	xlSetCellStringValue(katorg.unn,tt, 7, tt, 7);
	xlSetCellStringValue(dates,1, 9, 1, 9);
	xlSetCellStringValue(persons.fio, 1, 10, 1, 10);
        xlSetCellStringValue(fpco.name,tt, 18, tt, 18);
        xlSetCellStringValue(fpco.name,1, 17, 1, 17);
	inc(tt);
	Str1:=DocName;
	Str2:=Summa2;
	}
	else{
		if((DocName <> Str1) and (Summa2 <> Str2) and (Summa2<>0)){
			xlSetCellStringValue(DocName         ,tt, 1, tt, 1);                                                                     
			xlSetCellStringValue(Summa2     ,tt, 2, tt, 2);                                                                                                                                                                  
			xlSetCellStringValue(t1.ATTRDOG.SUBJECT1,tt, 3, tt, 3);                                                                  
			xlSetCellStringValue(fpstbud.levelcode,tt, 4, tt, 4);                                                                    
			xlSetCellStringValue(fpstbud.code,tt, 8, tt, 8);                                                                         
			xlSetCellStringValue(dogovor.nodoc,tt, 5, tt, 5);                                                                        
			if (dog1.nrec<>comp(0)) { xlSetCellStringValue(dog1.nodoc + ' от ' + dog1.ddoc + ' на сумму ' + dog1.summa+'руб',tt, 6, tt, 6); }                    
			xlSetCellStringValue(katorg.unn,tt, 7, tt, 7);                                                                           
			xlSetCellStringValue(dates,1, 9, 1, 9);
			xlSetCellStringValue(persons.fio, 1, 10, 1, 10);
                        xlSetCellStringValue(fpco.name,tt, 18, tt, 18);
                        xlSetCellStringValue(fpco.name,1, 17, 1, 17);                                                                                  
                        xlSetCellStringValue(AktOfp.nrec,tt, 19, tt, 19);
                        xlSetCellStringValue(AKTOFPNREC,tt, 20, tt, 20);
			inc(tt);                                                                                                                 
			Str1:=DocName;                                                                                                           
			Str2:=Summa2;                                                                                                            

		}
		else{}
	}
      }
end.
.}
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