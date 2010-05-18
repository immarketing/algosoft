#ifndef _ALGO_DEFINES_inc_Included
#define _ALGO_DEFINES_inc_Included

#define _INTERFACEVERSION_ 20091013
#define _CURVERSION_ 20091013

#define _VIPINTERFVERS_(name) vipInterface #(name)#_INTERFACEVERSION_ licensed(free)

#define _INTERFVERS_(name) Interface #(name)#_INTERFACEVERSION_

#define _INTERFVERSSTRINGQUOTED_(name) '#(name)#(_INTERFACEVERSION_)'

#define _VERSIONEDNAME_(name) #(name)#_CURVERSION_

!#define _IS_SZMN_DEBUG_

#ifdef _IS_SZMN_DEBUG_

  #define szmn_bud_Form641_2010 szmn_bud_Form641_2010_
  #define szmn_bud_Form791_2010 szmn_bud_Form791_2010_
  #define szmn_bud_Form791641_2010 szmn_bud_Form791641_2010_
  #define szmn_bud_Form791_printed szmn_bud_Form791_printed_
  #define Iszmn_bud_Form791_printed Iszmn_bud_Form791_printed_

  #define szmn_bud_Form831x_2010 szmn_bud_Form831x_2010_
  #define szmn_bud_Form8311_2010 szmn_bud_Form8311_2010_
  #define szmn_bud_Form8312_2010 szmn_bud_Form8312_2010_

  #define RepBDR5_2010 RepBDR5_2010_

  #define szmn_bud_Form8_11_1_2010 szmn_bud_Form8_11_1_2010_

  #define szmn_bud_codificator szmn_bud_codificator_
  #define Iszmn_bud_codificator Iszmn_bud_codificator_

  #define szmn_bud_Ierarhycodificator szmn_bud_Ierarhycodificator_

  #define szmn_bud_Form8_7_x_2010 szmn_bud_Form8_7_x_2010_
  #define Iszmn_bud_XLS_attributes Iszmn_bud_XLS_attributes_

  #define szmn_doccheck szmn_doccheck_

#ELSE

  #define szmn_bud_Form641_2010 szmn_bud_Form641_2010
  #define szmn_bud_Form791_2010 szmn_bud_Form791_2010
  #define szmn_bud_Form791641_2010 szmn_bud_Form791641_2010
  #define szmn_bud_Form791_printed szmn_bud_Form791_printed
  #define Iszmn_bud_Form791_printed Iszmn_bud_Form791_printed

  #define szmn_bud_Form831x_2010 szmn_bud_Form831x_2010
  #define szmn_bud_Form8311_2010 szmn_bud_Form8311_2010
  #define szmn_bud_Form8312_2010 szmn_bud_Form8312_2010

  #define RepBDR5_2010 RepBDR5_2010

  #define szmn_bud_Form8_11_1_2010 szmn_bud_Form8_11_1_2010

  #define szmn_bud_codificator szmn_bud_codificator
  #define Iszmn_bud_codificator Iszmn_bud_codificator

  #define szmn_bud_Ierarhycodificator szmn_bud_Ierarhycodificator

  #define szmn_bud_Form8_7_x_2010 szmn_bud_Form8_7_x_2010
  #define Iszmn_bud_XLS_attributes Iszmn_bud_XLS_attributes

  #define szmn_doccheck szmn_doccheck

#ENDIF

#ENDIF
