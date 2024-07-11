/***********************************************************************************************************************
 * Includes   <System Includes> , "Project Includes"
 **********************************************************************************************************************/
#include "unity_fixture.h"
#include "app_tests_runner.h"

void RunAllAppTests(void);

TEST_GROUP_RUNNER(APPLICATION)
{
    RUN_TEST_CASE(APPLICATION, TC_TestInterger);
    RUN_TEST_CASE(APPLICATION, TC_TestString);
}

void RunAllAppTests (void)
{
    RUN_TEST_GROUP(APPLICATION);
}