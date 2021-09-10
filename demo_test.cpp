#include "gooooloo_test.h"

GOOOOLOO_TEST(good_case)
{
    GOOOOLOO_ASSERT_EQUAL_INT(42, 42);

    return 0;
}

GOOOOLOO_TEST(good_bad)
{
    GOOOOLOO_ASSERT_EQUAL_INT(42, 43);

    return 0;
}

int foo() {
    return 42;
}

GOOOOLOO_TEST(test_foo)
{
    GOOOOLOO_ASSERT_EQUAL_INT(42, foo());
    return 0;
}

int main() {
    return 0;
}