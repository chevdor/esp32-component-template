#include "unity.h"
#include "template_c.h"

TEST_CASE("add_successful", "[template_c]") {
    int number1 = 123;
    int number2 = 321;
    int result = c_add(number1, number2);

    TEST_ASSERT_EQUAL_INT32(444, result);
}
