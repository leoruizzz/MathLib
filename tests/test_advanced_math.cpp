#include "AdvancedMath.h"
#include <gtest/gtest.h>

TEST(AdvancedMathTest, Factorial) {
    EXPECT_EQ(AdvancedMath::factorial(5), 120);
}

TEST(AdvancedMathTest, Combination) {
    EXPECT_EQ(AdvancedMath::combination(5, 2), 10);
}

TEST(AdvancedMathTest, CombinationInvalid) {
    EXPECT_THROW(AdvancedMath::combination(3, 5), std::invalid_argument);
}

TEST(AdvancedMathTest, FactorialInvalid) {
    EXPECT_THROW(AdvancedMath::factorial(-1), std::invalid_argument);
}


