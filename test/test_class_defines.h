#include "unity/unity.h"
#include <stdio.h>

#include "lib/base/class_file/class_defines.h"

void test_get_access_flag_name(void)
{
    TEST_ASSERT_EQUAL_STRING("public", get_access_flag_name(ACC_PUBLIC));
    TEST_ASSERT_EQUAL_STRING("private", get_access_flag_name(ACC_PRIVATE));
    TEST_ASSERT_EQUAL_STRING("protected", get_access_flag_name(ACC_PROTECTED));
    TEST_ASSERT_EQUAL_STRING("static", get_access_flag_name(ACC_STATIC));
    TEST_ASSERT_EQUAL_STRING("final", get_access_flag_name(ACC_FINAL));
    TEST_ASSERT_EQUAL_STRING("volatile", get_access_flag_name(ACC_VOLATILE));
    TEST_ASSERT_EQUAL_STRING("transient", get_access_flag_name(ACC_TRANSIENT));
    TEST_ASSERT_EQUAL_STRING("synthetic", get_access_flag_name(ACC_SYNTHETIC));
    TEST_ASSERT_EQUAL_STRING("enum", get_access_flag_name(ACC_ENUM));
    TEST_ASSERT_EQUAL_STRING("Undefined", get_access_flag_name(12345)); // Test with an undefined value
}

void test_get_cp_info_name(void)
{
    TEST_ASSERT_EQUAL_STRING("Class", get_cp_info_name(CONSTANT_Class));
    TEST_ASSERT_EQUAL_STRING("Fieldref", get_cp_info_name(CONSTANT_Fieldref));
    TEST_ASSERT_EQUAL_STRING("Methodref", get_cp_info_name(CONSTANT_Methodref));
    TEST_ASSERT_EQUAL_STRING("InterfaceMethodref", get_cp_info_name(CONSTANT_InterfaceMethodref));
    TEST_ASSERT_EQUAL_STRING("String", get_cp_info_name(CONSTANT_String));
    TEST_ASSERT_EQUAL_STRING("Integer", get_cp_info_name(CONSTANT_Integer));
    TEST_ASSERT_EQUAL_STRING("Float", get_cp_info_name(CONSTANT_Float));
    TEST_ASSERT_EQUAL_STRING("Long", get_cp_info_name(CONSTANT_Long));
    TEST_ASSERT_EQUAL_STRING("Double", get_cp_info_name(CONSTANT_Double));
    TEST_ASSERT_EQUAL_STRING("NameAndType", get_cp_info_name(CONSTANT_NameAndType));
    TEST_ASSERT_EQUAL_STRING("Utf8", get_cp_info_name(CONSTANT_Utf8));
    TEST_ASSERT_EQUAL_STRING("None", get_cp_info_name(12345)); // Test with an undefined value
}
