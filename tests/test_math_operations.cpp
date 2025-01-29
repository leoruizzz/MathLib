#include "MathOperations.h"
#include <gtest/gtest.h>

TEST(MathOperationsTest, Sum) {
    EXPECT_EQ(MathOperations::sum(3, 2), 5);
}

TEST(MathOperationsTest, Subtract) {
    EXPECT_EQ(MathOperations::subtract(5, 3), 2);
}

TEST(MathOperationsTest, Multiply) {
    EXPECT_EQ(MathOperations::multiply(4, 3), 12);
}

TEST(MathOperationsTest, Divide) {
    EXPECT_DOUBLE_EQ(MathOperations::divide(10, 2), 5.0);
}

TEST(MathOperationsTest, DivideByZero) {
    EXPECT_THROW(MathOperations::divide(10, 0), std::runtime_error);
}


