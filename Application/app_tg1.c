#include "unity_fixture.h"

/***********************************************************************************************************************
 * Private global variables and functions
 **********************************************************************************************************************/
static int data = 0;
static char* str = "test";

/* Define test groups. */
TEST_GROUP(APPLICATION);

/*******************************************************************************************************************//**
 * @brief Test setup function called before every test in this test group.
 **********************************************************************************************************************/
TEST_SETUP(APPLICATION)
{

}

/*******************************************************************************************************************//**
 * @brief Test tear down function called after every test in this test group.
 **********************************************************************************************************************/
TEST_TEAR_DOWN(APPLICATION)
{

}

TEST(APPLICATION, TC_TestInterger)
{
	TEST_ASSERT_EQUAL_INT(0, data);
	TEST_PASS_MESSAGE("PASSED");
}

TEST(APPLICATION, TC_TestString)
{
	TEST_ASSERT_EQUAL_STRING("test", str);
	TEST_PASS_MESSAGE("PASSED");
}
