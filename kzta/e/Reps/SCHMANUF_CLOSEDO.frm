.linkform SCHMANUF_CLOSEDO prototype is SCHMANUF
.nameinlist 'КЗТА.Закрытие выбранных лимиток'
.var
  status_changed: boolean;
.endvar
.create view v
as select * //bd.nodoc, bd.ddoc, sps.npp, sps.kol/if(oe.koef>0,oe.koef,1), spkol.sumkol
     from basedoc bd, stepdoc sd, spstep sps, katotped oe,
     (select sum(spo.kol) (fieldname=sumkol)
        from spsopr sp, sporder spo
       where (( sps.nrec /== sp.cspstep and
                0        /== spo.vidorder and
                sp.nrec  /== spo.cspsopr))
     ) spkol
    where ((
      NREC_DO    == bd.nrec and
      bd.nrec    == sd.cbasedoc and
      sd.nrec    == sps.cstepdoc and
      sps.cotped == oe.nrec
    ));
.{ //цикл по ДО
.begin
  var _kol_nakl, _kol_do, _itog: double;
  _itog := 0;
  v._loop {
    _kol_nakl := v.spkol.sumkol;
    _kol_do   := v.sps.kol;
    _kol_do   := _kol_do/if(oe.koef>0,oe.koef,1);
    _itog     := _kol_do-_kol_nakl;
  }
  if (_itog=0) {
    if v.getfirst bd = tsOk {
      v.update current bd set bd.status := 3, bd.cnote := 400026F585B1FB6Ch;
      if v.getfirst sd = tsOk then v.update current sd set sd.status := 3;
    }
    status_changed := true;
  } else {
    status_changed := false;
  }
end.
.fields
NOMER
DDOC
if(status_changed, 'Установлен статус "Закрытый"','Статус оставлен')
.endfields
^ ^ ^
.{
.}
.{
.}
.} //цикл по ДО
.if PRINTPAGE
.else
.end
.endform