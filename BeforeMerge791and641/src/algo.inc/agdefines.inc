#ifndef _ALGO_DEFINES_inc_Included
#define _ALGO_DEFINES_inc_Included

#define _INTERFACEVERSION_ 20091013
#define _CURVERSION_ 20091013

#define _VIPINTERFVERS_(name) vipInterface #(name)#_INTERFACEVERSION_ licensed(free)

#define _INTERFVERS_(name) Interface #(name)#_INTERFACEVERSION_

#define _INTERFVERSSTRINGQUOTED_(name) '#(name)#(_INTERFACEVERSION_)'

#define _VERSIONEDNAME_(name) #(name)#_CURVERSION_

#end
