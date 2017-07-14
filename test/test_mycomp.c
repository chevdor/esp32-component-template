#include "unity.h"
#include "mycomp.h"

TEST_CASE("Check #1", "[MyComp]")
{
    TEST_ASSERT_MESSAGE( mycomp_function() == 42 , "Something does not quite right yet!");
}
