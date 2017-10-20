#include "gtest/gtest.h"

#include "factorial.hpp"

TEST(Factorial, Zero) {
  EXPECT_EQ(1, Factorial(0));
}

TEST(Factorial, Positive) {
  EXPECT_EQ(1, Factorial(1));
  EXPECT_EQ(2, Factorial(2));
  EXPECT_EQ(6, Factorial(3));
  EXPECT_EQ(3628800, Factorial(10));
}
