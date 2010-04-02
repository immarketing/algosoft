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

#define RepBDR5_2010 RepBDR5_2010_

#ELSE

#define szmn_bud_Form641_2010 szmn_bud_Form641_2010
#define szmn_bud_Form791_2010 szmn_bud_Form791_2010
#define szmn_bud_Form791641_2010 szmn_bud_Form791641_2010
#define szmn_bud_Form791_printed szmn_bud_Form791_printed
#define Iszmn_bud_Form791_printed Iszmn_bud_Form791_printed

#define RepBDR5_2010 RepBDR5_2010

#ENDIF

#ENDIF
