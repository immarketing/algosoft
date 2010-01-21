//------------------------------------------------------------------------------
// !!!ВНИМАНИЕ!!! Этот файл разбранчен с 5.8
// Если делаете здесь изменения, не забывайте править и там
//                               (если надо конечно :)
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// 04.03.2002 Переехала из GloConst, так как KauConst разбранчен, а версии
//            KatKau разошлись уже давно для 5.8 и 7.1
//------------------------------------------------------------------------------
// Версия для автообновления KatKau
  verKauTable      = 709;
//------------------------------------------------------------------------------

// константы инициализации объектов (побитно)
  cgInit_Kau       = 1;
  cgInit_Hash      = 2;
  cgInit_TXO       = 4;
  cgInit_FPP       = 8;
  cgInit_FPR       = 16;

// константы первого и последнего номеров КАУ
  cFirstKAU        = 1;
  cLastKAU         = 6;

  cgMaxKauFP       = 5;

// константы значений КАУ
  cKauNRecForOthers = 1;     // прочие               comp(1)
  cKauNRecNotDefine = 0;     // не определено        comp(0)

  SetDefKau         = 0;     // Кау по умолчанию - была константа в Паскале
  SetDefKodeKau     = 0;     // Кау по умолчанию - была функция в Паскале

// константы для функции GetAnyKau параметр wMode ( хотелось бы перевести на битовую маску, но так уже сложилось)
  cgAkSimple          = 0;  // просто высветит наименование
  cgAkOther           = 1;  // cKauNRecForOthers заменит на "прочие"
  cgAkOtherOrNoDef    = 2;  // и "прочие" и "не определено"
  cgAkNoDef           = 3;  // cKauNRecNotDefine заменит на "не определено"

// константы для функции GivenAnName
// см. также Tip&Stat\KauTable.xls
  cgAnName      = 1; // Наименование КАУ
  cgAnStrKod    = 2; // системные String(NRec), ручные SpKau.Code
  cgAnStrKey    = 3; // ключ для сортировки в отчетах, определяется по настройкам (StrName+StrKod) (StrKod+StrName)
  cgAnNode      = 4; // строковое представление cNode (вышестоящего элемента)
  cgAnAbbr      = 5; // уникальный строковый ID для использования в формулах (!!!не изменяется!!!)
  cgAnCode      = 6; // уникальный код как правило для сортировки в каталогах (может меняться)

// системные номера групп КАУ (KatKau.SysNum) !!! в 5.8 только !!!
// оставлено для временной совмемтимости старых исходников
  cgKatKau_UsKau   = 1;      // будет удалено

// Виды КАУ
  cgKatKau_Table   = 0;      // системные
  cgKatKau_User    = 1;      // пользовательские
  cgKatKau_Set     = 2;      // наборы
  cgKatKau_Enum    = 3;      // обобщенные
  cgKatKau_Interval= 4;      // интервалы
  cgKatKau_System  = 100;    // системные каталоги не являющиеся аналитикой
  cgKatKau_Trash   = 200;    // некорректные аналитики
  cgKatKau_Error   = 65000;  // ошибка для функций GetSysNum и GetKauSysNum
  cgKatKau_BuhDisabled = 28; // = 4 or 8 or 16 - в бухконтуре набор закладок, которые нужно спрятать

// начальные номера групп КАУ (KatKau.KodGroup)
  cgFirst_UsKau    = 10000;  // начальный номер пользовательских групп КАУ

// бит максимального количествы КАУ (для инвертирования КАУ)
  cgMax_KauBit     = 1024;

// Константы для дополнительных атрибутов счета (ДАС)
  cgDas_NoFor_SD   = 1;
  cgDas_NoFor_SK   = 2;
  cgDas_NoFor_OD   = 4;
  cgDas_NoFor_OK   = 8;

//параметры открытия модификационных каталогов
  cgRecordView        = 0;      //просмотр
  cgRecordEdit        = 1;      //редактирование
  cgRecordInsert      = 2;      //вставка
  cgRecordDelete      = 3;      //удаление

// константы разделов (начиная с 71)
  cgRazdel_First  = 1;   // первый контекст
  cgRazdel_FP     = 1;   // фин.планирование
  cgRazdel_PP     = 2;   // производственное планирование
  cgRazdel_MC     = 3;   // Учет МЦ
  cgRazdel_Usl    = 4;   // Учет Услуг - начиная с 7_11
  // КОРРЕКТИРУЙТЕ ДАННУЮ КОНСТАНТУ cgRazdel_End ПРИ ДОБАВЛЕНИИ РАЗДЕЛОВ
  cgRazdel_End    = 4;   // последний контекст
  cgRazdel_Error_NotFound = 1 ; //ошибка поиска раздела

//группы аналитик и слои показателей по разделам учета (Sloj.Razdel)
  cgSloj_RazdelFP  = 1;      //фин.планирование
  cgSloj_RazdelPP  = 2;      //производственное планирование

//группы аналитик и слои показателей (Sloj.SysNum)
  cgSloj_Group     = 1;      //группы аналитик
  cgSloj_Sloj      = 2;      //слой аналитик
  cgSloj_GrSloj    = 3;      //группа слоев аналитик

//группы аналитик и слои показателей (Sloj.isActive)
  cgActivSloj      = 0;
  cgDeletedSloj    = 1;

//------------------------------------------------------------------------------
// Константы групп КАУ
//------------------------------------------------------------------------------

// !!! для возможности построения иерархических отчетов добавляйте
// cg-константу по аналитике
// в PAS\reptree.pas,
// в PAS\TXO\servkau.pas : GetKauCoTable, GetKauTabBuf

  cgKau_KatOrg     = word(1);   //
  cgKau_KatPodr    = word(2);   //
  cgKau_Persons    = word(3);   //
  cgKau_KatMC      = word(4);   //
  cgKau_KatUsl     = word(5);   //
  cgKau_BaseDoc    = word(6);   //
  cgKau_Zakaz      = word(7);   // Производственные заказы. В 5.8 и 7.1 разные таблицы
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
  cgKau_ObjRem     = word(23);  // Оборудование (в 5.8 Объекты ремонта)
  cgKau_KatMarsh   = word(24);  //
  cgKau_HDR_PS     = word(25);  //
  cgKau_Indent     = word(26);  // Заявки\Заказы
  cgKau_Grafik     = word(27);  // Графики
  cgKau_MnPlan1    = word(28);  // Производственные планы
  cgKau_MnPlan2    = word(29);  // План снабжения
  cgKau_MnPlan3    = word(30);  // План сбыта
  // 31
  cgKau_GroupOfp   = word(32);  // cgKatKau_System: Группы финансовых обязательств
  // 33
  cgKau_FinSource  = word(34);  // cgKatKau_System: Источники финансирования
  cgKau_TechOp     = word(35);  // cgKatKau_System: Технологические операции
  cgKau_Profes     = word(36);  //
  cgKau_NeedMt     = word(37);  // Потребность в Материалах
  cgKau_NeedTr     = word(38);  // Потребность в Трудовых ресурсах
  cgKau_NeedEq     = word(39);  // Потребность в Производственных мощностях (Оборудовании)
  cgKau_ObjBuild   = word(40);  // #Define __UKS__ Обьекты строительства.
  cgKau_HDR_KS     = word(41);  // Конструкторские спецификации
  cgKau_VidRem     = word(42);  // Виды ремонта
  cgKau_KatKodKpp  = word(43);  // #define _TAXES_  Код Причины Постановки на учет
  cgKau_KatKodBud  = word(44);  // #define _TAXES_  Аккумулятор Расчетов с ГНИ (Бюджет)
  cgKau_KatKodTpn  = word(45);  // #define _TAXES_  Типы платежей/начислений
  cgKau_KatCompl   = word(46);  // претендент на cgKatKau_System : Hаборы Материалов
  cgKau_GrObjRem   = word(47);  // Группа оборудования (группа объектов ремонта)
  cgKau_KaWork     = word(48);  // cgKatKau_System: Виды работ
  cgKau_CorpoNeed     = word(49); // Корпоративная потребность
  cgKau_CorpoDelivery = word(50); // Корпоративный план поставок
  cgKau_CorpoManuf    = word(51); // Корпоративный план производства
  cgKau_CorpoBalance  = word(52); // Баланс движения продукции
  cgKau_VariaPl       = word(53); // Вариант планирования
  cgKau_AmortGr    = word(54);  // Амортизационные группы (ОС)
  cgKau_GrPlat     = word(55);  // Платежные средства
  cgKau_IspOs      = word(56);  // Признаки использования ОС
  cgKau_IspNMA     = word(57);  // Признаки использования НМА
  cgKau_GrOs       = word(58);  // Группы ОС
  cgKau_KatNazna   = word(59);  // Назначения сопроводительных документов
  cgKau_KatMOL     = word(60);  // Материально-ответственные лица
  cgKau_Marsh_Sp   = word(61);  // Позиции маршрутных карт
  cgKau_PS_Lines   = word(62);  // Позиции производственных спецификаций
  cgKau_KS_Lines   = word(63);  // Позиции конструкторских спецификаций
  cgKau_TypStroy   = word(64);  // Типы строительства
  cgKau_VidStroy   = word(65);  // Виды строительства
  cgKau_Otrasl     = word(66);  // Отрасли строительства
  cgKau_KatVidD    = word(67);  // Виды договоров/соглашений
  cgKau_GrOrg      = word(68);  // Группы организаций
  cgKau_Katego     = word(69);  // Категории
  cgKau_Brigad     = word(70);  // Бригады
  cgKau_Credit     = word(71);  // Кредиты
  cgKau_ATD        = word(72);  // Административно-территориальное деление
  cgKau_StZatr     = word(73);  // Статьи затрат объектов строительства
  cgKau_ClassObj   = word(74);  // Классы объектов строительства

//   !!! НОМЕРА ОТ 100 ДО 1000 ЗАНЯТЫ
//   зарезервированно для пользовательских КАУ сконвертированных из версий до 7.1

//   !!! если аналитику не планируется использовать в версии 5.8,
//   ее следует добавлять в диапазон после 5000
  cgKau_PlanOper   = word(5001); // Пооперационные планы
  cgKau_PlanSvod   = word(5002); // Сводные планы
  cgKau_MarkaTS    = word(5003); // Марки транспортных средств

// !!! для возможности построения иерархических отчетов добавляйте
// cg-константу по аналитике
// в PAS\reptree.pas,
// в PAS\TXO\servkau.pas : GetKauCoTable, GetKauTabBuf
//------------------------------------------------------------------------------
