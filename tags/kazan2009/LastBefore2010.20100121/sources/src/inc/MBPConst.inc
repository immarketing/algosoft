/*
 ���������������������������������������������������������������������������ͻ
 �                     (c) 1994,2002 ��௮��� ���������                    �
 � �஥��        : ���������                                                 �
 � ���⥬�       : ���                                                       �
 � �����        : 5.74+                                                     �
 � �����祭��    : ����⠭�� ����� "���"                                    �
 � �⢥��⢥��� : �⠭���� �਩ ��������                                    �
 ���������������������������������������������������������������������������ͼ
*/

Const

//-------------------------------------------------------------------------
// �������쭮� �ਭ������� �� �������� ���祭�� �㬬�, ��業�, ������⢠

  MBPMinDbl = 0.000000000001; // ����� 㦥����� �� �� �� �����

//-------------------------------------------------------------------------
// ������ ������ � ���� ����窨 ��� ���

  paKatMBP = 0;
  paMBPIn  = 1;
  paMBPOut = 2;

//-------------------------------------------------------------------------
// ���� ���������� ��� - ���� MBPMove.Status

  mbpPostDoc =   1;  // ����㯫���� ��� - ���� १��
  mbpMoveDoc =   2;  // ����७��� ��६�饭��
  mbpInExDoc =   4;  // ���� � ��ᯫ����
  mbpSpisDoc =   5;  // ��� �� ᯨᠭ��
  mbpIznoDoc =   6;  // ��������� ���᫥��� �����
  mbpNewPDoc =   7;  // ��������� ��८業��
  mbpFrExDoc =   8;  // ������ �� ��ᯫ��樨
  mbpOverDoc =   9;  // ���室������ ����誠
  mbpLostDoc =  10;  // ���ᠭ�� �������
  mbpInvtDoc =  11;  // ��� ������ਧ�樨 ���
  mbpInMCDoc = 604;  // ������ �� ᪫�� ��
  mbpFrMCDoc = 602;  // ��।�� �� � ���, ���祭�� KatSopr.VidSopr

//-------------------------------------------------------------------------
// ���� �������� ��室� ��� - ���� MBPIn.InState

  mbpCntOpIn = 7;   // ������⢮ ⨯�� ����権 ��室� ���

  mbpPostOp  = 1;   // ����㯫���� ��� ����
  mbpMoveOp  = 2;   // ����७��� ��६�饭��, cSopr -> MBPMove.NRec
  mbpFrMCOp  = 3;   // ����㯫���� � ᪫��� ��, ��� �᪫�祭�� cSopr -> KatSopr.NRec
  mbpInExOp  = 4;   // ���� � ��ᯫ����
  mbpNewPOp  = 7;   // ������ ��८業��
  mbpFrExOp  = 8;   // ������ �� ��ᯫ��樨
  mbpOverOp  = 9;   // ���室������ ����誠

//-------------------------------------------------------------------------
// ���� �������� ��室� ��� - ���� MBPOut.Status

  mbpCntOpOut= 4;   // ������⢮ ⨯�� ����権 ��室� ���
  mbpCountOp = mbpCntOpIn + mbpCntOpOut; // ������⢮ ⨯�� ����権 ���

  mbpIznoOp  = 1;   // ���᫥��� �����
  mbpSpisOp  = 4;   // C��ᠭ��

  mbpLostOp  = 3;   // �������
  mbpOutsOp  = 2;   // �室. "�㤠" ��।������ ���祭��� dopStat �. ����

// ���祭�� �������⥫쭮�� 䫠�� ����樨 ��室� - ���� MBPOut.DopStat

  mbpDpStMove = 0;  // �室 �� ����७���� ��६�饭��, ����� � ������� �� ��ᯫ., ��८業�� - ��।������ �� ⨯� ��室�
  mbpDpStInMC = 1;  // ��।��� � ��
  mbpDpStInOS = 2;  // ��।��� � ��

//-------------------------------------------------------------------------
// ���祭�� SoprHoz.TiDk ��� ����権 ���

  mbpCntSHIn = 5;   // ������⢮ ⨯�� �������権 �� ������ ��室� ���
  mbpCntSHOut= 4;   // ������⢮ ⨯�� �������権 �� ������ ��室� ���
  mbpCountSH = mbpCntSHIn + mbpCntSHOut; // ������⢮ ⨯�� �������権 �� ���

  mbpNoSH    = 0;   // ������ ��� ᮮ⢥�����饣� SoprHoz-�

// ��室�
  mbpPostSH  = 12;  // ��室, ����㯫���� ��� - ����, ����㯫���� � ᪫��� ��, ���� � ��ᯫ.
  mbpMoveSH  = 20;  // ����७��� ��६�饭��
  mbpNewPSH  = 80;  // ��������� ��८業��
  mbpFrExSH  = 28;  // ������ �� ��ᯫ��樨
  mbpOverSH  = 704; // ���室������ ����誠

// ���室�
  mbpIznoSH  = 13;  // ���᫥��� �����
  mbpSpisSH  = 19;  // C��ᠭ�� (��।�� � ��)
  mbpInMCSH  = 29;  // ��।�� ��� � ��
  mbpLostSH  = 703; // �������

//-------------------------------------------------------------------------
// ���浪��� ����� ����� ⠡���� MBPIn ��� �஢�ન ���४⭮�� �
// cmCheckField � ����樮��஢���� � cmCheckRecord. ���祭�� ��।����
// ��᫥����⥫쭮��� ����஫�.

  fldNotDefined     =  0;

  fldMBPIn_dIn      =  1;
  fldMBPIn_Nom      =  2;
  fldMBPIn_cOrg     =  3;
  fldMBPIn_cPodrF   =  4;
  fldMBPIn_cMolF    =  5;
  fldMBPIn_cPartyF  =  6;
  fldMBPIn_Price    =  7;
  fldMBPIn_KolDoc   =  8;
  fldMBPIn_PercDoc  =  9;
  fldMBPIn_PercNach = 10;
  fldMBPIn_KolFact  = 11;
  fldMBPIn_TPercent = 12;
  fldMBPIn_InState  = 13;
  fldMBPIn_cMBP     = 14;
  fldMBPIn_cPodr    = 15;
  fldMBPIn_cMol     = 16;
  fldMBPIn_cSopr    = 17;
  fldMBPIn_cMbpOut  = 18;
  fldMBPIn_DateSpis = 19;
  fldMBPIn_InEkspl  = 20;
  fldMBPIn_DateEksp = 21;
  fldMBPIn_DateEnd  = 22;
  fldMBPIn_DopInfo  = 23;
  fldMBPIn_cPers    = 24;
  fldMBPIn_ExtMod   = 25;
/*
  fldMBPIn_Status   = 26;
  fldMBPIn_DateZero = 27;
*/
  mbpInFld_Count    = 25;

//-------------------------------------------------------------------------
// ���浪��� ����� ����� ⠡���� MBPOut ��� �஢�ப ���४⭮��.

  fldMBPOut_dOut     =  1;
  fldMBPOut_Status   =  2;
  fldMBPOut_cMBPIn   =  3;
  fldMBPOut_Kol      =  4;
  fldMBPOut_Percent  =  5;
  fldMBPOut_tKOL     =  6;
  fldMBPOut_tPercent =  7;
  fldMBPOut_Nom      =  8;
  fldMBPOut_cMove    =  9;
  fldMBPOut_cPrSpis  = 10;
  fldMBPOut_dopStat  = 11;
  fldMBPOut_ExtMod   = 12;

//  ��ࠡ��� ��� ����������� ����� ��������� 㤮��� ��७��� � ������-������
  fldMBPOut_Summa    = 13;
  fldMBPOut_SummaIsn = 14;

  mbpOutFld_Count    = 12; // � PostCanChFld() ��᫥���� ��� ���� �� ��ࠡ��뢠����

//-------------------------------------------------------------------------
// ���浪��� ����� ����� ⠡���� MBPOut ��� �஢�ப ���४⭮��

  fldMBPMove_Status   =  1;
  fldMBPMove_Nom      =  2;
  fldMBPMove_dMove    =  3;
  fldMBPMove_cPodrF   =  4;
  fldMBPMove_cMolF    =  5;
  fldMBPMove_cPodrT   =  6;
  fldMBPMove_cMolT    =  7;
  fldMBPMove_cMBPMove =  8;
  fldMBPMove_cRecs1   =  9; // ���
  fldMBPMove_cRecs2   = 10; // ����⭨�
  fldMBPMove_dOpr     = 11; // cValOld

  fldMBPMove_Summa    = 12;
  fldMBPMove_SummaIsn = 13;

  mbpMoveFld_Count    = 13;

//-------------------------------------------------------------------------
// ���� �।�०����� � ��⠫�� �믮������ �㭪権 ������-������

  cfMBPRef2Dc =    1; // ������ �易�� � ���㬥�⮬
  cfMBPFromMC =    2; // �।���� ����㯨�� �� ��������� �����->���
  cfMBPIntoMC =    4; // ��।�� ��� � ��
  cfMBPIntoOS =    8; // ��।�� ��� � ��
  cfMBPOborot =   16; // ������� �஢���� �� ����樨
  cfMBPChldOp =   32; // C ��室�� �ந��������� ����樨 ���� ��室 �� ��६�饭��
  cfMBPNextOp =   64; // �뫨 ����樨 ��室� � ����襩 ��⮩, ������騥 �� ������ ����樨
  cfMBPNdSpis =  128; // � ᮮ⢥��⢨� � ��⮤���� �ॡ���� ���ᯨᠭ�� (���� � ��ᯫ���� ��� 100%)
  cfMBPClosed =  256; // ������ ��室���� � �����⮬ ��ਮ��
  cfMBPZPrice =  512; // ��室 � �㫥��� 業��
  cfMBPNchIzn = 1024; // �� �ॡ���� ���᫥��� ����� � ᮮ⢥��⢨� � ��⮤����
  cfSFOByNorm = 2048; // �뤠� ��� ��ନ஢��� �� �᭮����� ����
  cfMBPDocSpc = 4096; // ���㬥�� ��� ᮤ�ন� ��ப� ᯥ�䨪�樨
  cfMBPEmpSpc = 8192; // ���㬥�� �� ᮤ�ন� ��ப ᯥ�䨪�樨
  cfMBPRefSFO =16384; // ������ ��� �易�� � �뤠祩 ���

//-------------------------------------------------------------------------
// ���⥪��� �맮�� ��楤�� �஢�ન ����� ���⢥ত����

  ccxLogics =  0; // �� ������-������
  ccxMBPCrd =  1; // �� �� ���
  ccxPrsMBP =  2; // �� �� ��� ���
  ccxMBPDoc =  3; // �� ��㯯����� ���㬥�� ���
  ccxOsOper =  4; // �� ����樨 ����㯫���� ��
  ccxMCNakl =  5; // �� ��������� ᪫��->���
  ccxFantom =  6; // �� 䠭⮬��� ����樨 ��室�
  ccxParent =  7; // �맮� �� த�⥫�᪮�� ��室�
  ccxBatFun =  8; // �맮� �� ����⭮� �㭪樨
  ccxRet2MC =  9; // �맮� �� ���㬥�� ������ ��� �� ᪫��
  ccxPrsSFO = 10; // �맮� �� ����樨 �뤠� ���
  ccxUvlSFO = 11; // �맮� �� ���㬥�� ���⮢ �� 㢮�쭥���
  ccxDocSFO = 12; // �맮� �� ���㬥�� ��� ��� �஢�ન ���������� ��������� ����
  ccxIndivd = 14; // ��ᬠ�ਢ��� �⤥�쭮 ��� � ��� �� ����� � ��ᯫ����, ��६�饭�� � �.�.

// end;