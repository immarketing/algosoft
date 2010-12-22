//
// Константы fldcolor.inc
//
// Они определяют порядковый номер элемента в дополнительной палитре
// Элементы дополнительной палитры описаны в RC\color.cfg
// Назначение : Названия элементов дополнительной палитры
//   PaletteNames:="этот цвет используется для..."
//   PaletteNames="а вот этот цвет для..."
//   и т.д.
// Назначение : Значения элементов дополнительной палитры
//   PaletteColors:=Black
//   PaletteColors=Maroon
//   и т.д.
// Константы в fldcolor.inc должны соответствовать порядку
// элементов доп. палитры описанных выше, нумерация их начинается с единицы (1)
// Константы с цифрами в конце имени зарезервированы, их можно переименовать
// и использовать по своему усмотрению

!системные цвета - должны начинаться с 1 и идти первыми
  ColorSysBlack    = 1;
  ColorSysMaroon   = 2;
  ColorSysGreen    = 3;
  ColorSysOlive    = 4;
  ColorSysNavy     = 5;
  ColorSysPurple   = 6;
  ColorSysTeal     = 7;
  ColorSysGray     = 8;
  ColorSysSilver   = 9;
  ColorSysRed      = 10;
  ColorSysLime     = 11;
  ColorSysYellow   = 12;
  ColorSysBlue     = 13;
  ColorSysFuchsia  = 14;
  ColorSysAqua     = 15;
  ColorSysWhite    = 16;

!общие
  ColorNeed         =  17;
  ColorError        =  18;
  ColorMark         =  19;
  ColorGray         =  20;
  ColorErrorRec     =  21;
  ColorSys06        =  22;
  ColorSys07        =  23;
  ColorSys08        =  24;
  ColorSys09        =  25;
  ColorSys10        =  26;

!основные
  ColorOSNotAmort   = 27;
  ColorOSIzn        = 28;
  ColorOSVyb        = 29;
  ColorOSOtkat      = 30;
  ColorOS05         = 31;

!векселя и кредиты
  ColorAppNPerf     = 32;
  ColorAppExpired   = 33;
  ColorSpAppNPerf   = 34;
  ColorExpired      = 35;
  ColorApp05        = 36;

!фин.менеджмент
  ColorOFPValuta    = 37;
  ColorOFPRest      = 38;
  ColorOFPPrihod    = 39;
  ColorOFPOborot    = 40;
  ColorOFPDefPlan   = 41;
  ColorOFPPlan      = 42;
  ColorOFPName      = 43;
  ColorOFPTopLevel  = 44;
  ColBkOFPTopLevel  = 45;
  ColorOFPInertCl   = 46;
  ColorOFPDeficit   = 47;
  ColorOFPAktNotPerf= 48;
  ColorOFPAktPerf   = 49;
  ColorOFPAktToday  = 50;
  ColorOFPAktRisk   = 51;

!фин.планирование
  ColorFPCompare    = 52;
  ColorFPResultComp = 53;
  ColorFPCritical   = 54;
  ColorFPShow       = 55;
  ColorFPNeed       = 56;
  ColorFPFormula    = 57;

!акты взаимозачета
  ColorVZZakr       = 58;
  ColorVZProsrocheno= 59;
  ColorVZNorm       = 60;

!розничная торговля
  ColorSkip         = 61;

! Настройка
  ColorSysTune    = 62;
  ColorUserTune   = 63;

!Управление ремонтами
  ColorRemPlan    = 64;
  ColorRemNotPlan = 65;
  ColorRemNotRab  = 66;
  ColorRemToday   = 67;
  ColorRemPeriod  = 68;
  ColorRemFilter  = 69;
  ColorRemSort    = 70;
  ColorRemVidGraf = 71;

!! Следующие 32 константы не перемещать,
!! они должны следовать строго друг за другом!!!
!Финансовый анализ - палитра 1 -
  ColorFA0101 = 72;
  ColorFA0102 = 73;
  ColorFA0103 = 74;
  ColorFA0104 = 75;
  ColorFA0105 = 76;
  ColorFA0106 = 77;
  ColorFA0107 = 78;
  ColorFA0108 = 79;
!Финансовый анализ - палитра 2
  ColorFA0201 = 80;
  ColorFA0202 = 81;
  ColorFA0203 = 82;
  ColorFA0204 = 83;
  ColorFA0205 = 84;
  ColorFA0206 = 85;
  ColorFA0207 = 86;
  ColorFA0208 = 87;
!Финансовый анализ - палитра 3
  ColorFA0301 = 88;
  ColorFA0302 = 89;
  ColorFA0303 = 90;
  ColorFA0304 = 91;
  ColorFA0305 = 92;
  ColorFA0306 = 93;
  ColorFA0307 = 94;
  ColorFA0308 = 95;
!Финансовый анализ - палитра 4
  ColorFA0401 = 96;
  ColorFA0402 = 97;
  ColorFA0403 = 98;
  ColorFA0404 = 99;
  ColorFA0405 = 100;
  ColorFA0406 = 101;
  ColorFA0407 = 102;
  ColorFA0408 = 103;
!Поставщики-получатели
  ColorBD0001 = 104;
  ColorBD0002 = 105;
  ColorBD0003 = 106;
!Плановое движение МЦ
  ColorPlanMoveRash   = 107;
!Планы капстроительства
  ColorUksGray       = 108;
  ColorUksCompare    = 109;
  ColorUksResultComp = 110;
  ColorUksCritical   = 111;
!Планирование производства
  ColorOPDemand       = 112;
  ColorOPChangeManual = 113;
  ColorOPChangeAuto   = 114;

!Непонятно откуда взялись (наверное из 6.0). И им нет соответствия в color.cfg
! Поэтому закоментарил. (Mike).
!  ColorOFPNow     = 11; // 3;
!  ColorOFPOld     =  6; // 8;
!  ColorOFPMark    =  2; //10;
!  ColorTopLevel   = 15;
!  BkColorTopLevel =  3;