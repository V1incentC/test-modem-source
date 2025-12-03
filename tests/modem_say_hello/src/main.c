#include <zephyr/ztest.h>
#include <modem_core.h>

// A test case to verify addition
ZTEST(modem_suite, test_calc_add)
{
    int result = modem_calc_add(5, 5);
    zassert_equal(result, 10, "5 + 5 should equal 10, but got %d", result);
}

// A test case to verify the print function (just checks if it runs without crashing)
ZTEST(modem_suite, test_hello_runs)
{
    modem_say_hello();
    zassert_true(true, "Hello function ran");
}

// Boilerplate to run the suite
ZTEST_SUITE(modem_suite, NULL, NULL, NULL, NULL, NULL);