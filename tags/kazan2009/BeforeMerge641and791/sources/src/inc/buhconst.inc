//------------------------------------------------------------------------------
// Константы бухгалтерии
//------------------------------------------------------------------------------
// Константы для справочника счетов (Table BuhSchet)(SprSchet.vip)
//------------------------------------------------------------------------------
  cgDefSch         =  '';       //номер счета по умолчанию
  cgDefSub         =  '';       //номер субсчета по умолчанию
  cgAddSch         =  '--';     //для cmAddNewRec счета/субсчета
  cgSSSimv         =  '.';      //разделитель счета и субсчета в составном коде
  cgNotSch         =  '--';     //чтобы  различать понятия:
                                //"нет фильтра по счету/субсчету"
                                //и фильтр по "счет/субсчет неопределен"

  cgSchetLength    = 21;        // Длина счета - Длина строки типа tSchet3

                                // BuhSchet.VidSald
  cgASchet         =  0;        // \ активный счет
  cgPSchet         =  1;        //  | пассивный счет
  cgAPSchet        =  2;        //  | активно-пассивный счет

                                // BuhSchet.PlanMode
  cgTempSch        =  1;        // \ временный счет

                                // BuhSchet.Balans
  cgBalance        =  0;        // \ балансовый счет
  cgOffBalance     =  1;        //  | забалансовый счет

                                // BuhSchet.SetDef
                                // \ ...
  cgKassa          =  1;        //  | Касса
  cgRS             =  2;        //  | Расчетный
  cgValRS          =  3;        //  | Валютный
  cgOtchet         =  4;        //  | Расчеты с подотчетными лицами
  cgZarplata       =  5;        //  | Расчеты с персоналом по оплате труда
  cgSale           =  6;        //  | Реализация продукции (работ, услуг)
  cgInterAcc       =  7;        //  | Взаиморасчеты (авизо)

  cgPayRoll        =  501;      //  | Начисленная ЗП ( ! только для cgZarplata)
  cgDeposit        =  502;      //  | Депоненты      ( ! только для cgZarplata)
  cgSubInterAcc    =  701;      //  | Взаиморасчеты (авизо) ( ! только для cgInterAcc)

                                // BuhSchet.Saldo
  cgSaldo_RollToNDE     = 1;    // \  сальдо в разных валютах свернуть к национальной денежной единице
  cgSaldo_NoZeroForKau  = 2;    //  | не формировать нулевое сальдо по аналитике
  cgSaldo_ZeroInSameVal = 4;    //  | сальдо по аналитике считать нулевым если оно в одной валюте или НДЕ
  cgSaldo_RollToSub     = 8;    //  | сальдо по аналитике сворачивать до субсчетов счета
  cgSaldo_RollInReport  = 16;   //  | сворачивать сальдо в отчетах

                                // BuhSchet.Visib
  cgNoPodr              =   1;  // \  Учет по подразделению не ведется
  cgMustPodr            =   2;  //  | Учет по подразделению ведется обязательно
       cgReservedPodr04 =   4;  //  |   Не используется пока, но зарезервировано
       cgReservedPodr01 =   8;  //  |   Не используется пока, но зарезервировано
  cgCheckPodr           =  15;  //  |   Если (BuhSchet.Visib and cgCheckPodr) = 0 то счет обыкновенный
                                //  |   15 = 1 + 2 + 4 + 8
  cgNoVal               =  16;  //  | Учет в валюте не ведется
  cgMustVal             =  32;  //  | Учет в валюте ведется обязательно
       cgReservedVal64  =  64;  //  |   Не используется пока, но зарезервировано
       cgReservedVal128 = 128;  //  |   Не используется пока, но зарезервировано
  cgCheckVal            = 240;  //  |   Если (BuhSchet.Visib and cgCheckVal) = 0 то счет обыкновенный
                                //  |   240 = 16 + 32 + 64 + 128
//------------------------------------------------------------------------------
  cgPick_FilterFirst = 65520; // самый первый фильтр
  cgPick_Money       = 65527; // Для З/П
  cgPick_PostPol     = 65528; // Поставщики/Получатели - синоним Организаций
  cgPick_Valut       = 65529;
  cgPick_Podr        = 65530;
  cgPick_SubSch      = 65531;
  cgPick_Schet       = 65532;
  cgPick_Descr       = 65533;
  cgPick_DesGr       = 65534;
  cgPick_Filial      = 65535;
//------------------------------------------------------------------------------
// Перечень отчетов по Бухгалтерским данным
// B_AnUch.pas
  cgRepBuh_AnUch          =  10000;    // аналитический учет по счету
  cgRepBuh_GrKau          =  10001;    // аналитический учет по группе счетов
  cgRepBuh_AnUchVal       =  10002;    // аналитический учет по счету в валюте
  cgRepBuh_RepTree        =  10003;    // иерархические отчеты
  cgRepBuh_ConsAnUch      =  10004;    // аналитический учет по счету в консолидации
  cgRepBuh_ConsGrKau      =  10005;    // аналитический учет по группе счетов в консолидации
  cgRepBuh_PostPol        =  10006;    // обороты по поставщикам/получателям
// B_ObVed.pas
  cgRepBuh_GVKassa        =  10010;    // группировочная ведомость (Касса)
  cgRepBuh_GVBank         =  10011;    // группировочная ведомость по счету (ФРО)
  cgRepBuh_ObPodr         =  10012;    // обороты по структурным подразделениям
// B_DayUch.pas
  cgRepBuh_RubKassa       =  10020;    // рублевая касса
  cgRepBuh_ValKassa       =  10021;    // валютная касса
  cgRepBuh_DayUch         =  10022;    // ежедневный учет по счету
// DeltaVal.pas
  cgRepBuh_DayUchVal      =  10023;    // Ежедневный учет и расчет курсовых разниц
// B_ObSub.pas
  cgRepBuh_ObSub          =  10030;    // обороты в разрезе субсчетов
  cgRepBuh_JOrd1          =  10031;    // обороты в разрезе субсчетов по счету касса (ЖО-1)
  cgRepBuh_MainBook       =  10032;    // Главная книга
  cgRepBuh_AllMainBook    =  10033;    // Главная книга с нарастающим итогом.
// B_Valuta.pas
  cgRepBuh_ObValut        =  10040;    // обороты в валюте
  cgRepBuh_ObSubVal       =  10041;    // обороты по субсчетам в разрезе валют
  cgRepBuh_DeltaVal       =  10042;    // просмотр курсовых разниц
  cgRepBuh_MonDelta       =  10049;    // расчет курсовых разниц за месяц
// НЕ паскаль
  cgRepBuh_SeeSalM        =  10050;    // просмотр сальдо на начало месяца
  cgRepBuh_SeeSalD        =  10051;    // просмотр сальдо за день
  cgRepBuh_SeeSalDKassa   =  10052;    // просмотр сальдо за день по кассе
  cgRepBuh_SaldoDAS       =  10054;    // сальдо по группам счетов (ДАС)
// B_Saldo.pas
  cgRepBuh_ConsSeeSalM    =  10053;    // просмотр сальдо на начало месяца
  cgRepBuh_CalcSaldoDay   =  10056;    // перерасчет сальдо на начало дня
  cgRepBuh_CalcSaldoMon   =  10057;    // перерасчет сальдо на начало месяца
  cgRepBuh_CheckSaldoMon  =  10058;    // сравнение сальдо на начало месяца
  cgRepBuh_CalcSaldoDay50 =  10059;    // перерасчет сальдо на начало дня по Кассе
// B_JornAn.pas
  cgRepBuh_JOrder         =  10060;    // журнал-ордера, шахматки и т.д.
  cgRepBuh_JoTuned        =  10061;    // универсальный журнал-ордер
//------------------------------------------------------------------------------
  cgDefRepNastrName     = '<Настройка по умолчанию>';
//------------------------------------------------------------------------------
// BuhFiltr.vip
//------------------------------------------------------------------------------
  cgBuhFilter_SaldMoun     = 1;
  cgBuhFilter_SaldDay      = 2;
  cgBuhFilter_SaldoNM      = 3;
  cgBuhFilter_Oborot       = 4;  // обороты
  cgBuhFilter_BookProv     = 5;  // книга проводок (вызов из меню)
  cgBuhFilter_PrnOborot    = 6;  // печать оборотов
  cgBuhFilter_PrnSaldDay   = 7;  // просмотр сальдо за день
  cgBuhFilter_PrnSalDKassa = 8;  // просмотр сальдо за день по кассе
  cgBuhFilter_PrnSaldMon   = 9;  // печать сальдо за месяц
  cgBuhFilter_SeeSaldMon   = 10; // печать сальдо за месяц (из меню)
  cgBuhFilter_SaldoBL      = 11; // Сальдо по просроченной задолженности __BackLog__

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

  // ModeSet1 - Маски для параметров основного фильтра
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

  // ModeSet2 - Маски для параметров дополнительного фильтра
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
  // направление
  cgDirNotDef        = 0; // не определено
  cgDirPrihod        = 1; // приход
  cgDirRashod        = 2; // расход
  cgDirPrihodOrRashod= 3; // приход или расход (для фильтра только по ним)
  // пропускать сальдо при свертке до КАУ1 (вроде исп.только при закр.счетов)
  cgSkipSaldo_No     =  0;
  cgSkipSaldo_Kau1   =  1;
  // свертка КАУ до уровня
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

  // маска для поиска
  cgFindMask_No      =    0; // no
  cgFindMask_Filial  =    1; // cgPick_Filial
  cgFindMask_DesGr   =    2; // cgPick_DesGr
  cgFindMask_Schet   =    4; // cgPick_Schet
  cgFindMask_SubSch  =    8; // cgPick_SubSch
  cgFindMask_Podr    =   16; // cgPick_Podr
  cgFindMask_Kau     =   32; // no
  cgFindMask_PostPol =   64; // cgPick_PostPol
  cgFindMask_Valut   =  128; // cgPick_Valut

  // ведомость в
  cgVedVal_NDE       =    0; // NDE
  cgVedVal_RepVal    =    1; // ReportVal
  cgVedVal_NdeRep    =    2; // NDE + RepVal
  cgVedVal_KolNde    =    3; // Kol + NDE
  cgVedVal_KolRep    =    4; // Kol + RepVal

  // порядок: первыми идут КАУ, остальное -  не имеет значения
  // из-за Servfin.pas - свертка по послед.уровню
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
// Закладки общего интерфейса мастера идентификаторов. Активной закладкой может быть только одна!
  cgIdent_TXO        = 1;      // системные идентификаторы для TXO
  cgIdent_HozForm    = 2;      // ключи заданной TXO
  cgIdent_PAT        = 4;      // ПАТ-идентификаоры
  cgIdent_Typical    = 8;      // типовые алгоритмы и констранты
  cgIdent_All        = 15;     // все
  cgIdent_TXODef     = 16;     // активная закладка - системные идентификаторы для TXO
  cgIdent_HozFormDef = 32;     // активная закладка - ключи заданной TXO
  cgIdent_PATDef     = 64;     // активная закладка - ПАТ-идентификаоры
  cgIdent_TypicalDef = 128;    // активная закладка - типовые алгоритмы и констранты
//------------------------------------------------------------------------------
// Константы для типов Журнал-ордеров (B_JornAn.pas, JornTune.vip)
// [j]ornal[o]rder
  joJornalOrder   = 0;
  joAnalitObor    = 1;
  joOborSaldVed   = 2;
  joMainBook      = 3;
  joChess         = 4;
  joOtherVed      = 5;

  joJornalAnalit  = 101;
//------------------------------------------------------------------------------
//константы для работы с разпределением договоров
//[l]ink[d]ogovor
ld_Begin = 1;
ld_Result = 2;
//------------------------------------------------------------------------------
// константы параметров запуска Oborot
  cgiOborot_AllOborot         = 0; // все
  cgiOborot_DocOborot         = 1; // только документ
  cgiOborot_SoprHozOborot     = 4; // только по SoprHoz
// вид интерфейса
  cgiOborot_BrowseFull        = 0; // browse с панелью дополнительной информации снизу
  cgiOborot_ScreenFull        = 1; // окно с закладками
  cgiOborot_BrowseShort       = 2; // browse
  cgiOborot_ScreenShort       = 3; // маленький screen с минимумом информации
//------------------------------------------------------------------------------
// Константы для Курсовых разниц:
//          ! Когда умрет паскаль с расчетом курсовых - перенести в DiffRate.vih
// Valut.[D]ay[M]on
  dmMonth = 0;
  dmDay   = 1;
// Valut.[V]id[O]b - см. Valut.vip - List для Valut.VidOb
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
// константы для метода SetValueParam объектного интерфейса ObjDateRangeParam 
  cgDateRange_rtDay      = 0;
  cgDateRange_rtMonth    = 1;
  cgDateRange_rtQuarter  = 2;
  cgDateRange_rtHalfYear = 3;
  cgDateRange_rtYear     = 4;
  // значения параметра cgDateRange_rtDay
  cgDateRange_rsBegPeriod = 8;
  cgDateRange_rsEndPeriod = 9;
  cgDateRange_rsHozDoc    = 10;

