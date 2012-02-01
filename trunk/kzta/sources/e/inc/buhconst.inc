//------------------------------------------------------------------------------
// ����⠭�� ��壠��ਨ
//------------------------------------------------------------------------------
// ����⠭�� ��� �ࠢ�筨�� ��⮢ (Table BuhSchet)(SprSchet.vip)
//------------------------------------------------------------------------------
  cgDefSch         =  '';       //����� ��� �� 㬮�砭��
  cgDefSub         =  '';       //����� ����� �� 㬮�砭��
  cgAddSch         =  '--';     //��� cmAddNewRec ���/�����
  cgSSSimv         =  '.';      //ࠧ����⥫� ��� � ����� � ��⠢��� ����
  cgNotSch         =  '--';     //�⮡�  ࠧ����� ������:
                                //"��� 䨫��� �� ����/������"
                                //� 䨫��� �� "���/����� ����।����"

  cgSchetLength    = 21;        // ����� ��� - ����� ��ப� ⨯� tSchet3

                                // BuhSchet.VidSald
  cgASchet         =  0;        // \ ��⨢�� ���
  cgPSchet         =  1;        //  | ���ᨢ�� ���
  cgAPSchet        =  2;        //  | ��⨢��-���ᨢ�� ���

                                // BuhSchet.PlanMode
  cgTempSch        =  1;        // \ �६���� ���

                                // BuhSchet.Balans
  cgBalance        =  0;        // \ �����ᮢ� ���
  cgOffBalance     =  1;        //  | �������ᮢ� ���

                                // BuhSchet.SetDef
                                // \ ...
  cgKassa          =  1;        //  | ����
  cgRS             =  2;        //  | ������
  cgValRS          =  3;        //  | ������
  cgOtchet         =  4;        //  | ������ � �������묨 ��栬�
  cgZarplata       =  5;        //  | ������ � ���ᮭ���� �� ����� ��㤠
  cgSale           =  6;        //  | ��������� �த�樨 (ࠡ��, ���)
  cgInterAcc       =  7;        //  | ����������� (�����)

  cgPayRoll        =  501;      //  | ���᫥���� �� ( ! ⮫쪮 ��� cgZarplata)
  cgDeposit        =  502;      //  | ���������      ( ! ⮫쪮 ��� cgZarplata)
  cgSubInterAcc    =  701;      //  | ����������� (�����) ( ! ⮫쪮 ��� cgInterAcc)

                                // BuhSchet.Saldo
  cgSaldo_RollToNDE     = 1;    // \  ᠫ줮 � ࠧ��� ������ ᢥ���� � ��樮���쭮� �������� ������
  cgSaldo_NoZeroForKau  = 2;    //  | �� �ନ஢��� �㫥��� ᠫ줮 �� �����⨪�
  cgSaldo_ZeroInSameVal = 4;    //  | ᠫ줮 �� �����⨪� ����� �㫥�� �᫨ ��� � ����� ����� ��� ���
  cgSaldo_RollToSub     = 8;    //  | ᠫ줮 �� �����⨪� ᢮�稢��� �� ����⮢ ���
  cgSaldo_RollInReport  = 16;   //  | ᢮�稢��� ᠫ줮 � �����

                                // BuhSchet.Visib
  cgNoPodr              =   1;  // \  ��� �� ���ࠧ������� �� �������
  cgMustPodr            =   2;  //  | ��� �� ���ࠧ������� ������� ��易⥫쭮
       cgReservedPodr04 =   4;  //  |   �� �ᯮ������ ����, �� ��१�ࢨ஢���
       cgReservedPodr01 =   8;  //  |   �� �ᯮ������ ����, �� ��१�ࢨ஢���
  cgCheckPodr           =  15;  //  |   �᫨ (BuhSchet.Visib and cgCheckPodr) = 0 � ��� ��몭������
                                //  |   15 = 1 + 2 + 4 + 8
  cgNoVal               =  16;  //  | ��� � ����� �� �������
  cgMustVal             =  32;  //  | ��� � ����� ������� ��易⥫쭮
       cgReservedVal64  =  64;  //  |   �� �ᯮ������ ����, �� ��१�ࢨ஢���
       cgReservedVal128 = 128;  //  |   �� �ᯮ������ ����, �� ��१�ࢨ஢���
  cgCheckVal            = 240;  //  |   �᫨ (BuhSchet.Visib and cgCheckVal) = 0 � ��� ��몭������
                                //  |   240 = 16 + 32 + 64 + 128
//------------------------------------------------------------------------------
  cgPick_FilterFirst = 65520; // ᠬ� ���� 䨫���
  cgPick_Money       = 65527; // ��� �/�
  cgPick_PostPol     = 65528; // ���⠢騪�/�����⥫� - ᨭ���� �࣠����権
  cgPick_Valut       = 65529;
  cgPick_Podr        = 65530;
  cgPick_SubSch      = 65531;
  cgPick_Schet       = 65532;
  cgPick_Descr       = 65533;
  cgPick_DesGr       = 65534;
  cgPick_Filial      = 65535;
//------------------------------------------------------------------------------
// ���祭� ���⮢ �� ��壠���᪨� �����
// B_AnUch.pas
  cgRepBuh_AnUch          =  10000;    // �������᪨� ��� �� ����
  cgRepBuh_GrKau          =  10001;    // �������᪨� ��� �� ��㯯� ��⮢
  cgRepBuh_AnUchVal       =  10002;    // �������᪨� ��� �� ���� � �����
  cgRepBuh_RepTree        =  10003;    // ������᪨� �����
  cgRepBuh_ConsAnUch      =  10004;    // �������᪨� ��� �� ���� � ���᮫���樨
  cgRepBuh_ConsGrKau      =  10005;    // �������᪨� ��� �� ��㯯� ��⮢ � ���᮫���樨
  cgRepBuh_PostPol        =  10006;    // ������ �� ���⠢騪��/�����⥫�
// B_ObVed.pas
  cgRepBuh_GVKassa        =  10010;    // ��㯯�஢�筠� ��������� (����)
  cgRepBuh_GVBank         =  10011;    // ��㯯�஢�筠� ��������� �� ���� (���)
  cgRepBuh_ObPodr         =  10012;    // ������ �� �������� ���ࠧ�������
// B_DayUch.pas
  cgRepBuh_RubKassa       =  10020;    // �㡫���� ����
  cgRepBuh_ValKassa       =  10021;    // ����⭠� ����
  cgRepBuh_DayUch         =  10022;    // ��������� ��� �� ����
// DeltaVal.pas
  cgRepBuh_DayUchVal      =  10023;    // ��������� ��� � ���� ���ᮢ�� ࠧ���
// B_ObSub.pas
  cgRepBuh_ObSub          =  10030;    // ������ � ࠧ१� ����⮢
  cgRepBuh_JOrd1          =  10031;    // ������ � ࠧ१� ����⮢ �� ���� ���� (��-1)
  cgRepBuh_MainBook       =  10032;    // ������� �����
  cgRepBuh_AllMainBook    =  10033;    // ������� ����� � ������騬 �⮣��.
// B_Valuta.pas
  cgRepBuh_ObValut        =  10040;    // ������ � �����
  cgRepBuh_ObSubVal       =  10041;    // ������ �� ����⠬ � ࠧ१� �����
  cgRepBuh_DeltaVal       =  10042;    // ��ᬮ�� ���ᮢ�� ࠧ���
  cgRepBuh_MonDelta       =  10049;    // ���� ���ᮢ�� ࠧ��� �� �����
// �� ��᪠��
  cgRepBuh_SeeSalM        =  10050;    // ��ᬮ�� ᠫ줮 �� ��砫� �����
  cgRepBuh_SeeSalD        =  10051;    // ��ᬮ�� ᠫ줮 �� ����
  cgRepBuh_SeeSalDKassa   =  10052;    // ��ᬮ�� ᠫ줮 �� ���� �� ����
  cgRepBuh_SaldoDAS       =  10054;    // ᠫ줮 �� ��㯯�� ��⮢ (���)
// B_Saldo.pas
  cgRepBuh_ConsSeeSalM    =  10053;    // ��ᬮ�� ᠫ줮 �� ��砫� �����
  cgRepBuh_CalcSaldoDay   =  10056;    // ������� ᠫ줮 �� ��砫� ���
  cgRepBuh_CalcSaldoMon   =  10057;    // ������� ᠫ줮 �� ��砫� �����
  cgRepBuh_CheckSaldoMon  =  10058;    // �ࠢ����� ᠫ줮 �� ��砫� �����
  cgRepBuh_CalcSaldoDay50 =  10059;    // ������� ᠫ줮 �� ��砫� ��� �� ����
// B_JornAn.pas
  cgRepBuh_JOrder         =  10060;    // ��ୠ�-�थ�, �嬠⪨ � �.�.
  cgRepBuh_JoTuned        =  10061;    // 㭨���ᠫ�� ��ୠ�-�थ�
//------------------------------------------------------------------------------
  cgDefRepNastrName     = '<����ன�� �� 㬮�砭��>';
//------------------------------------------------------------------------------
// BuhFiltr.vip
//------------------------------------------------------------------------------
  cgBuhFilter_SaldMoun     = 1;
  cgBuhFilter_SaldDay      = 2;
  cgBuhFilter_SaldoNM      = 3;
  cgBuhFilter_Oborot       = 4;  // ������
  cgBuhFilter_BookProv     = 5;  // ����� �஢���� (�맮� �� ����)
  cgBuhFilter_PrnOborot    = 6;  // ����� ����⮢
  cgBuhFilter_PrnSaldDay   = 7;  // ��ᬮ�� ᠫ줮 �� ����
  cgBuhFilter_PrnSalDKassa = 8;  // ��ᬮ�� ᠫ줮 �� ���� �� ����
  cgBuhFilter_PrnSaldMon   = 9;  // ����� ᠫ줮 �� �����
  cgBuhFilter_SeeSaldMon   = 10; // ����� ᠫ줮 �� ����� (�� ����)
  cgBuhFilter_SaldoBL      = 11; // ���줮 �� ����祭��� ������������ __BackLog__

  cgBuhFilter_SchetD    = 79;
  cgBuhFilter_SubSchD   = 80;
  cgBuhFilter_KauD1     = 81;
  cgBuhFilter_KauD2     = 82;
  cgBuhFilter_KauD3     = 83;
  cgBuhFilter_KauD4     = 84;
  cgBuhFilter_KauD5     = 85;
  cgBuhFilter_KauD6     = 86;
  cgBuhFilter_PodrD     = 87;

  cgBuhFilter_SchetK    = 89;
  cgBuhFilter_SubSchK   = 90;
  cgBuhFilter_KauK1     = 91;
  cgBuhFilter_KauK2     = 92;
  cgBuhFilter_KauK3     = 93;
  cgBuhFilter_KauK4     = 94;
  cgBuhFilter_KauK5     = 95;
  cgBuhFilter_KauK6     = 96;
  cgBuhFilter_PodrK     = 97;

  // ModeSet1 - ��᪨ ��� ��ࠬ��஢ �᭮����� 䨫���
  maskSchetD  =      1; // 0001h;
  maskSubD    =      2; // 0002h;
  maskKauD1   =      4; // 0004h;
  maskKauD2   =      8; // 0008h;
  maskKauD3   =     16; // 0010h;
  maskKauD4   =     32; // 0020h;
  maskKauD5   =     64; // 0040h;
  maskKauD6   =    128; // 0080h;
  maskPodrD   =    256; // 0100h;
  maskSchetK  =    512; // 0200h;
  maskSubK    =   1024; // 0400h;
  maskKauK1   =   2048; // 0800h;
  maskKauK2   =   4096; // 1000h;
  maskKauK3   =   8192; // 2000h;
  maskKauK4   =  16384; // 4000h;
  maskKauK5   =  32768; // 8000h;
  maskKauK6   =  65536; //10000h;
  maskPodrK   = 131072; //20000h;

  maskAllD    = maskSubD or maskKauD1 or maskKauD2 or maskKauD3
                         or maskKauD4 or maskKauD5 or maskKauD6;
  maskAllK    = maskSubK or maskKauK1 or maskKauK2 or maskKauK3
                         or maskKauK4 or maskKauK5 or maskKauK6;

  // ModeSet2 - ��᪨ ��� ��ࠬ��஢ �������⥫쭮�� 䨫���
  maskSoprHoz =      1; // 0001h;
  maskDescr   =      2; // 0002h;
  maskDesGr   =      4; // 0004h;
  maskKlProv  =      8; // 0008h;
  maskVal     =     16; // 0010h;
  maskFilial  =     32; // 0020h;
  maskTXO     =     64; // 0040h;
  maskDate    =    128; // 0080h;
  maskViOb    =    256; // 0100h;
//------------------------------------------------------------------------------
// ServFin.pas
//------------------------------------------------------------------------------
  // ���ࠢ�����
  cgDirNotDef        = 0; // �� ��।�����
  cgDirPrihod        = 1; // ��室
  cgDirRashod        = 2; // ��室
  cgDirPrihodOrRashod= 3; // ��室 ��� ��室 (��� 䨫��� ⮫쪮 �� ���)
  // �ய�᪠�� ᠫ줮 �� ᢥ�⪥ �� ���1 (�த� ��.⮫쪮 �� ����.��⮢)
  cgSkipSaldo_No     =  0;
  cgSkipSaldo_Kau1   =  1;
  // ᢥ�⪠ ��� �� �஢��
  cgSkipKau_No       =    0;
  cgSkipKau_FilialNo =    1;
  cgSkipKau_Schet    =    2;
  cgSkipKau_SubSch   =    4;
  cgSkipKau_KodSpo   =    8;
  cgSkipKau_Kau1     =   16;
  cgSkipKau_Kau2     =   32;
  cgSkipKau_Kau3     =   64;
  cgSkipKau_DesGr    =  128;
  cgSkipKau_cFilKor  =  256;
  cgSkipKau_KodValut =  512;
  cgSkipKau_ViOb     = 1024;
  cgSkipKau_Kau4     = 2048;
  cgSkipKau_Kau5     = 4096;
  cgSkipKau_Kau6     = 8192;

  // ��᪠ ��� ���᪠
  cgFindMask_No      =    0; // no
  cgFindMask_Filial  =    1; // cgPick_Filial
  cgFindMask_DesGr   =    2; // cgPick_DesGr
  cgFindMask_Schet   =    4; // cgPick_Schet
  cgFindMask_SubSch  =    8; // cgPick_SubSch
  cgFindMask_Podr    =   16; // cgPick_Podr
  cgFindMask_Kau     =   32; // no
  cgFindMask_PostPol =   64; // cgPick_PostPol
  cgFindMask_Valut   =  128; // cgPick_Valut

  // ��������� �
  cgVedVal_NDE       =    0; // NDE
  cgVedVal_RepVal    =    1; // ReportVal
  cgVedVal_NdeRep    =    2; // NDE + RepVal
  cgVedVal_KolNde    =    3; // Kol + NDE
  cgVedVal_KolRep    =    4; // Kol + RepVal

  // ���冷�: ���묨 ���� ���, ��⠫쭮� -  �� ����� ���祭��
  // ��-�� Servfin.pas - ᢥ�⪠ �� ��᫥�.�஢��
  cgServLev_Kau1     =    1;
  cgServLev_Kau2     =    2;
  cgServLev_Kau3     =    3; // = cLastKau or
  cgServLev_Kau4     =    4;
  cgServLev_Kau5     =    5;
  cgServLev_Kau6     =    6; // = cLastKau
  cgServLev_Schet    =    7;
  cgServLev_SubSch   =    8;
  cgServLev_Val      =    9;
  cgServLev_All      =   10;
//------------------------------------------------------------------------------
// �������� ��饣� ����䥩� ����� �����䨪��஢. ��⨢��� ��������� ����� ���� ⮫쪮 ����!
  cgIdent_TXO        = 1;      // ��⥬�� �����䨪���� ��� TXO
  cgIdent_HozForm    = 2;      // ���� �������� TXO
  cgIdent_PAT        = 4;      // ���-�����䨪����
  cgIdent_Typical    = 8;      // ⨯��� ������� � �����࠭��
  cgIdent_All        = 15;     // ��
  cgIdent_TXODef     = 16;     // ��⨢��� �������� - ��⥬�� �����䨪���� ��� TXO
  cgIdent_HozFormDef = 32;     // ��⨢��� �������� - ���� �������� TXO
  cgIdent_PATDef     = 64;     // ��⨢��� �������� - ���-�����䨪����
  cgIdent_TypicalDef = 128;    // ��⨢��� �������� - ⨯��� ������� � �����࠭��
//------------------------------------------------------------------------------
// ����⠭�� ��� ⨯�� ��ୠ�-�थ஢ (B_JornAn.pas, JornTune.vip)
// [j]ornal[o]rder
  joJornalOrder   = 0;
  joAnalitObor    = 1;
  joOborSaldVed   = 2;
  joMainBook      = 3;
  joChess         = 4;
  joOtherVed      = 5;

  joJornalAnalit  = 101;
//------------------------------------------------------------------------------
//����⠭�� ��� ࠡ��� � ࠧ�।������� ������஢
//[l]ink[d]ogovor
ld_Begin = 1;
ld_Result = 2;
//------------------------------------------------------------------------------
// ����⠭�� ��ࠬ��஢ ����᪠ Oborot
  cgiOborot_AllOborot         = 0; // ��
  cgiOborot_DocOborot         = 1; // ⮫쪮 ���㬥��
  cgiOborot_SoprHozOborot     = 4; // ⮫쪮 �� SoprHoz
// ��� ����䥩�
  cgiOborot_BrowseFull        = 0; // browse � ������� �������⥫쭮� ���ଠ樨 ᭨��
  cgiOborot_ScreenFull        = 1; // ���� � ����������
  cgiOborot_BrowseShort       = 2; // browse
  cgiOborot_ScreenShort       = 3; // �����쪨� screen � �����㬮� ���ଠ樨
//------------------------------------------------------------------------------
// ����⠭�� ��� ���ᮢ�� ࠧ���:
//          ! ����� ��� ��᪠�� � ���⮬ ���ᮢ�� - ��७��� � DiffRate.vih
// Valut.[D]ay[M]on
  dmMonth = 0;
  dmDay   = 1;
// Valut.[V]id[O]b - �. Valut.vip - List ��� Valut.VidOb
  vo_All     =  0;
  vo_Oborot  =  1;
  vo_Saldo   =  2;
  vo_SD_OD   =  3;
  vo_SK_OK   =  4;
  vo_SD      =  5;
  vo_SK      =  6;
  vo_OD      =  7;
  vo_OK      =  8;
//------------------------------------------------------------------------------
// ����⠭�� ��� ��⮤� SetValueParam ��ꥪ⭮�� ����䥩� ObjDateRangeParam 
  cgDateRange_rtDay      = 0;
  cgDateRange_rtMonth    = 1;
  cgDateRange_rtQuarter  = 2;
  cgDateRange_rtHalfYear = 3;
  cgDateRange_rtYear     = 4;
  // ���祭�� ��ࠬ��� cgDateRange_rtDay
  cgDateRange_rsBegPeriod = 8;
  cgDateRange_rsEndPeriod = 9;
  cgDateRange_rsHozDoc    = 10;
