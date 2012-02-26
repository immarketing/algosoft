//------------------------------------------------------------------------------
// !!!��������!!! ��� 䠩� ࠧ�࠭祭 � 5.8
// �᫨ ������ ����� ���������, �� ���뢠�� �ࠢ��� � ⠬
//                               (�᫨ ���� ����筮 :)
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// 04.03.2002 ��॥堫� �� GloConst, ⠪ ��� KauConst ࠧ�࠭祭, � ���ᨨ
//            KatKau ࠧ�諨�� 㦥 ����� ��� 5.8 � 7.1
//------------------------------------------------------------------------------
// ����� ��� ��⮮��������� KatKau
  verKauTable      = 709;
//------------------------------------------------------------------------------

// ����⠭�� ���樠����樨 ��ꥪ⮢ (����⭮)
  cgInit_Kau       = 1;
  cgInit_Hash      = 2;
  cgInit_TXO       = 4;
  cgInit_FPP       = 8;
  cgInit_FPR       = 16;

// ����⠭�� ��ࢮ�� � ��᫥����� ����஢ ���
  cFirstKAU        = 1;
  cLastKAU         = 6;

  cgMaxKauFP       = 5;

// ����⠭�� ���祭�� ���
  cKauNRecForOthers = 1;     // ��稥               comp(1)
  cKauNRecNotDefine = 0;     // �� ��।�����        comp(0)

  SetDefKau         = 0;     // ��� �� 㬮�砭�� - �뫠 ����⠭� � ��᪠��
  SetDefKodeKau     = 0;     // ��� �� 㬮�砭�� - �뫠 �㭪�� � ��᪠��

// ����⠭�� ��� �㭪樨 GetAnyKau ��ࠬ��� wMode ( �⥫��� �� ��ॢ��� �� ��⮢�� ����, �� ⠪ 㦥 ᫮������)
  cgAkSimple          = 0;  // ���� ��ᢥ�� ������������
  cgAkOther           = 1;  // cKauNRecForOthers ������� �� "��稥"
  cgAkOtherOrNoDef    = 2;  // � "��稥" � "�� ��।�����"
  cgAkNoDef           = 3;  // cKauNRecNotDefine ������� �� "�� ��।�����"

// ����⠭�� ��� �㭪樨 GivenAnName
// �. ⠪�� Tip&Stat\KauTable.xls
  cgAnName      = 1; // ������������ ���
  cgAnStrKod    = 2; // ��⥬�� String(NRec), ���� SpKau.Code
  cgAnStrKey    = 3; // ���� ��� ���஢�� � �����, ��।������ �� ����ன��� (StrName+StrKod) (StrKod+StrName)
  cgAnNode      = 4; // ��ப���� �।�⠢����� cNode (������饣� �������)
  cgAnAbbr      = 5; // 㭨����� ��ப��� ID ��� �ᯮ�짮����� � ��㫠� (!!!�� ���������!!!)
  cgAnCode      = 6; // 㭨����� ��� ��� �ࠢ��� ��� ���஢�� � ��⠫���� (����� ��������)

// ��⥬�� ����� ��㯯 ��� (KatKau.SysNum) !!! � 5.8 ⮫쪮 !!!
// ��⠢���� ��� �६����� ᮢ���⨬��� ����� ��室�����
  cgKatKau_UsKau   = 1;      // �㤥� 㤠����

// ���� ���
  cgKatKau_Table   = 0;      // ��⥬��
  cgKatKau_User    = 1;      // ���짮��⥫�᪨�
  cgKatKau_Set     = 2;      // ������
  cgKatKau_Enum    = 3;      // ����饭��
  cgKatKau_Interval= 4;      // ���ࢠ��
  cgKatKau_System  = 100;    // ��⥬�� ��⠫��� �� ��騥�� �����⨪��
  cgKatKau_Trash   = 200;    // �����४�� �����⨪�
  cgKatKau_Error   = 65000;  // �訡�� ��� �㭪権 GetSysNum � GetKauSysNum
  cgKatKau_BuhDisabled = 28; // = 4 or 8 or 16 - � ��媮���� ����� ��������, ����� �㦭� ������

// ��砫�� ����� ��㯯 ��� (KatKau.KodGroup)
  cgFirst_UsKau    = 10000;  // ��砫�� ����� ���짮��⥫�᪨� ��㯯 ���

// ��� ���ᨬ��쭮�� �������� ��� (��� ������஢���� ���)
  cgMax_KauBit     = 1024;

// ����⠭�� ��� �������⥫��� ��ਡ�⮢ ��� (���)
  cgDas_NoFor_SD   = 1;
  cgDas_NoFor_SK   = 2;
  cgDas_NoFor_OD   = 4;
  cgDas_NoFor_OK   = 8;

//��ࠬ���� ������ ����䨪�樮���� ��⠫����
  cgRecordView        = 0;      //��ᬮ��
  cgRecordEdit        = 1;      //।���஢����
  cgRecordInsert      = 2;      //��⠢��
  cgRecordDelete      = 3;      //㤠�����

// ����⠭�� ࠧ����� (��稭�� � 71)
  cgRazdel_First  = 1;   // ���� ���⥪��
  cgRazdel_FP     = 1;   // 䨭.�����஢����
  cgRazdel_PP     = 2;   // �ந�����⢥���� �����஢����
  cgRazdel_MC     = 3;   // ��� ��
  cgRazdel_Usl    = 4;   // ��� ��� - ��稭�� � 7_11
  // ������������� ������ ��������� cgRazdel_End ��� ���������� ��������
  cgRazdel_End    = 4;   // ��᫥���� ���⥪��
  cgRazdel_Error_NotFound = 1 ; //�訡�� ���᪠ ࠧ����

//��㯯� �����⨪ � ᫮� ������⥫�� �� ࠧ����� ��� (Sloj.Razdel)
  cgSloj_RazdelFP  = 1;      //䨭.�����஢����
  cgSloj_RazdelPP  = 2;      //�ந�����⢥���� �����஢����

//��㯯� �����⨪ � ᫮� ������⥫�� (Sloj.SysNum)
  cgSloj_Group     = 1;      //��㯯� �����⨪
  cgSloj_Sloj      = 2;      //᫮� �����⨪
  cgSloj_GrSloj    = 3;      //��㯯� ᫮�� �����⨪

//��㯯� �����⨪ � ᫮� ������⥫�� (Sloj.isActive)
  cgActivSloj      = 0;
  cgDeletedSloj    = 1;

//------------------------------------------------------------------------------
// ����⠭�� ��㯯 ���
//------------------------------------------------------------------------------

// !!! ��� ���������� ����஥��� ������᪨� ���⮢ ��������
// cg-����⠭�� �� �����⨪�
// � PAS\reptree.pas,
// � PAS\TXO\servkau.pas : GetKauCoTable, GetKauTabBuf

  cgKau_KatOrg     = word(1);   //
  cgKau_KatPodr    = word(2);   //
  cgKau_Persons    = word(3);   //
  cgKau_KatMC      = word(4);   //
  cgKau_KatUsl     = word(5);   //
  cgKau_BaseDoc    = word(6);   //
  cgKau_Zakaz      = word(7);   // �ந�����⢥��� ������. � 5.8 � 7.1 ࠧ�� ⠡����
  cgKau_GroupMC    = word(8);   //
  cgKau_GroupUsl   = word(9);   //
  cgKau_KatParty   = word(10);  //
  cgKau_GroupParty = word(11);  //
  cgKau_GroupSch   = word(12);  //
  cgKau_Zatr       = word(13);  //
  cgKau_Dogovor    = word(14);  //
  cgKau_OS         = word(15);  //
  cgKau_NMA        = word(16);  //
  cgKau_AppVeks    = word(17);  //
  cgKau_VidNor1    = word(18);  //
  cgKau_VidNor2    = word(19);  //
  cgKau_FpStBud    = word(20);  //
  cgKau_FpPeriod   = word(21);  //
  cgKau_FpCO       = word(22);  //
  cgKau_ObjRem     = word(23);  // ����㤮����� (� 5.8 ��ꥪ�� ६���)
  cgKau_KatMarsh   = word(24);  //
  cgKau_HDR_PS     = word(25);  //
  cgKau_Indent     = word(26);  // ���\������
  cgKau_Grafik     = word(27);  // ��䨪�
  cgKau_MnPlan1    = word(28);  // �ந�����⢥��� �����
  cgKau_MnPlan2    = word(29);  // ���� ᭠������
  cgKau_MnPlan3    = word(30);  // ���� ���
  // 31
  cgKau_GroupOfp   = word(32);  // cgKatKau_System: ��㯯� 䨭��ᮢ�� ��易⥫���
  // 33
  cgKau_FinSource  = word(34);  // cgKatKau_System: ���筨�� 䨭���஢����
  cgKau_TechOp     = word(35);  // cgKatKau_System: ��孮�����᪨� ����樨
  cgKau_Profes     = word(36);  //
  cgKau_NeedMt     = word(37);  // ���ॡ����� � ���ਠ���
  cgKau_NeedTr     = word(38);  // ���ॡ����� � ��㤮��� ������
  cgKau_NeedEq     = word(39);  // ���ॡ����� � �ந�����⢥���� ��魮���� (����㤮�����)
  cgKau_ObjBuild   = word(40);  // #Define __UKS__ ��쥪�� ��ந⥫��⢠.
  cgKau_HDR_KS     = word(41);  // ���������᪨� ᯥ�䨪�樨
  cgKau_VidRem     = word(42);  // ���� ६���
  cgKau_KatKodKpp  = word(43);  // #define _TAXES_  ��� ��稭� ���⠭���� �� ���
  cgKau_KatKodBud  = word(44);  // #define _TAXES_  �������� ����⮢ � ��� (���)
  cgKau_KatKodTpn  = word(45);  // #define _TAXES_  ���� ���⥦��/���᫥���
  cgKau_KatCompl   = word(46);  // ��⥭���� �� cgKatKau_System : H����� ���ਠ���
  cgKau_GrObjRem   = word(47);  // ��㯯� ����㤮����� (��㯯� ��ꥪ⮢ ६���)
  cgKau_KaWork     = word(48);  // cgKatKau_System: ���� ࠡ��
  cgKau_CorpoNeed     = word(49); // ��௮�⨢��� ���ॡ�����
  cgKau_CorpoDelivery = word(50); // ��௮�⨢�� ���� ���⠢��
  cgKau_CorpoManuf    = word(51); // ��௮�⨢�� ���� �ந�����⢠
  cgKau_CorpoBalance  = word(52); // ������ �������� �த�樨
  cgKau_VariaPl       = word(53); // ��ਠ�� �����஢����
  cgKau_AmortGr    = word(54);  // ����⨧�樮��� ��㯯� (��)
  cgKau_GrPlat     = word(55);  // ���⥦�� �।�⢠
  cgKau_IspOs      = word(56);  // �ਧ���� �ᯮ�짮����� ��
  cgKau_IspNMA     = word(57);  // �ਧ���� �ᯮ�짮����� ���
  cgKau_GrOs       = word(58);  // ��㯯� ��
  cgKau_KatNazna   = word(59);  // �����祭�� ᮯ஢���⥫��� ���㬥�⮢
  cgKau_KatMOL     = word(60);  // ���ਠ�쭮-�⢥��⢥��� ���
  cgKau_Marsh_Sp   = word(61);  // ����樨 ��������� ����
  cgKau_PS_Lines   = word(62);  // ����樨 �ந�����⢥���� ᯥ�䨪�権
  cgKau_KS_Lines   = word(63);  // ����樨 ���������᪨� ᯥ�䨪�権
  cgKau_TypStroy   = word(64);  // ���� ��ந⥫��⢠
  cgKau_VidStroy   = word(65);  // ���� ��ந⥫��⢠
  cgKau_Otrasl     = word(66);  // ���᫨ ��ந⥫��⢠
  cgKau_KatVidD    = word(67);  // ���� ������஢/ᮣ��襭��
  cgKau_GrOrg      = word(68);  // ��㯯� �࣠����権
  cgKau_Katego     = word(69);  // ��⥣�ਨ
  cgKau_Brigad     = word(70);  // �ਣ���
  cgKau_Credit     = word(71);  // �।���
  cgKau_ATD        = word(72);  // ���������⨢��-����ਠ�쭮� �������
  cgKau_StZatr     = word(73);  // ���� ����� ��ꥪ⮢ ��ந⥫��⢠
  cgKau_ClassObj   = word(74);  // ������ ��ꥪ⮢ ��ந⥫��⢠

//   !!! ������ �� 100 �� 1000 ������
//   ��१�ࢨ஢���� ��� ���짮��⥫�᪨� ��� ᪮�����஢����� �� ���ᨩ �� 7.1

//   !!! �᫨ �����⨪� �� ���������� �ᯮ�짮���� � ���ᨨ 5.8,
//   �� ᫥��� ��������� � �������� ��᫥ 5000
  cgKau_PlanOper   = word(5001); // ������樮��� �����
  cgKau_PlanSvod   = word(5002); // ������ �����
  cgKau_MarkaTS    = word(5003); // ��ન �࠭ᯮ���� �।��

// !!! ��� ���������� ����஥��� ������᪨� ���⮢ ��������
// cg-����⠭�� �� �����⨪�
// � PAS\reptree.pas,
// � PAS\TXO\servkau.pas : GetKauCoTable, GetKauTabBuf
//------------------------------------------------------------------------------