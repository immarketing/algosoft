// ��⥣�ਨ ����ᮢ
  Resurs_Is_Buy     = 0;  // ���㯭�� �����
  Resurs_Is_Manuf   = 1;  // ����⢥����� �ந�����⢠
!  Resurs_Is_Total   = 2;  // ����饭�� �����
  Resurs_Is_Fantom  = 3;  // ���⮬��
  Resurs_Is_SubCont = 4;  // �㡯���來�
  Resurs_Is_Work    = 36; // ��㤮�� ����
  Filtr_Value       = 1;  // ���祭�� npp, �� ����砥��� � ���. ⠡����

// ���� ��室�� - ��室��
  StZatr_Rasxod   = 0; // ����� ��室��
  StZatr_Doxod    = 1; // ����� ��室��
  StZatr_Prochie  = 2; // ��稥 �㬬�

  NameStZatr_Rasxod   = '��室�';
  NameStZatr_Doxod    = '��室�';
  NameStZatr_Prochie  = '��稥 �㬬�';

// �ਧ��� ��⥩ ᬥ�
  StSmet_Rasxod   = 0; // ����� ��室��
  StSmet_Gruppa   = 1; // ��㯯� ��⥩
  StSmet_InfPok   = 2; // ���ଠ樮��� ������⥫�
  StSmet_Doxod    = 3; // ����� ��室��

  NameStSmet_Rasxod   = '����� �����';
  NameStSmet_Gruppa   = '��㯯� ��⥩';
  NameStSmet_InfPok   = '���. ������⥫�';
  NameStSmet_Doxod    = '����� ��室��';

  NameElemZatr_InSvod = '��室�';

  wTune_TypeZatr_PB   = 0; // ����ன�� ��� �ନ஢���� ��
  wTune_TypeZatr_Smet = 1; // ����ன�� ��� ���� ᬥ�

// ����⠭�� ⨯� ���㬥�� ��� ���
#ifdef GAL7_11
  cgDEI_ForReport = 820;  // ���� ��᫥ ᡮન ��᪠�� �������� �� cgDoc_0820
  cgDEI_ForBalans = 819;  // ������ ��᫥ ᡮન ��᪠�� �������� �� cgDoc_0819
#else
  cgDEI_ForReport = 501;  // ���� ��᫥ ᡮન ��᪠�� ��������
  cgDEI_ForBalans = 501;  // ������ ��᫥ ᡮન ��᪠�� ��������
#end

#ifndef GAL7_12
#define Statlog_OLD
#endif

// ����⠭�� ⨯�� ������� ��� ���
  cgTypDEI_MoveBegSaldo = 1;
  cgTypDEI_MoveInCom    = 2;
  cgTypDEI_MovePotrCom  = 3;
  cgTypDEI_MoveSentCom  = 4;
  cgTypDEI_MoveProdCom  = 5;
  cgTypDEI_MoveProdComN = 6;
  cgTypDEI_MoveEndSaldo = 7;
  cgTypDEI_MoveSpisCom  = 8;

  cgTypDEI_ProdFact     = 1;
  cgTypDEI_ProdNorma    = 2;

  cgTypDEI_CostBegSaldo = 1;
  cgTypDEI_CostPotrCom  = 2;
  cgTypDEI_CostSpisCom  = 3;
  cgTypDEI_CostSpisComN = 4;
  cgTypDEI_CostEndSaldo = 5;

  cgTypDEI_LinkAmount   = 1;

  cgTypDEI_SaleBegSaldo = 1;
  cgTypDEI_SaleShipCom  = 2;
  cgTypDEI_Sale_SaleCom = 3;
  cgTypDEI_SaleEndSaldo = 4;

  cgTypDEI_ObjBegNzp  = 1;
  cgTypDEI_ObjZapusk  = 2;
  cgTypDEI_ObjProizv  = 3;
  cgTypDEI_ObjEndNzp  = 4;

// ����⠭�� ����� ᥡ��⮨���⥩
  cgSebestPlan    = 1;  // ��������
  cgSebestFact    = 2;  // 䠪��᪠�
  cgSebestFactBux = 3;  // 䠪��᪠� ��壠���᪠�
  cgSebestNormFV  = 4;  // ��ଠ⨢��� �� ��

  cgVidBalans_StrCalc    = 100;  // ����ன�� ������� ������権

// �ந�����⢥��� ���� (������)      VALUE = 0  �� ���������!!!
  IN_OPERATE       = 1;  // ����㯫����
  EX_OPERATE       = 2;  // ��।��
  LOST_OPERATE     = 4;  // ����
  SHIP_OPERATE     = 5;  // ���㧪�
  PURSHASE_OPERATE = 6;  // ���㯪�
  SALE_OPERATE     = 7;  // ���㧪�+���������  - ���� ���������
  PROD_OPERATE     = 8;  // �ந�������    䨪⨢��� ��� ����
  POTR_OPERATE     = 9;  // ���ࠡ�⪠    䨪⨢��� ��� ����
  SALE_Only_OPERATE       = 10; // ��������� � ᪫��� ��� �࠭��� �१ ���㧪�
  RETURN_OPERATE          = 11; // ������ �� ����ᮢ (ᬥ��) �� ᪫�� (�� �����⭮� ���������)
  RET_OPERATE_SHIP        = 12; // ������ ���㧪�
  RET_OPERATE_SALE_Only   = 13; // ������ �������樨 � ᪫���
  RET_OPERATE_SALE_InShip = 14; // ������ �������樨 � ���㧪�

  
  Rate_OtherSmet   = 24; // ���᫥��� �� ������
  Rate_VovlProd    = 15; // ᯥ栫���� ��
  Tune_All         = 16; // ��।������
  Move_Zatr        = 17; // ᯥ栫���� ������� ������
  FromOU_to_PB     = 18; // ᯥ栫���� ��।������ � �� �� ��
  Rate_ComponBPK   = 19; // ᯥ栫���� ���᫥��� ��������� ���


//���-�� ����権 ���
  Amount_Oper      = 10; // ������ ᨭ�஭���஢����� �  var wwPriorOst: array [1..10] of word;
  Amount_Prioritet = 7;  // �⮫쪮 ����権 - �ਮ��⭮��� �����

// ������������ ����権
  Naim_POTR_OPERATE  = '���ࠡ�⪠';
  Naim_PROD_OPERATE  = '�ந�������';
  Naim_EX_OPERATE    = '��।��';
  Naim_SHIP_OPERATE  = '���㧪�';
  Naim_SALE_OPERATE  = '���������';
  Naim_SALE_Only_OPERATE       = '��������� � ᪫���';
  Naim_SHIPandSale_OPERATE     = '���㧪�+���������';
  Naim_LOST_OPERATE            = '����';
  Naim_RETURN_OPERATE          = '������ ����ᮢ';
  Naim_RET_OPERATE_SHIP        = '������ ���㧪�';
  Naim_RET_OPERATE_SALE_Only   = '������ ॠ����樨';
  Naim_RET_OPERATE_SALE_InShip = '������ � ���㧪�';

  Naim_IN_OPERATE       = '����㯫����';
  Naim_PURSHASE_OPERATE = '���㯪�';

// ������ "����樨" � ����� �ਮ��⭮��� ��� ����㫨஢����
  Prior_POTR_OPERATE     = 1;  // ���ࠡ�⪠
  Prior_EX_OPERATE       = 2;  // ��।��
  Prior_SHIP_OPERATE     = 3;  // ���㧪�
  Prior_SALE_OPERATE     = 4;  // ���������
  Prior_LOST_OPERATE     = 5;  // ����
  Prior_RETURN_OPERATE   = 6;  // ������ ����ᮢ 
  Prior_RET_OPERATE_SHIP = 7;  // ������ ���㧪� 

// �஢��� ����㯠 � �� � ��
  Level_Admin   = 0;
  Level_Oforml  = 1;
  Level_Utverg  = 2;

// ���ﭨ�  �� � ��
  Status_POB_Oforml = 0;
  Status_POB_Utverg = 1;
  Status_POB_Obrab  = 2;
  Status_POB_Close  = 3;

// ���筨�� �ନ஢���� ��
  ValueSource_ManufReport        = 1;
  ValueSource_SummaryManufReport = 2;
  ValueSource_PrimaryDocument    = 4;
  ValueSource_Oborot             = 8;

// ������������ ���筨��� �ନ஢���� ��
  NameValueSource_ManufReport        = '��';
  NameValueSource_SummaryManufReport = '᢮��� ��';
  NameValueSource_PrimaryDocument    = '��ࢨ�� ���-��';
  NameValueSource_Oborot             = '���஢����';

// ������������ 䨪⨢���� ��
  Naim_FictObject  = '<�_楫��_��_����⮢�⥫�>';

// ���筨� ������ ��� ���
  cgFormFPB_Amount         = 0;
  cgFormFPB_Summa          = 1;
  cgFormFPB_AmountAndSumma = 2;
  cgFormFPB_AmountInSumma  = 3;
  cgFormFPB_AmountEIandDEI = 4;

  NameFormFPB_Amount         = '������⢮';
  NameFormFPB_Summa          = '�㬬�';
  NameFormFPB_AmountAndSumma = '���-�� � �㬬�';
  NameFormFPB_AmountInSumma  = '���-�� �� �㬬�';
  NameFormFPB_AmountEIandDEI = '���-�� � ���� ��';

  VidPr_Complet    = 0;  // ��⮢�� �த���
  VidPr_NZP        = 1;  // ���
  VidPr_Defect     = 2;  // �ࠪ
  VidPr_Waste      = 3;  // ��室� �ᯮ��㥬�
  VidPr_Lost       = 4;  // ����
  VidPr_WasteNoUse = 33; // ��室� ���ᯮ��㥬�

//// ������ �� �� Excel
  Chr_OrganizLat   = 'K';  // ��� �।����� (���)
  Chr_OrganizRus   = '�';  // ��� �।����� (���)
  Chr_DateLat      = 'D';  // ���� ��砫� � ����砭�� (���)
  Chr_DateRus      = '�';  // ���� ��砫� � ����砭�� (���)
  Chr_DCLat        = 'C';  // �������᪮� ���� (���)      -> Word_DC
  Chr_DCRus        = '�';  // �������᪮� ���� (���)      -> Word_DC
  Chr_GPRus        = '�';  // ��⮢�� �த��� (���)       -> Word_GP
  Chr_PFRus        = '�';  // ����䠡ਪ��� (���)           -> Word_PF
  Chr_WasteLat     = 'O';  // ��室� (���)                  -> Word_Waste
  Chr_WasteRus     = '�';  // ��室� (���)                  -> Word_Waste

////  �࠭���� ��⥣�਩ �� � ⠡����
  Word_GP          = 3;    // ��⮢�� �த���             -> Str_,Short_GP
  Word_PF          = 4;    // ����䠡ਪ���                 -> Str_,Short_GP
  Word_DC          = 5;    // �������᪮� ����            -> Str_,Short_DC
  Word_Waste       = 6;    // ��室�                        -> Str_Waste

////  ���㠫����� ᮪��. ������. ��⥣�਩ ��
  Short_DC         = '��'; // �������᪮� ����
  Short_GP         = '��'; // ��⮢�� �த���
  Short_PF         = '��'; // ����䠡ਪ���

////  ���㠫����� ��⠫���樨 �� ���
  Str_DC           = '����';      // �������᪮� ����
  Str_GP           = '�த���';  // �த���
  Str_Waste        = '��室�';     // ��室�


//  ��� �맮�� ����䥩� GetOtpEd
  TYPE_MC      = 1;
  TYPE_USL     = 2;
  TYPE_GrMC    = 3;
  TYPE_GrUSL   = 4;

// ������� 業 � ⨯�� 業
  PriceAlg_Manual    = 0;     // �����⭮� ���祭��
  PriceAlg_AverSale  = 1;     // �।��� 業� ॠ����樨
  PriceAlg_AverOtp   = 2;     // �।��� 䠪��᪨� 業�
  PriceAlg_PlanUcht  = 3;     // ��� �� ����� ᪫��᪨� ���⪮�
  PriceAlg_PlanCalc  = 4;     // ��� �� �᭮�� ᥡ��⮨����
  PriceAlg_Purchase  = 5;     // �।��� ���㯮�� 業�

// � ������������� � ⨯�� 業
  TypePrice_Period_No   = 0;  // ���������
  TypePrice_Period_Date = 1;  // �� ��⠬
  TypePrice_Period_Yes  = 2;  // �� ��ਮ���

// ���� ᬥ�
  cgVidSmet_Main    = 0;     // �᭮��� ������
  cgVidSmet_Nakl    = 1;     // �������� ��室�
  cgVidSmet_Stock   = 2;     // ������ ����ᮢ
  cgVidSmet_Sale    = 3;     // ॠ������
  cgVidSmet_Other   = 4;     // ��稥
  cgVidSmet_Prodaj  = 5;     // �த�� (⠪ ��� Sale 㦥 �ᯮ�짮����, � � ��⨭��)

// ��� ����஥� ���㧪� � ᬥ��
  cgSpace_Recive_Vx  = 0;     // �室�饥 ᠫ줮
  cgSpace_Recive_In  = 1;     // ������ �� ��ਮ�
  cgSpace_Recive_Out = 2;     // ᯨᠭ�

  NameSpace_Recive_Vx   = '�室�饥 ᠫ줮';
  NameSpace_Recive_In   = '������ �� ��ਮ�';
  NameSpace_Recive_Out  = 'ᯨᠭ�';
  NameSpace_Recive_Out2 = 'ᯨᠭ�(����窠)';

  cgVidSmet_Stock_Original          = 39;     // ������ ����ᮢ ���������

! ��� ��ꥪ� UniCalc - � ��砥 ���筨�� "��⮪�� ����㫨஢����"
! Stock - ���
  cgVidSmet_UniStock_EX_OPERATE_In  = 40;  // ��室
  cgVidSmet_UniStock_EX_OPERATE_Out = 71;  // ��।��
  cgVidSmet_UniStock_PROD_OPERATE   = 41;  // �ந�������-䨪⨢���
  cgVidSmet_UniStock_POTR_OPERATE   = 72;  // ���ࠡ�⪠-䨪⨢���
  cgVidSmet_UniStock_SHIP_OPERATE   = 73;  // ���㧪�
  cgVidSmet_UniStock_SALE_OPERATE   = 74;  // ���������
  cgVidSmet_UniStock_SALEPr_OPERATE = 78;  // ��������� � ᪫���
  cgVidSmet_UniStock_LOST_OPERATE   = 75;  // ����
  cgVidSmet_UniStock_RETURN_OPERATE        = 79;  // ������ ����ᮢ
  cgVidSmet_UniStock_RET_OPERATE_SALE_Only = 80;  // ������ ॠ����樨

! Sale - �૧
  cgVidSmet_UniSale_SHIP_OPERATE    = 42;  // ���㧪�
  cgVidSmet_UniSale_SALE_OPERATE    = 76;  // ���������
  cgVidSmet_UniSale_LOST_OPERATE    = 77;  // ����
  cgVidSmet_UniStock_RET_OPERATE_SHIP        = 81;  // ������ ���㧪�
  cgVidSmet_UniStock_RET_OPERATE_SALE_InShip = 82;  // ������ � ���㧪�

  cgVidSmet_UniStock_PROD_OPERATE_Compon = 44;  // "-" �ந������� ��� ���������

  cgVidSmet_Uni_Zero                     = 0;  // ��� �����䨪�樨 ��ࠬ���

// ��. ������������ ��� Excel-����
  cgName_Stock_EX_OPERATE_In  = '����㯫����';
  cgName_Stock_EX_OPERATE_Out = '��।��';
  cgName_Stock_PROD_OPERATE   = '�ந�������';
  cgName_Stock_PROD_Compon    = '�ந�������_���������';
  cgName_Stock_POTR_OPERATE   = '���ࠡ�⪠';
  cgName_Stock_SHIP_OPERATE   = '���㧪�';
  cgName_Stock_SALE_OPERATE   = '���������';
  cgName_Stock_SALEPr_OPERATE = '���������_�_᪫���';
  cgName_Stock_LOST_OPERATE   = '����';
  cgName_Stock_RETURN_OPERATE        = '������_����ᮢ';
  cgName_Stock_RET_OPERATE_SALE_Only = '������_ॠ����樨';
! Sale - �૧
  cgName_Sale_SHIP_OPERATE    = '����㯫����_���㧪�';
  cgName_Sale_SALE_OPERATE    = '���������_���㧪�';
  cgName_Sale_LOST_OPERATE    = '����_���㧪�';
  cgName_Sale_RET_OPERATE_SHIP        = '������_���㧪�';
  cgName_Sale_RET_OPERATE_SALE_InShip = '������_�_���㧪�';

// �㬬� ᬥ�
  cgField_BegSum    = 0;     // �室�饥 ᠫ줮
  cgField_PotrSum   = 1;     // ���ॡ����
  cgField_SpisSum   = 2;     // ᯨᠭ�
  cgField_EndSum    = 3;     // ��室�饥 ᠫ줮
  cgField_AllSum    = 7;     // �� �㬬�

  NameField_PotrSum = '���᫥��';
  NameField_SpisSum = 'ᯨᠭ�';

// �ਧ��� ��ॣ�樨 ����� � ��ꥪ� UniCalc
  cgPrzAgreg_No     = 0;     // �� �ॡ���� ��ॣ��� �� ����� �����
  cgPrzAgreg_Yes    = 1;     // �ॡ���� ��ॣ��� �� ����� �����

// �ਧ��� ��६����� / ����ﭭ�� �����
  cgPrzVar          = 0;     // ��६����
  cgPrzCon          = 1;     // ����ﭭ�
  cgPrzAll          = 7;     // ����ﭭ� + ��६����

// �ਧ��� ����砥��� / ������砥��� � ᥡ���. �����
  cgInclCost        = 0;     // ����砥��
  cgNoInclCost      = 1;     // ������砥��
  cgAllCost         = 2;     // ���

  cgNameInclCost    = '����砥��';
  cgNameNoInclCost  = '�᪫�砥��';
  cgNameAllCost     = '��';

// �ਧ���� �㬬 ����� ᬥ�
  cgPrzDopZ_Main  = 0;  // ������ ᬥ��
  cgPrzDopZ_Migr  = 1;  // �������� ����� ᬥ��
  cgPrzDopZ_Dooc  = 3;  // ���業�� ����� �����

// �ਧ���� ��ॣ�樨 �㬬 ����� ᬥ��
  cgPrzAgr_No     = 0;  // ������ �㬬� �����
  cgPrzAgr_Yes    = 1;  // ��ॣ�஢���� �㬬� ����� (�� ��� �)

// �ਧ���� ��ࢨ筮��/���筮��/��_����� ��� �㬬 ᬥ�
  cgPrimary_Yes       = 0;      // ��ࢨ��
  cgSecond_Yes        = 1;      // �����
  cgPrimary_Second_No = 65534;  // ��_������

  NamePrimary_Yes       = '��ࢨ��';
  NameSecond_Yes        = '�����';
  NamePrimary_Second_No = '�� ������';

// ��ਠ��� ����権 �奬� ��।������
  VariantOper_Pb   = 1;  // ᮣ��᭮ ��
  VariantOper_Tune = 2;  // ��।������
  VariantOper_Rate = 3;  // ���᫥���
  VariantOper_Algor= 4;  // �� ᯥ樠�쭮�� �������
  VariantOper_OpPB = 5;  // ᮣ��᭮ �������� ����ᮢ ������

//ᯥ樠��� ������
  SpecAlg_VovlProd  =  0;  //����������� �த���
  SpecAlg_ComponPF  = 10;  //���������� ����७���� �ᯮ�짮�����
  SpecAlg_LovuProd  = 20;  //������� �த���
  SpecAlg_MoveZatr  = 30;  //��७�� �����
  SpecAlg_RaspProd  = 40;  //��।������ � ��ꥪ⮢ ��� �� �த���
  SpecAlg_CalcPrice = 50;  //���� 業 ����㯫���� �����

!  cnst_InitPervBtor = ; //��� �⫠��� ��ࢨ��� ������ �����
  cnst_InitPervBtor = true; // False - ��� �⪫�祭�� �⫠��� ��ࢨ��� ������ �����
  cnst_Old_New_MRS  = FALSE; // True - ���� ��ਠ�� ��ࠡ�⪨ ���
  cnst_WriteTimIter = true; //��� ��䨫�஢�� ��।������

//�ਧ���� ��ࠬ��஢ � ����樨 ����㫨஢����
  OpSxema_Send     =  1;  //���⠢騪 �����
  OpSxema_Recive   =  2;  //�ਥ���� �����
  OpSxema_PodrSxem =  3;  //�����⨪� ����ᮢ ���⠢騪� ��� ���ࠧ������� �� 2-� ������

// �ਧ���� ���⠢騪��-�ਥ������ �����
  PrzBudjet_Smet     = 1;  // ᬥ�
  PrzBudjet_ShabSmet = 2;  // 蠡��� ᬥ��
  PrzBudjet_Budjet   = 3;  // ᬥ� ��ਮ��

// �ਧ���� ��⥩ ���⠢騪��-�ਥ������ �����
  PrzStat_StZatr       = 0;  // ����� �����
  PrzStat_Shab_or_Budj = 1;  // ����� 蠡���� ��� ᬥ��

// ��ਠ��� ����஥� SpSxemOp.wNastr
  Tune_SpSxemOp    = 1;  // ᯥ�䨪��� PodrSxem (����ன�� ��� ���ࠧ�������-���⠢騪�� ����樨 )
  Tune_TXOSxemaRas = 2;  // ᯥ�䨪��� SxemaRas (�����騥 ����ன�� ��� ��� �� ����樨 �奬�)

// �ਧ���� ����� ��।��塞�� �����
  PrzLimit_Summa   = 1;  // �㬬��
  PrzLimit_Procent = 2;  // ��業⮬

//�ਧ���� �⠢�� ���᫥���
  VidRate_Procent  =  0;  //��業�
  VidRate_Stavka   =  1;  //�⠢�� ���᫥���

//�ਧ���� ���
  BRN_Calculate  =  0;  //����塞�� ��
  BRN_User       =  1;  //���짮��⥫�᪠� �� (����)

 //�ਭ樯 ��।������/���᫥��� ��� ���짮��⥫�᪨� �� (����)
  SostBaz_Prop   =  0;  // �ய����
  SostBaz_Price  =  1;  // 業�

//�ਧ���� �� ����
  PrzEI_BRN_Volume =  0;  //��ꥬ��� ��
  PrzEI_BRN_Valut  =  1;  //�����
  PrzEI_BRN_Time   =  2;  //�६�

// ��ਠ��� ���� ��⥩ ������権 �� �業��
  PrzCalcOcOBj_Norm    = 0;  // �� ��ଠ�
  PrzCalcOcOBj_Nac     = 1;  // ᯮᮡ�� ���᫥���
  PrzCalcOcOBj_Otn     = 2;  // �⭮�⥫�� ᯮᮡ��

// �ਧ���� ������権
  PrzCalc_Pred  = 0;  // �।��।������
  PrzCalc_Full  = 1;  // �ந������

// ����塞� ���� ��।������
  cgBazR_Wages      = 1;     // �᭮���� ��
  cgBazR_Material   = 2;     // ���� ��⧠����
  cgBazR_Direct     = 3;     // ���� ������ � 楫��
  cgBazR_Indust     = 4;     // �ந�����⢥���� ᥡ��⮨�����
  cgBazR_Complet    = 5;     // ������ ᥡ��⮨�����
  cgBazR_Sale       = 6;     // 業� ॠ����樨
  cgBazR_Marginal   = 7;     // ��ন����� ��室
  cgBazR_TimeWork   = 8;     // �६� ࠡ��� ���ᮭ���
  cgBazR_TimeEquip  = 9;     // �६� ࠡ��� ����㤮�����
  cgBazR_Volume     = 10;    // ��ꥬ ���᪠
  cgBazR_VolMC      = 11;    // ��ꥬ � ���ਠ���

  cgBazCalc_Alg_None   = 0;    // ������ ���᫥��� 'ᯥ�����'
  cgBazCalc_Alg_Balans = 1;    // ������ ���᫥��� "�������. ��.��.� ������"
  cgBazCalc_Alg_Budjet = 2;    // ������ ���᫥��� "�㬬� � ᬥ��"
  cgBazCalc_Alg_StZatr = 3;    // ������ ���᫥��� "���祭� ��⥩"

  cgBazCalc_Alg_Balans_ProdCom  =   1;    // �ய��樮���쭮 �����
  cgBazCalc_Alg_Balans_BegSaldo =   2;    // �ய��樮���쭮 �室�饬� ᠫ줮
  cgBazCalc_Alg_Balans_InCom    =   4;    // �ய��樮���쭮 ����㯨��
  cgBazCalc_Alg_Balans_PotrCom  =   8;    // �ய��樮���쭮 ���ࠡ�⠭�
  cgBazCalc_Alg_Balans_SentCom  =  16;    // �ய��樮���쭮 ��।���
  cgBazCalc_Alg_Balans_ShipCom  =  32;    // �ய��樮���쭮 ���㦥��
  cgBazCalc_Alg_Balans_SaleCom  =  64;    // �ய��樮���쭮 ॠ�������� � ᪫���
  cgBazCalc_Alg_Balans_LostMov  = 128;    // �ய��樮���쭮 ����ﭮ �� �࠭����
  cgBazCalc_Alg_Balans_EndSaldo = 256;    // �ய��樮���쭮 ��室�饬� ᠫ줮
  cgBazCalc_Alg_Balans_BegShip  = 512;    // �ய��樮���쭮 ��砫쭮�� ����� ���㦥�����
  cgBazCalc_Alg_Balans_SaleShip = 1024;   // �ய��樮���쭮 ॠ�������� �� ���㦥�����
  cgBazCalc_Alg_Balans_LostShip = 2048;   // �ய��樮���쭮 ���� �� ���㦥�����
  cgBazCalc_Alg_Balans_EndShip  = 4096;   // �ய��樮���쭮 ����筮�� ����� ���㦥�����

  cgBazCalc_Alg_Budjet_Vxod = 1;    // �ய��樮���쭮 �室�饬� ᠫ줮
  cgBazCalc_Alg_Budjet_Potr = 2;    // �ய��樮���쭮 ��室�
  cgBazCalc_Alg_Budjet_Spis = 4;    // �ய��樮���쭮 ᯨᠭ��
  cgBazCalc_Alg_Budjet_Isxd = 8;    // �ய��樮���쭮 ��室�饬� ᠫ줮

  cgBazCalc_Alg_Coming = 1;    // �� ��室
  cgBazCalc_Alg_MadeIn = 2;    // �� �ந�������

  NameBazCalc_Alg_None   = 'ᯥ�����';
  NameBazCalc_Alg_Balans = '�������� ����ᮢ � ������';
  NameBazCalc_Alg_Budjet = '�㬬� � ᬥ��';
  NameBazCalc_Alg_StZatr = '���祭� ��⥩';

// ��� ���� � RepHead
  Prz_Svod_PO       = 0;  // �O
  Prz_Svod_SvPO     = 1;  // ᢮��� �O
  Prz_Svod_Bal      = 2;  // �ந��. ������
  Prz_Svod_Imp      = 3;  // ������. �ந��. ���� (����)
  Prz_Svod_ZZSum    = 4;  // ��� �� ������
  Prz_Svod_RZSum    = 5;  // ���।������ �����
  Prz_Svod_RRes     = 6;  // ���।������ ����ᮢ
  Prz_Svod_ResPrice = 7;  // ���筨�� 業 ॠ����樨 ��� ⥪�饣� ResPrice
  Prz_Svod_Diagnoz  = 8;  // �������⨪� ����権 ����㫨஢����
  Prz_Svod_BuildPD  = 9;  // �ନ஢���� ��ࢨ��� ���㬥�⮢
  Prz_Svod_CheckPD  =10;  // �����஢�� ��ࢨ��� ���㬥�⮢

//  ���㠫����� ����ᮢ � ��, �� � wkau < ������� ���祭��
  PrzWres_Visual    = 6;  // �� � �� ⮫쪮
  
// �������⨪� ����権 ����㫨஢����
// ��।������
  cgDiagnoz_NotPrice           = 1;  // �� �����㦥�� 業�
  cgDiagnoz_SostBaz            = 2;  // �� �����㦥� ������⥫� ��
  cgDiagnoz_ZeroPokazN         = 3;  // �㫥��� ������� ������⥫�     ��������!! ���冷� �⮣� �  ���� �� ������
  cgDiagnoz_ZeroPokazF         = 4;  // �㫥��� 䠪��᪨� ������⥫�
  cgDiagnoz_SaldoLessSum       = 5;  // �㬬� � ᯨᠭ�� �ॢ�蠥� �㬬� ��室�饣� ᠫ줮
  cgDiagnoz_NoBazDist          = 6;  // ��������� ���짮��⥫�᪠� ���� ��।������
  cgDiagnoz_BazDistPusto       = 7;  // ���������� ����� � ���짮��⥫�᪮� ����
  cgDiagnoz_PriceTuneLess      = 8;  // �� 業����� �ਭ樯� ��।������ � ᬥ� ���⠢騪� �������筮

// ���᫥���
  cgDiagnoz_RateNoSum          = 11; // � ᬥ� ���⠢騪� ��������� �㬬� ��� ᯨᠭ��
  cgDiagnoz_RateSmallSum       = 12; // � ᬥ� ���⠢騪� �������筮 + �㬬� (RepLink.Sum)
  cgDiagnoz_RateNoValut        = 13; // � ���� ���᫥��� �����४⭮ ������ �����
  cgDiagnoz_RateNoProcent      = 14; // �ᯮ�짮����� �� � ����� "��業�" �� ����᪠���� ��� ������⢥���� ������
  cgDiagnoz_ZeroRate           = 15; // �㫥��� ��
  cgDiagnoz_RateLPPrice        = 16; // ��������� 業� ����� �� ���ࠧ�������(RepLink.cRepSale)
  cgDiagnoz_RateLPVolume       = 17; // � �� ��������� ��ꥬ ���᪠ �������� �த�⮢
  cgDiagnoz_RateOnlyProcent    = 18; // � ����ன�� ����樨 ������ ���� ������ �⠢�� ���᫥��� � ����� "��業�"';
  cgDiagnoz_RateNoPB           = 19; // � ����ன�� ����樨 �� ��।���� ���祭� �த�⮢, � ���� �� ������ �⠢�� ���᫥���

// ��
  cgDiagnoz_RateLPNoStZatr     = 21; // � ����ன�� ����樨 �����-�ਥ���� ������ ���� ������� �
  cgDiagnoz_RateLPNoFoundPrice = 22; // �� �����㦥�� ��� ࠢ�� ��� �।��� 業� �����
  cgDiagnoz_RateLPZeroCN       = 23; // ������ �㫥��� �⠢�� ���᫥���

//����������
  cgDiagnoz_CompNoAddAnalit    = 30; // � ᬥ� ����� ���������� �������� �����⨪� � ���������� ��㯯� �����⨪ (Sloj.nrec)
  cgDiagnoz_CompNoPB           = 31; // �� �����㦥� �ந�����⢥��� ������ �� ᮯ��⠢����� �த��� (KatMc.nrec)
  cgDiagnoz_CompNoPBNrec       = 32; // �� �����㦥� ᮯ��⠢��� �த�� � ���� ����� =              (KatMc.nrec)
  cgDiagnoz_CompNoPB_EI        = 33; // �� ᮢ������ ���� �� ��� ᮯ��⠢����� �த��             (KatMc.nrec)
  cgDiagnoz_CompNoPBVolPrice   = 34; // �� �����㦥�� ��ꥬ ���᪠ � 業� ॠ����樨 ᮮ⢥������� �த�⮢ ���᪠ (ResPrice.Nrec)
  cgDiagnoz_CompNoPBPrice      = 35; // �� �����㦥�� 業� ॠ����樨 ��� ᮮ⢥������� �த�⮢ ���᪠             (ResPrice.Nrec)
  cgDiagnoz_CompNoPBVol        = 36; // �� �����㦥� ���� ᮮ⢥������� �த�⮢
  cgDiagnoz_CompNoPBAvPrice    = 37; // �� �����㦥�� �।��� 業� �த�樨 � �����䨪��� �裡 �� � ��
  cgDiagnoz_CompNoGAForStStock = 38; // ��� ���� ᬥ�� ����ᮢ �� ������ ��㯯� �����⨪                   (StBudjet.Nrec)
  cgDiagnoz_CompNoFormAnStock  = 39; // �� ��ନ஢��� ���祭�� �����⨪ ��� ���������� � ᬥ� ����ᮢ
  cgDiagnoz_CompNoGAForStMain  = 40; // ��� ���� ᬥ�� ����� �� ������ ��㯯� �����⨪                    (StBudjet.Nrec)
  cgDiagnoz_CompNoFormAnMain   = 41; // �� ��ନ஢��� ���祭�� �����⨪ ��� ���������� � ᬥ� �����
  cgDiagnoz_CompNoSummaMain    = 42; // �� �����㦥�� �㬬� ����� � ᬥ� ����� �� �� ��� ��������⮢
  cgDiagnoz_CompNoSummaStock   = 43; // �� �����㦥�� �㬬� ����� � ᬥ� ����ᮢ ��� �ନ஢���� �⮨���� ����������
  cgDiagnoz_CompSmalSummaMain  = 44; // ��� �ନ஢���� �⮨���� ��室��� ���⪮� � ᬥ� ����� �������筮
  cgDiagnoz_CompSmalSummaPost  = 45; // ��� ���᫥��� � ᬥ� ���⠢騪� �������筮
  cgDiagnoz_CompNulInCom       = 46; // � �� �����㦥� �㫥��� �室�騩 ���⮪ � ���㫥��� �室�饥 ᠫ줮 � ᬥ� ����ᮢ
  cgDiagnoz_CompNegInCom       = 47; // � �� �����㦥� ��室�騩 ���⮪ ������ ���� ?!
  cgDiagnoz_CompNoVariantPrice = 48; // �� ����� ��ਠ�� 業 � ����ன�� ᯥ栫���⬠
  cgDiagnoz_CompSmalSummaStock = 49; // ��� 㬥��襭�� ����� � ᬥ� ����ᮢ �������筮 
  cgDiagnoz_CompNoSummaPost    = 50; // � ᬥ� ����� �� �����㦥�� �㬬� ����� � �����⨪��, �������� � ���� ���������
  cgDiagnoz_CompNoSummaReturn  = 51; // � ᬥ� ����� ��� "������" ����譥 ᯨᠭ��� ����� �� �����㦥�� �㬬� � �������� �����⨪��
  cgDiagnoz_CompBPKNoVolume    = 52; // � �� �����㦥� �㫥��� ��ꥬ ���᪠ ���
  cgDiagnoz_CompBPKSpRateList  = 53; // ��������� �⠢�� ���᫥��� � ᯥ�䨪�樨 �������� ��
  cgDiagnoz_CompBPKNoSostBaz   = 54; // �� �����㦥�� � 㪠������ ���� ��।������
  cgDiagnoz_CompCalcPBZero     = 55; // �।������襭��� ᥡ��⮨����� ᮮ⢥�����饩 �த�樨 ࠢ�� ���
  cgDiagnoz_CompAvPricePBZero  = 56; // �।��� 業� �த�樨 �� �����㦥�� ��� ࠢ�� ���
  cgDiagnoz_CompNoCalcPB       = 57; // �� ����⠭� ᥡ��⮨����� �த�⮢ ���᪠
  cgDiagnoz_CompZeroSaldo      = 58; // �����㦥�� �㫥��� �室�饥 ᠫ줮 � ᬥ� ����ᮢ
  cgDiagnoz_CompNoVK_VPK       = 59; // � �����䨪��� �痢� �த�樨 � ����䠡ਪ�⮢ �� �����㦥�� �� ����� ����������
  cgDiagnoz_CompNoAveragePrice = 60; // �� �����㦥�� 業� ॠ����樨 ��� ᮮ⢥������� �த�⮢ ���᪠             (ResPrice.Nrec)
  cgDiagnoz_CompNoStSmet       = 61; // ����室��� � <����ன�� �����⬠> 㪠���� ���� ᬥ�� ����ᮢ
  cgDiagnoz_NegativeBegSaldo   = 62; // � �� �����㦥� ����⥫�� �室�騩 ���⮪ ?!
  cgDiagnoz_NOKoefIzmPrice     = 63; // �� �����㦥� �����樥�� ��������� �।��� 業� �����
  cgDiagnoz_OU_ProdNoPrice     = 64; // �� 㤠���� ���� ���祭�� 業� � ��ਠ�� 業
  cgDiagnoz_OU_ProdNoResPrice  = 65; // �� 㤠���� ���� ���祭�� 業� (�� ����� ��ਠ�� 業 ��� ��ਠ�� ����㫨஢����)
  cgDiagnoz_OU_ProdZeroPokaz   = 66; // �����㦥�� �㫥��� ���祭�� ������⥫�
  cgDiagnoz_OU_ProdPBNoData    = 67; // ���������� ����� � �ந�����⢥���� ������
  cgDiagnoz_OU_ProdNoSmetReciv = 68; // �� ������ ᬥ�-�ਥ���� �� �⮬� �� ���ࠧ������� ��� �몫���� �㬬

  Name_Diagnoz_NotPrice           = '�� �����㦥�� 業�';
  Name_Diagnoz_SostBaz            = '�� �����㦥� ������⥫� ��';
  Name_Diagnoz_ZeroPokazN         = '�㫥��� ������� ������⥫� ��';
  Name_Diagnoz_ZeroPokazF         = '�㫥��� 䠪��᪨� ������⥫� ��';
  Name_Diagnoz_SaldoLessSum       = '�㬬� � ᯨᠭ�� �ॢ�蠥� �㬬� ��室�饣� ᠫ줮';
  Name_Diagnoz_NoBazDist          = '��������� ���짮��⥫�᪠� ���� ��।������';
  Name_Diagnoz_BazDistPusto       = '���������� ����� � ���짮��⥫�᪮� ����';
  Name_Diagnoz_PriceTuneLess      = '�� 業����� �ਭ樯� ��।������ � ᬥ� ���⠢騪� �������筮';

  Name_Diagnoz_RateNoSum          = '� ᬥ� ���⠢騪� ��������� �㬬� ��� ᯨᠭ��';
  Name_Diagnoz_RateSmallSum       = '� ᬥ� ���⠢騪� ��� ᯨᠭ�� �� 墠��� �㬬� =';
  Name_Diagnoz_RateNoValut        = '� ���� ���᫥��� �����४⭮ ������ �����';
  Name_Diagnoz_RateNoProcent      = '�ᯮ�짮����� �� � ����� "��業�" �� ����᪠���� ��� ������⢥���� ������';
  Name_Diagnoz_ZeroRate           = '�㫥��� �⠢�� ���᫥���';
  Name_Diagnoz_RateLPPrice        = '��������� 業� ����� �� ���ࠧ�������';
  Name_Diagnoz_RateLPVolume       = '� �� ��������� ��ꥬ ���᪠ ��';
  Name_Diagnoz_RateOnlyProcent    = '� ����ன�� ����樨 ������ ���� ������ �⠢�� ���᫥��� � ����� "��業�"';
  Name_Diagnoz_RateNoPB           = '� ����ன�� ����樨 �� ��।���� ���祭� �த�⮢, � ���� �� ������ �⠢�� ���᫥���';
  
  Name_Diagnoz_RateLPNoStZatr     = '� ����ன�� ����樨 �����-�ਥ���� ������ ���� ������� �';
  Name_Diagnoz_RateLPNoFoundPrice = '�� �����㦥�� ��� ࠢ�� ��� �।��� 業� �����';
  Name_Diagnoz_RateLPZeroCN       = '������ �㫥��� �⠢�� ���᫥���';

  Name_Diagnoz_CompNoAddAnalit    = '� ᬥ� ����� ���������� �������� �����⨪� � ���������� ��㯯� �����⨪';
  Name_Diagnoz_CompNoPB           = '�� �����㦥� �ந�����⢥��� ������ �� ᮯ��⠢����� �த���';
  Name_Diagnoz_CompNoPBNrec       = '�� �����㦥� ᮯ��⠢��� �த�� � ���� �����';
  Name_Diagnoz_CompNoPB_EI        = '�� ᮢ������ ���� �� ��� ᮯ��⠢����� �த��';
  Name_Diagnoz_CompNoPBVolPrice   = '�� �����㦥�� ��ꥬ ���᪠ � 業� ॠ����樨 ᮮ⢥������� �த�⮢ ���᪠';
  Name_Diagnoz_CompNoPBPrice      = '�� �����㦥�� 業� ॠ����樨 ��� ᮮ⢥������� �த�⮢ ���᪠';
  Name_Diagnoz_CompNoPBVol        = '�� �����㦥� ���� ᮮ⢥������� �த�⮢';
  Name_Diagnoz_CompNoPBAvPrice    = '�� �����㦥�� �।��� 業� �த�樨 � �����䨪��� �裡 �� � ��';
  Name_Diagnoz_CompNoGAForStStock = '��� ���� ᬥ�� ����ᮢ �� ������ ��㯯� �����⨪';
  Name_Diagnoz_CompFormAnStock    = '�� ��ନ஢��� ���祭�� �����⨪ ��� ���������� � ᬥ� ����ᮢ';
  Name_Diagnoz_CompNoFormAnStock  = '�� ��ନ஢��� ���祭�� �����⨪ ��� ���������� � ᬥ� ����ᮢ';
  Name_Diagnoz_CompNoGAForStMain  = '��� ���� ᬥ�� ����� �� ������ ��㯯� �����⨪';
  Name_Diagnoz_CompNoFormAnMain   = '�� ��ନ஢��� ���祭�� �����⨪ ��� ���������� � ᬥ� �����';
  Name_Diagnoz_CompNoSummaMain    = '�� �����㦥�� �㬬� ����� � ᬥ� ����� �� �� ��� ��������⮢';
  Name_Diagnoz_CompNoSummaStock   = '�� �����㦥�� �㬬� ����� � ᬥ� ����ᮢ ��� �ନ஢���� �⮨���� ����������';
  Name_Diagnoz_CompSmalSummaMain  = '��� �ନ஢���� �⮨���� ��室��� ���⪮� � ᬥ� ����� �������筮';
  Name_Diagnoz_CompSmalSummaPost  = '��� ���᫥��� � ᬥ� ���⠢騪� �������筮';
  Name_Diagnoz_CompNulInCom       = '� �� �����㦥� �㫥��� �室�騩 ���⮪ � ���㫥��� �室�饥 ᠫ줮 � ᬥ� ����ᮢ';
  Name_Diagnoz_CompNegInCom       = '� �� �����㦥� ��室�騩 ���⮪ ������ ���� ?!';
  Name_Diagnoz_CompNoVariantPrice = '�� ����� ��ਠ�� 業 � ����ன�� ᯥ栫���⬠';
  Name_Diagnoz_CompSmalSummaStock = '��� 㬥��襭�� ����� � ᬥ� ����ᮢ �������筮';
  Name_Diagnoz_CompNoSummaPost    = '� ᬥ� ����� �� �����㦥�� �㬬� ����� � �����⨪��, �������� � ���� ���������';
  Name_Diagnoz_CompNoSummaReturn  = '� ᬥ� ����� ��� "������" ����譥 ᯨᠭ��� ����� �� �����㦥�� �㬬� � �������� �����⨪��';
  Name_Diagnoz_CompBPKNoVolume    = '� �� �����㦥� �㫥��� ��ꥬ ���᪠ ���';
  Name_Diagnoz_CompBPKSpRateList  = '��������� �⠢�� ���᫥��� � ᯥ�䨪�樨 �������� ��';
  Name_Diagnoz_CompBPKNoSostBaz   = '�� �����㦥�� � 㪠������ ���� ��।������';
  Name_Diagnoz_CompCalcPBZero     = '�।������襭��� ᥡ��⮨����� ᮮ⢥�����饩 �த�樨 ࠢ�� ���';
  Name_Diagnoz_CompAvPricePBZero  = '�।��� 業� �த�樨 �� �����㦥�� ��� ࠢ�� ���';
  Name_Diagnoz_CompNoCalcPB       = '�� ����⠭� ᥡ��⮨����� �த�⮢ ���᪠';
  Name_Diagnoz_CompZeroSaldo      = '�����㦥�� �㫥��� �室�饥 ᠫ줮 � ᬥ� ����ᮢ';
  Name_Diagnoz_CompNoVK_VPK       = '� �����䨪��� �痢� �த�樨 � ����䠡ਪ�⮢ �� �����㦥�� �� ����� ����������';
  Name_Diagnoz_CompNoAveragePrice = '�� �����㦥�� �।��� 業� ����� ��� �� ��� ࠢ�� ���';
  Name_Diagnoz_CompNoStSmet       = '����室��� � <����ன�� �����⬠> 㪠���� ���� ᬥ�� ����ᮢ';
  Name_Diagnoz_NegativeBegSaldo   = '� �� �����㦥� ����⥫�� �室�騩 ���⮪ ?!';
  Name_Diagnoz_NOKoefIzmPrice     = '�� �����㦥� �����樥�� ��������� �।��� 業� �����';
  Name_Diagnoz_OU_ProdNoPrice     = '�� 㤠���� ���� ���祭�� 業� � ��ਠ�� 業';
  Name_Diagnoz_OU_ProdNoResPrice  = '�� 㤠���� ���� ���祭�� 業� (�� ����� ��ਠ�� 業 ��� ��ਠ�� ����㫨஢����)';
  Name_Diagnoz_OU_ProdZeroPokaz   = '�����㦥�� �㫥��� ���祭�� ������⥫�';
  Name_Diagnoz_OU_ProdPBNoData    = '���������� ����� � �ந�����⢥���� ������';
  Name_Diagnoz_OU_ProdNoSmetReciv = '�� ������ ᬥ�-�ਥ���� �� �⮬� �� ���ࠧ������� ��� �몫���� �㬬';

// AnalSxem.wSendReceive
  wAgregAnal_CDR    = 9;   // ��ॣ������ �����⨪� ��� �㬬-���⠢騪�� � 3-� ������ ���
  wBazRaz_Amount    = 20;  // ��� ������⢥���� ��
  wBazRaz_Sum       = 21;  // ��� �㬬���� ��
  wTune_Txo_Send    = 22;  // ����ன�� �� �ନ஢���� ���
  wTune_Txo_Recive  = 23;  // ����ன�� �� �ନ஢���� ���

// ��ਠ��� ����㫨஢����
  MainVar_SpBalans      = 1;  // ��ࢮ��砫�� ��ਠ�� Original=1
  WorkVar_SpBalans      = 0;  // ����稩 ��ਠ�� ����㫨஢���� Original=0
  MainAndWork_SpBalans  = 2;  // �� ��ਠ��� �����६����

// ��� ��
  ALL_SCHET   = '��';
  NULL_SCHET  = '';
  ZERO_SCHET  = '00';

//�������쭮� ���祭��
 ContrMinSumma = 0.00000000001;  // ��� �����᪨� ���⮢ � ������権
 ContrMinSumma_Report  = 0.001;  // ��� ���⮢ ��� ���������� ����஥�
 ContrMinAmount_Report = 0.0001; // ��� ���⮢ ��� ���������� ����஥�

//ࠧ��⢫��饥 ���祭�� ��� SpPFPerc
 dDate_ComponPF = date(29,2,2096);

// ��ਠ��� ������ � SpAllCon
  cgAllCon_wBazTbl_SumBudj  = 1;  // ��뫪� �� SumBudj ��� ��।������ (⮫쪮 �� �६� ��।������)
  cgAllCon_wBazTbl_RepLink  = 2;  // ��뫪� �� RepLink ��� 䨪�஢����� �㬬
  cgAllCon_wBazTbl_Factor   = 3;  // ��뫪� �� RepCost � SumBudj ��� 䠪���� �⪫������
// ����� ⠡��� ࠧ��� (coSpBalans, coKatProiz ...  � ���� wBazTbl)

  cgAllCon_wContext_Null    = 0;  // no used for  wBazTbl
  cgAllCon_wContext_Compon  = 7;  // ��� ��������� 業� ����� � �����樥���
  cgAllCon_wContext_Puty    = 8;  // ��� 業 ॠ����樨 - ��� ����
  cgAllCon_wContext_Filial  = 9;  // ��� 業 ॠ����樨 - 䨫���� ����
  
 
// SpAllCon.wContext - ��� ���.��ࠬ��஢ ���
  cgAllCon_SpBill_AnResurs  = 0;  // �����⨪� ����ᮢ
  cgAllCon_SpBill_AnNaznach = 1;  // �����⨪� �����祭��
  cgAllCon_SpBill_PB        = 2;  // ��� ����� �த�樨
  cgAllCon_SpBill_Party     = 3;  // ��� ����� ���⨩
  cgAllCon_SpBill_Recive    = 4;  // ��� ����� �����⥫�� �த�樨

  cgAllCon_wObj_Null        = 0;  // �� �ᯮ������ ��� ������� ���������⢠ ����ᥩ
  cgAllCon_wObj_RepLink     = 1;  // ��뫪� �� RepLink ��� ��।������
  cgAllCon_wObj_RepCost     = 2;  // ��뫪� �� RepCost ��� ��।������ � ��� cgAllCon_wBazTbl_Factor
  cgAllCon_wObj_RepCostPr   = 3;  // ��뫪� �� RepCost �ந������� ��� ��।������
  cgAllCon_wObj_Operate     = 4;  // ��뫪� �� Sxemaras
  cgAllCon_wObj_ChShip      = 5;  // ��뫪� �� RepHead, ����騩 ������ ���㧪�
  cgAllCon_wObj_DopZSum     = 6;  // ��뫪� �� SumBudj ��� ����� ����� ��ਮ���

  cgAllCon_Iter_No           = 0;  // ��ࠬ��� ���⮩ ��ॣ�樨 �㬬 ᬥ�
  cgAllCon_Iter_Yes          = 1;  // ��ࠬ��� ���樮���� ��ॣ�樨 �㬬 ᬥ�
  cgAllCon_OpPB_New          = 2;  // ���� ��ਠ�� ���
  cgAllCon_New_Record        = 4;  // ����� ������ ��஦���� (����. ���. ᠫ줮)
  cg_New_Record_For_DopZSum  = 8;  // ����� ������ ��஦���� ��� ���

// ���� ��������
  VidDv_PURSHASE  = 1;  // "���㯪�"
  VidDv_In        = 2;  // "��室 � ���ࠧ�������"
  VidDv_Potr      = 3;  // "���ࠡ�⪠ ����ᮢ"
  VidDv_Spis      = 4;  // "���ᠭ�� ����ᮢ �� �த���"
  VidDv_Prod      = 5;  // "���� �த�樨"
  VidDv_LostProd  = 6;  // "���� � �ந�����⢥"
  VidDv_Lost      = 7;  // "���� �� �࠭����"
  VidDv_Send      = 8;  // "��।�� � ��㣮� ���ࠧ�������"
  VidDv_Ship      = 9;  // "���㧪� �த�樨 ���㯠⥫�"
  VidDv_LostShip  = 10; // "���� ���㦥���� �த�樨"

  VidDv_SaleProd  = 11; // "���㧪� � ᪫��� + ���������"
  VidDv_SaleShip  = 12; // "��������� �� ���㦥�����"
  VidDv_SaleOnly  = 16; // "��������� � ᪫���"

  VidDv_SaleMoney = 13; // "����窠 �� ॠ����樨"
  VidDv_BxSld     = 14; // "�室�饥 ᠫ줮"
  VidDv_Nakl      = 15; // "��������� �� ��������"

  VidDv_RETURN        = 17; // ������ �� ����ᮢ
  VidDv_RET_SHIP      = 18; // ������ ���㧪�
  VidDv_RET_SALE_Only = 19; // ������ ॠ����樨 � ᪫���
  VidDv_SALE_InShip   = 20; // ������ ॠ����樨 � ���㧪�

  VidDv_PereSortica   = 21; // "����� ���ࠡ�⪨"

////  ���� ⠡��� ������ ��� ����� �������� � 業

  DvRec_Name       = '�������� ����ᮢ';
  DvRec_Num        = 1;  // ����७��� ����� ⠡����
  DvRec_Post       = 1;  // ����㯨��
  DvRec_Post_Str   = '����㯨��';
  DvRec_Manuf      = 2;  // ���ࠡ�⠭�
  DvRec_Manuf_Str  = '���ࠡ�⠭�';
  DvRec_Proizv     = 3;  // �ந�������
  DvRec_Proizv_Str = '�ந�������';
  DvRec_Sent       = 4;  // ��।���
  DvRec_Sent_Str   = '��।���';
  DvRec_BxSld      = 8;  // �室�饥 ᠫ줮
  DvRec_BxSld_Str  = '�室�饥 ᠫ줮';

  VProd_Name       = '���� �த�⮢';
  VProd_Num        = 2;  // ����७��� ����� ⠡����
  VProd_Proizv     = 3;  // �ந�������
  VProd_Proizv_Str = '�ந�������';

  RasxR_Name       = '���室 ����ᮢ';
  RasxR_Num        = 3;  // ����७��� ����� ⠡����
  RasxR_Manuf      = 2;  // ���ࠡ�⠭�
  RasxR_Manuf_Str  = '���ࠡ�⠭�';
  RasxR_Spis       = 5;  // ᯨᠭ�
  RasxR_Spis_Str   = '���ᠭ�';

  OtgrR_Name       = '���㧪�, ॠ������';
  OtgrR_Num        = 4;  // ����७��� ����� ⠡����
  OtgrR_Otgr       = 6;  // ���㦥��
  OtgrR_Otgr_Str   = '���㦥��';
  OtgrR_Sale       = 7;  // ॠ��������
  OtgrR_Sale_Str   = '�����������';
  OtgrR_BxSld      = 8;  // �室�饥 ᠫ줮
  OtgrR_BxSld_Str  = '�室�饥 ᠫ줮';
  OtgrR_SaleMoney  = 9;  // ����窠
  OtgrR_SaleMn_Str = '����窠';
  OtgrR_Nakl       = 10;  // �� ��������
  OtgrR_Nakl_Str   = '�� ��������';

// ��ਠ��� �ନ஢���� � ����ன��� ���㧪� � ��
  VarintForm_No      = 0;  // �� �ନ஢���
  VarintForm_Debet   = 1;  // �����
  VarintForm_Kredit  = 2;  // �।��
  VarintForm_DebAnal = 3;  // ����⮢�� �����⨪�
  VarintForm_KrAnal  = 4;  // �।�⮢�� �����⨪�
  VarintForm_Value   = 5;  // �����⭮� ���祭��
  VarintForm_ActPer  = 6;  // ����� ��� �� ��������

  VarintForm_Saldo     = 1;  // ᠫ줮
  VarintForm_SaldoAnal = 3;  // �����⨪� ᠫ줮

  NameVarintForm_No      = '�� �ନ஢���';
  NameVarintForm_Debet   = '�����';
  NameVarintForm_Kredit  = '�।��';
  NameVarintForm_DebAnal = '�����⨪� ����⮢��';
  NameVarintForm_KrAnal  = '�����⨪� �।�⮢��';
  NameVarintForm_Value   = '���祭��';
  NameVarintForm_ActPer  = '����� ��� �� ��������';

// ��ਠ��� �ନ஢���� � ����ன��� ���㧪� � �����
  cgVarintSmet_DebAnal   = 0; // �����⨪� ����⮢��
  cgVarintSmet_KrAnal    = 1; // �����⨪� �।�⮢��
  cgVarintSmet_DebAnalKr = 2; // �����⨪� ����⮢��, �� ������⢨� �।�⮢��
  cgVarintSmet_KrAnalDeb = 3; // �����⨪� ����⮢��, �� ������⢨� �।�⮢��
  cgVarintSmet_Value     = 4; // ���祭��
  
  cgVarintSmet_Saldo     = 0; // �����⨪� ᠫ줮

  NameVarintSmet_DebAnal   = '�����⨪� ����⮢��';
  NameVarintSmet_KrAnal    = '�����⨪� �।�⮢��';
  NameVarintSmet_DebAnalKr = '�����⨪� ����⮢��, �� ������⢨� �।�⮢��';
  NameVarintSmet_KrAnalDeb = '�����⨪� �।�⮢��, �� ������⢨� ����⮢��';
  NameVarintSmet_Value     = '���祭��';

  NameVarintForm_Saldo     = '���줮';
  NameVarintForm_SaldoAnal = '�����⨪� ᠫ줮';

  SourceForm_PB_Prov       = 0;  // �஢����
  SourceForm_PB_Sldo       = 1;  // ᠫ줮


 // ���� - ������
  FormF1           = 1; //F1
  FormF2           = 2; //F2
  FormF3           = 3; //F3
  FormF4           = 4; //F4
  FormF5           = 5; //F5

  NumKol1          = 1; //������� 1
  NumKol2          = 2; //������� 2
  NumKol3          = 3; //������� 3
  NumKol4          = 4; //������� 4
  NumKol5          = 5; //������� 1
  NumKol6          = 6; //������� 6
  NumKol7          = 7; //������� 7
  NumKol8          = 8; //������� 8
  NumKol9          = 9; //������� 9

// �ਧ���� ��ࠬ��஢ � wWhat
  cgWhat_Izg      =  1;  // ����⮢�⥫�
  cgWhat_Smet_Uni =  2;  // ��� �㬬 cgVidSmet_Uni...
  cgWhat_StZtr    =  3;  // ���� �����
  cgWhat_StZtrNo  =  4;  // �᪫�砥�� ���� �����

 //���㠫����� �ਥ�����
  AnalNaslPB      = '�� ������';
  AnalKonkr       = '������� ��ꥪ�';
  AnalNoOpred     = '��ꥪ� �� ��।����';
  AnalNaslBudj    = '��᫥�������';
  AnalNaslSum_BR  = '�� ����';

  cnstAnalSendAll    = 0; //��� ��ꥪ�� ���⠢騪�
  cnstAnalNaslPB     = 0; //'�� ������'

  cnstAnalKonkr      = 1; //������� ��ꥪ�
  cnstNoOpred        = 2; //��ꥪ� �� ��।����

  cnstSendAllNoNull  = 3; //��� ��।������ ��ꥪ��
  cnstAnalNaslBudj   = 3; //'��᫥�������'

  cnstAnalNaslSum_BR = 4; //�� ���� - �������᪨

  cnstPluralAnal     = 100; // �� 100 ��ਠ�⮢ (coTable ॠ�쭮)

  pluralname         = '>��.�롮�\'; // ���㠫����� ��� �����⨪ ��

  cgResurs_Oper_Link = 1; // ������ ����� �� ��稭� ����樨 ��������
  cgResurs_Oper_Cost = 2; // ������ ����� �� ��稭� ���ࠡ�⪨-ᯨᠭ��
  cgResurs_Spec_OUPB = 3; // ������ ����� �� ����樨 ��।������ � �� �� ��
  cgResurs_Rate      = 4; // ������ ����� �� ����樨 ���᫥���
  cgResurs_Tune      = 5; // ������ ����� �� ����樨 ��।������
  cgResurs_Move      = 6; // ������ ����� �� ����樨 ��७��
  cgResurs_CostRZS   = 7; // ������ ����� �� "���।������ �����"
  cgResurs_CalcBudj  = 8; // ������ ����� �� ����� ᬥ�

  cgTune_Include     = 0; // ������ (��אַ�� ����⢨�)    ����ன�� ����ᯮ����権
  cgTune_Exclude     = 1; // �᪫��� (���⭮�� ����⢨�)

  cgContext_Deb      = 0; // ������⢥���� �롮ઠ ��� �����
  cgContext_Kred     = 1; // ������⢥���� �롮ઠ ��� �।��

  wPrzBill_Balans       = 0; // ������
  wPrzBill_Budjet       = 1; // ᬥ��
  wPrzBill_Oborot       = 2; // �ନ஢���� �஢����
  wPrzBill_ReportANPZ   = 3; // ����ன�� ��� �������� ����� (����ࠨ������ �� ��������)
  wPrzBill_LinkKatMC    = 4; // �裡 �ந�������� � ॠ���㥬�� ��
  wPrzBill_GroupMBZ     = 5; // ��㯯� ���
  wPrzBill_ExlusivePodr = 6; // ���祭� �᪫�砥��� ���
  wPrzBill_IncludePodr  = 7; // ���祭� ���-����窮�
  wPrzBill_BuildPD      = 8; // ����ன�� �ନ஢���� ��ࢨ��� ���㬥�⮢
  wPrzBill_CheckPD      = 9; // ����ன�� ���४�஢�� ��ࢨ��� ���㬥�⮢
  
  wPrzBill_StructCalc   = 10; // ����ன�� ������� ������権
  wPrzBill_CalcPF       = 11; // ����ன�� ��ࠬ��஢ ������権 �� ��
  wPrzBill_CalcNOPF     = 12; // ����ன�� ��ࠬ��஢ ������権 �����
  wPrzBill_Smeta        = 13; // ����ன�� ��ࠬ��஢ ᬥ� �� �ந�����⢮
  wPrzBill_Factor       = 14; // ����ன�� ��ࠬ��஢ 䠪��� ������

  wReferens_In        = 0;   // �室�騩 ��
  wReferens_InModif   = 1;   // �室�騩 ��, �� ᪮�४�ࢠ�� �㬬�
  wReferens_Out       = 2;   // ��室�騩 ��

  wOperate_Average    = 0;   // 業� ��।������ �� �ᥬ ���筨���
  wOperate_KatSopr    = 1;   // ���筨� 業 �� ��������� �� ����
  wOperate_Excel      = 2;   // ���筨� 業 �� Excel
  wOperate_Manual     = 3;   // ���筨� 業 �������� ������
  wOperate_Filial     = 4;   // ���筨�� 業 ����⠭�� �� 䨫�����
  
  Operate_KatSoprName = '�'; // ᮪�饭�� ���筨�� 業 �� ��������� �� ����
  Operate_ExcelName   = '�'; // ᮪�饭�� ���筨�� 業 �� Excel
  Operate_ManualName  = '�'; // ᮪�饭�� ���筨�� 業 ���������� ������
  Operate_FilialName  = '�'; // ᮪�饭�� ���筨�� 業 ����⠭��� �� 䨫�����

  VariantAlgor_BK      = 0;
  NameVariantAlgor_BK  = '���������� ����७���� �ᯮ�짮�����';
  VariantAlgor_BPK     = 1;
  NameVariantAlgor_BPK = '����ਯந�����⢥��� ����������';
  
  VidStrCalc_StZatr     = 0;
  VidStrCalc_NzpBeg     = 1;
  VidStrCalc_NzpEnd     = 2;
  VidStrCalc_Group      = 3;
  VidStrCalc_Coment     = 4;

  NameVidStrCalc_StZatr = '����� ����� ��ਮ��';
  NameVidStrCalc_NzpBeg = '����� ��� �� ��砫�';
  NameVidStrCalc_NzpEnd = '����� ��� �� �����';
  NameVidStrCalc_Group  = '��㯯���� �����';
  NameVidStrCalc_Coment = '�������਩';

  VidVolume_All         = 0;
  VidVolume_Tov         = 1;
  VidVolume_Rasx        = 2;

  NameVidVolume_All     = '������ ����';
  NameVidVolume_Tov     = '⮢��� ����';
  NameVidVolume_Rasx    = '����७��� ��室';

  Sxema_RaspPF          = 0; // ����।��쭠�
  Sxema_RaspNOPF        = 1; // ��ᯮ��䠡ਪ�⭠�

  NameSxema_RaspPF      = '����䠡ਪ���';
  NameSxema_RaspNOPF    = '��ᯮ��䠡ਪ���';

  cgRepHSopr_Act        = 1;   // ���� ᯨᠭ�� ��ନ஢���
  cgRepHSopr_SpisOU     = 100; // 䨪��� ᯨᠭ�� � �� �� ��

  cgVidEI_Proizv        = 0;   // �ந�����⢥����
  cgVidEI_ActOtp        = 1;   // ��⨢��� ���᪭��
  cgVidEI_Uchetn        = 2;   // ��⭠�

  NameVidEI_Proizv      = '�ந�����⢥����';
  NameVidEI_ActOtp      = '��⨢��� ���᪭��';
  NameVidEI_Uchetn      = '��⭠�';
  
  cgNatur_NoFormir      = 0;   // �� �ନ஢��� ��室�
  cgNatur_UchetEI       = 1;   // �ନ஢��� ��室� �� ����� ��
  cgNatur_FromPBEI      = 2;   // �ନ஢��� ��室� �� �� �� ��
  cgNatur_NominalEI     = 3;   // �ନ஢��� ��室� �� ���������� �� (���祭��)
  cgNatur_SentLevel     = 4;   // ��।�� �� ��� ���
  cgNatur_Waste         = 5;   // ��室�

  NameNatur_NoFormir    = '���';
  NameNatur_UchetEI     = '�� ����� ��';
  NameNatur_FromPBEI    = '�� �� �� ��';
  NameNatur_NominalEI   = '���祭��';
  NameNatur_SentLevel   = '��।���';
  NameNatur_Waste       = '��室�';