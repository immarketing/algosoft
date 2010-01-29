const
! ���� ������塞�� � excel ��ப
  xlObject            =     1;          // ���� ��ꥪ�
  xlPower             =     2;          // ��ப� ��魮��
  xlTotal             =     3;          // ����쭠� ��魮���

//०�� ࠡ��� ����䥩� (�ᯮ������ � ����)
  cgiNo               =     0;          //-����� ०��
  cgiPick             =     1;          //-०�� �롮� ������
  cgiMulti            =     2;          //-�롮� ������ ������⢥���
  cgiNotEdit          =     4;          //-�᫨ ��� ������ ����� ।���஢���
  cgiNotClear         =     8;          //-�� ����� ��થ� �롮�
  cgiPickNode         =    16;          //-�롨��� ⮫쪮 ᠬ� ����
  cgiPickLeaf         =    32;          //-�롨��� ⮫쪮 ����
  cgiPickExt          =    64;          //-�������⥫�� ��࠭ � ���祭��� "��稥"
  cgiPickKau          =   128;          //-��१�ࢨ஢��� ��� ᯥ樠���� ��砥� �롮� ���
                                        //-�� �롨��� �� "��稥" �� "�� ��।������" ���
  cgiPickSub          =   256;          //-�롮� ����⮢ (� ⮫쪮 ��)
  cgiPickSch          =   512;          //-�롮� ��⮢ (� ⮫쪮 ��)
  cgiSingleEdit       =  1024;          //-�������� ���� ।���஢���� ��� ⥪�饣� NRec
  cgiSetFilter        =  2048;          //-��⠭�������� 䨫��� �� ����᪥
  cgiPickAlone        =  4096;          //-�롮� ������ ������� �� ������ ��� ᯥ樠��� ��砩 �롮�
                                        // ���� �ᯮ������ ⮫쪮 � Vip\Fin\Kau\3PickKau
//��� �ᯮ��㥬� �������樨 ����⠭� �맮�� ����䥩�
  cgiPickMult         =     3;                //-cgiPick or cgiMulti;
                       // �᫨ ������� �� 3, � cgiPick or cgiMulti, � �� �㤥�
                       // ��������, �� �� word

! ����⠭�� ⨯�� ���祭�� ⠡���� PlanValue
  cgiSpPlan  = 1; // ᯥ�䨪���
  cgiAgregat = 2; // ��ॣ��
  cgiCmpAgr  = 3; // ��ॣ�� �ࠢ��������� ���祭��
  cgiAnnual  = 4; // ���祭�� ������⥫�� ��� ���� "���� ����������� �� ���"
  cgiObjDog  = 5; // ������� ��� ��ꥪ� ��ந⥫��⢠
  cgiPlanJob = 6; // ���� ࠡ��

! ���� ��⥩
  cgiPwr  = 1;
  cgiNZSb = 2;
  cgiKV   = 3;
  cgiSMR  = 301;
  cgiObor = 302;
  cgiPIR  = 303;
  cgiOthe = 399;
  cgiOS   = 4;
  cgiNZSe = 5;

! ���⢥��⢨� ���祭�� ���� PlanValue.iArticle (PlanHier.fValue) � ����� �������� ����� �����������
  caPwr0 =  1;
  caPwr1 =  2;
  caPwr2 =  3;
  caPwr3 =  4;
  caPwr4 =  5;
  caOF0  =  6;
  caOF1  =  7;
  caOF2  =  8;
  caOF3  =  9;
  caOF4  = 10;
  caKV   = 11;
  caSMR  = 12;

! ������ ����஢���� ���祭�� ������⥫�� �����
  cgLeave    = 1; // ���࠭��� ���� ���祭��
  cgRewrite  = 2; // �������� ���묨
  cgAgregate = 3; // �㬬�஢��� ���� � ����
  cgDivide   = 4; // �����������
  
  cgConcurReg  = 0; // ����� ����஢��� � �� �� ॣ���� ���
  cgDiferReg   = 1; // ����� ����஢��� � ��㣮� ॣ���� ���
  cgDontCopy   = 2; // ����� �� ��������� ॣ���� ��� �� ����஢���

  cgBothPrc    = 0; // ����஢��� ������⥫� ����� � ������� � ⥪��� 業��
  cgBasicPrc   = 1; // ����஢��� ������⥫� ����� � ������� 業��
  cgCurrentPrc = 2; // ����஢��� ������⥫� ����� � ⥪��� 業��

! ��� �㭪樨 SetPlanVarParam - �� ������ ��ࠬ���
  cgKeep     = -1;

! �������� ���
  cgPlan   : word = 0;
  cgFact   : word = 1;
  cgReserv : word = 2;
  cgAnnual : word = 3;

! ����⠭�� ⨯�� ���祭�� ������⥫�� (�ᯮ������� � �㬬� � ॣ���஬ ���)
  cgRegMask  = 0011b; // ��᪠ ��� �뤥����� ०��� 業 �� PlanValue.iPrice
  cgTipMask  = 1100b; // ��᪠ ��� �뤥����� ०��� ������� �� PlanValue.iPrice
  cgUse      = 0000b; // �᢮���
  cgPay      = 0100b; // ����祭�
  cgAvans    = 1000b; // ������
  cgDebt     = 1100b; // ������祭�

! ������ 業
  cgBoth    = -1;
  cgBasic   = 0;
  cgCurrent = 1;

! ����⠭�� ०���� ࠡ��� � �������� (�ᯮ������� � �㬬� � ०���� 業)
  cgPrcMask  = 0001b; // ��᪠ ��� �뤥����� ०��� 業 �� PlanValue.iPrice
  cgNalMask  = 1110b; // ��᪠ ��� �뤥����� ०��� ������� �� PlanValue.iPrice
  cgTotal    = 0000b; // �㬬� �ᥣ�
  cgNoNal    = 0010b; // �㬬� ��� �������
  cgNalog    = 0100b; // �㬬� �������
  cgNoNds    = 0110b; // �㬬� �ᥣ� ��� ���
  cgNds      = 1000b; // �㬬� ���

! ������ �ࠢ�����
  cgCmpNone   = 0;
  cgCmpDiffer = 1;
  cgCmpProc1  = 2;
  cgCmpProc2  = 3;

! ���祭�� ���� PlanHier.wTable � ��ॣ������ 㧫�� ����娨
  cgwTotPlan : word = 1;
  cgwGrpKau  : word = 2;
  cgwTotKau  : word = 3;

! ���祭�� ���� SpPlan.wTable ��� ��ॣ������ �����⨪ ⨯� "��祥"
  cgwOther : word = 32000; // ����讥 ���祭�� ��� ⮣�, �⮡� �⮡ࠦ����� � ���� ᯨ᪠

! ���祭�� ���� SpPlan.wKau �� 㬮�砭��
  cgwNoKau   : word = 0;

! ������⢮ ������ ��᫥ ����⮩ � �㬬��
  cgwPrec4Sum : word = 2;

! ����⠭�� ��� ��ࠬ��஢ �⮡ࠦ���� ������
  cgiEmpty = 0; // �� �����
  cgiSpec  = 1; // ����䨪���
  cgiArt   = 2; // ���� �����
  cgiReg   = 3; // �������� ���
  cgiTip   = 4; // ���� ������⥫��
  cgiPrc   = 5; // ������ 業
  cgiNal   = 6; // ������ �������
  cgiSlave = 7; // ���稭���� �����
  cgiTabb1 = 8; // ��������� ������� 1
  cgiTabb2 = 9; // ��������� ������� 2

  cgiSlNo  = 0; // ���稭���� ����� ������㯭�
  cgiSlPer = 1; // ���稭���� ����� �� ��ਮ���
  cgiSlCO  = 2; // ���稭���� ����� �� ��

! ����⠭�� ��� ����権 ஫��
  cgiRows  = 1; // ���� � ��ப�
  cgiCols  = 2; // ���� � �������
  cgiParam = 3; // ���� � ��ࠬ���

#include galnet.csc

end;