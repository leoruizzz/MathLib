#include "MathOperations.h"
#include <stdexcept>

int MathOperations::sum(int a, int b) {
    return a + b;
}

int MathOperations::subtract(int a, int b) {
    return a - b;
}

int MathOperations::multiply(int a, int b) {
    return a * b;
}

double MathOperations::divide(int a, int b) {
    if (b == 0) {
        throw std::runtime_error("Error: División por cero");
    }
    return static_cast<double>(a) / b;
}

