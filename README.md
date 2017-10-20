# Using Google Test with CMake

This is a quick example of using Google test with CMake.

    $ mkdir build && cd $_
    $ cmake ..
    $ make
    $ ./runUnitTests
    Running main() from gtest_main.cc
    [==========] Running 2 tests from 1 test case.
    [----------] Global test environment set-up.
    [----------] 2 tests from Factorial
    [ RUN      ] Factorial.Zero
    [       OK ] Factorial.Zero (0 ms)
    [ RUN      ] Factorial.Positive
    [       OK ] Factorial.Positive (0 ms)
    [----------] 2 tests from Factorial (0 ms total)

    [----------] Global test environment tear-down
    [==========] 2 tests from 1 test case ran. (0 ms total)
    [  PASSED  ] 2 tests.

The `include` and `src` folders will be used by the `main` application and
comprises all of the non-test code, while the `tests` folder contains test specific
code and will only be compiled for the `tests` executable.

Based on code from https://github.com/dmonopoly/gtest-cmake-example.
