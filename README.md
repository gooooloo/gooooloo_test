# gooooloo_test
A very simple header file for writing simple unit tests in C++.

## Why?
Existing C++ UT tools like GTest are very strong, but not lightweight enough. Sometimes I just write very simple codes and would like to test them. I don't want to install another module, or to use CMake. I just want a simple `g++ test.cpp && ./a.out` and hope to see everything just works. 

# Usage
``` C++
#include "gooooloo_test.h"

GOOOOLOO_TEST(good_case)
{
    GOOOOLOO_ASSERT_EQUAL_INT(42, 42);
    return 0;
}

int main() {
    return 0;
}
```

# GOOD
- Just `#include "gooooloo_test.h"` in cpp, then you can write your UTs.
- Adding a case is very easy, just `GOOOOLOO_TEST(your_unique_test_case_name)` and write your case. You don't need to call it explicitly anywhere else!

# BAD
- Need to write `{` in the next line after ther `GOOOOLOO_TEST(case_name)` line.
- Need to explict write `return 0;` in every case.
- Test case name should not conflict with existing symbles. For example, if you write a function named `foo`, and would like to test, then you can not to write `GOOOOLOO_TEST(foo)`. You have to modify the case name, such as `GOOOOLOO_TEST(test_foo)`.
- Very limited assert functions. This can be improved gradually.
