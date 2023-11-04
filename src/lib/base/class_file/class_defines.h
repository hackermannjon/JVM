#ifndef JVM_CLASS_DEFINES
#define JVM_CLASS_DEFINES

#include "lib/base/defines.h"

// Constant Pool Tags
#define CONSTANT_Class 7
#define CONSTANT_Fieldref 9
#define CONSTANT_Methodref 10
#define CONSTANT_InterfaceMethodref 11
#define CONSTANT_String 8
#define CONSTANT_Integer 3
#define CONSTANT_Float 4
#define CONSTANT_Long 5
#define CONSTANT_Double 6
#define CONSTANT_NameAndType 12
#define CONSTANT_Utf8 1

// Attributes Info
typedef struct
{
    u2 attribute_name_index;
    u4 attribute_length;
    u1 *info;
} attribute_info;

#endif
