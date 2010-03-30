
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

function getBudgetForm: comp;
begin
  set result := cTForm;
end;

procedure setBudgetForm(result : comp);
begin
  set cTForm := result;
end;

function getBudgetFormName: String;
begin
  set result := sTForm;
end;

property budgetForm : comp read getBudgetForm write setBudgetForm(result);
property budgetFormName : String read getBudgetFormName;

function getBudgetVarPlan: comp;
begin
  set result := cPlan1;
end;

procedure setBudgetVarPlan(result : comp);
begin
  set cPlan1 := result;
end;

function getBudgetVarPlanName: String;
begin
  set result := sPlan1;
end;

property BudgetVarPlan : comp read getBudgetVarPlan write setBudgetVarPlan(result);
property BudgetVarPlanName : String read getBudgetVarPlanName;

function getBudgetVarDopPlan: comp;
begin
  set result := cPlan2;
end;

procedure setBudgetVarDopPlan(result : comp);
begin
  set cPlan2 := result;
end;

function getBudgetVarDopPlanName: String;
begin
  set result := sPlan2;
end;

property BudgetVarDopPlan : comp read getBudgetVarDopPlan write setBudgetVarDopPlan (result);
property BudgetVarDopPlanName : String read getBudgetVarDopPlanName;


#end
