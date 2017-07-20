#include "unity.h"
#include "template_cpp.h"

TEST_CASE("add cpp", "[template_cpp]") {
    int number1 = 123;
    int number2 = 321;
 	SampleMath sm;
    int result = sm.cpp_add(number1, number2);

    TEST_ASSERT_EQUAL_INT32(444, result);
}

TEST_CASE("add cpp static", "[template_cpp]") {
    int number1 = 123;
    int number2 = 321;
    int result = SampleMath::s_add(number1, number2);

    TEST_ASSERT_EQUAL_INT32(444, result);
}
