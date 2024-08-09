/*
* Copyright (c) 2024, Victor Chavez (vchavezb@protonmail.com)
* SPDX-License-Identifier: Apache-2.0
*/
#include <CppUTest/CommandLineTestRunner.h>
#include <posix_board_if.h> // posix_exit

int main(void)
{
    const char* cppu_test_args[] = {__FILE__,"-v","-c"};
    int num_args = std::size(cppu_test_args);  // Get the number of elements in the array
    int test_Res = CommandLineTestRunner::RunAllTests(num_args, cppu_test_args);
    /* Exit before main ends as zephyr idle thread runs in the background  */
    posix_exit(test_Res);
	return 0;
}