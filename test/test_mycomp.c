#include "unity.h"
#include "mycomp.h"

TEST_CASE("Check #1", "[MyComp]")
{
    TEST_ASSERT_EQUAL( 42, 42 );
}

TEST_CASE("Check #2", "[MyComp]")
{
    TEST_ASSERT_MESSAGE( mycomp_function() == 42 , "Something does not quite right yet!");
}

TEST_CASE("Check #3", "[MyComp]")
{
    TEST_ASSERT_MESSAGE( 0 == 1 , "This is a sample failure");
}
