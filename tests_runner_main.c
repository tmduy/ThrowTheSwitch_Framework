#include "unity_fixture.h"
#include "Application/app_tests_runner.h"
#include <stdio.h>

#define TEST_UNITY_NUM_ARGS (1)

void r_tests_runner_run_tests(void);
void r_tests_runner_run_tests (void)
{
    const char * verbose_argv[] = {NULL, "-v", "-r", "1"};
    UnityMain(TEST_UNITY_NUM_ARGS, &verbose_argv[0], RunAllAppTests);
}

int main(void)
{
    r_tests_runner_run_tests();

    return 0;
}
