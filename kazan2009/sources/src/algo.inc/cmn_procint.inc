
#ifndef _CMN_PROCINT_inc_Included1
#define _CMN_PROCINT_inc_Included

// процедуры и функции, предназначенные для вызова внешними интерфейсами
procedure testinterface;
begin
  Message ('testinterface');
end;

create view forExternal
var
  isCreateAndKillExcel : boolean;
  isEmbedded      : boolean;
;



procedure SetIsEmbedded (val : boolean);
begin
  set forExternal.isEmbedded := val;
end;

function IsEmbedded : boolean;
begin
  set IsEmbedded := forExternal.isEmbedded;
end;

procedure SetIsCreateAndKillExcel (val : boolean);
begin
  set forExternal.isCreateAndKillExcel := val;
end;

function IsCreateAndKillExcel : boolean;
begin
  set IsCreateAndKillExcel := forExternal.isCreateAndKillExcel;
end;

#end

