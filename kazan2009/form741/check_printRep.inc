
form frm  ('alg5503_otchet_svod.out','alg5503_otchet_svod');

create view pRep3                     
as 
select *
  from 
       alg5503_rep03inf pRep3_ai,
       alg5503_rep03pck pRep3_r03i,
       alg5503_rep03an1 pRep3_ap,
       alg5503_usedco,  fpCO kCo,
       alg5503_usedpodr  , KatPodr kPodr

 where ((
    pRep3_r03i.AnCodes [1]  == pRep3_ai.AnCodes [1] and
    pRep3_r03i.cAnVal [1]   == pRep3_ai.cAnVal [1]  and
    pRep3_r03i.AnCodes [2]  == pRep3_ai.AnCodes [2] and
    pRep3_r03i.cAnVal [2]   == pRep3_ai.cAnVal [2] and

    pRep3_ap.AnCodes[1] == pRep3_r03i.AnCodes[1] and
    pRep3_ap.CANVAL[1]  == pRep3_r03i.CANVAL[1] and

    kPodr.nRec          /== alg5503_usedpodr.cPODR and
    kCo.nRec            /== alg5503_usedco.cCO
 ))
//order by ri.posNo,ri.COName,ri.PodrName
;
                
procedure prepareRep03;
begin
end;

procedure printRep03;
begin
  //prepareRep02;
  frm.write (Year(dWorkDate));  
  var rCnt : word;
  var rSum : double;
  rCnt := 0;
  rSum := 0;

  //frm.putEvent (feDoLoop);
  pRep3._loop pRep3_ap begin
    //Message (' pRep3.ap.AnValCodes[1] ' + pRep3.pRep3_ap.AnValCodes[1]);
    //frm.write (' ??? ');

    frm.write ( pRep3.pRep3_ap.AnValCodes[1]);
    frm.write ( pRep3.pRep3_ap.sum);

    rSum := rSum + pRep3.pRep3_ap.sum;

    if (pRep3.getFirst pRep3_r03i = tsOK) then begin 
      pRep3._loop pRep3_r03i begin
        frm.write ( pRep3.pRep3_r03i.AnValCodes[2]);
        frm.write ( pRep3.pRep3_r03i.sum);
      end;       
    end else begin
        frm.write ( '');
        frm.write ( 0);
    end;
    frm.putEvent (feBreak);

    rCnt := rCnt + 1;
  end;
  frm.putEvent (feBreak);

  frm.write ( rCnt );
  frm.write ( rSum );

  if (pRep3.GetFirst kPodr = tsOK)  then begin
    pRep3._loop kPodr begin
      frm.write ( pRep3.kPodr.Kod);
      frm.write ( pRep3.kPodr.Name);
    end;
  end else begin
    frm.write ( '');
    frm.write ( '');
  end;
  frm.putEvent (feBreak);

  if (pRep3.GetFirst kCo = tsOK)  then begin
    pRep3._loop kCo begin
      frm.write ( pRep3.kCo.Code);
      frm.write ( pRep3.kCo.Name);
    end;
  end else begin
    frm.write ( '');
    frm.write ( '');
  end;
  frm.putEvent (feBreak);

  frm.ShowFile('');

end;