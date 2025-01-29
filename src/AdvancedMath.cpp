#include "AdvancedMath.h"
#include <stdexcept>

long long AdvancedMath::factorial(int n) {
    if (n < 0) {
        throw std::invalid_argument("Error: El factorial no está definido para números negativos.");
    }
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

long long AdvancedMath::combination(int n, int r) {
    if (r > n || r < 0) {
        throw std::invalid_argument("Error: Valor de r inválido en la combinación.");
    }
    return factorial(n) / (factorial(r) * factorial(n - r));
}


