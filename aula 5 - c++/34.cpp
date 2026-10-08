#include <stdio.h>
#include <stdbool.h>
#include <string.h>
long long mdc(long long a, long long b) {
    return b == 0 ? a : mdc(b, a % b);
}
long long mmc(long long a, long long b) {
    return (a * b) / mdc(a, b);
}
void ex34() {
    long long res = 1, i;
    for (i = 1; i <= 20; i++) {
        res = mmc(res, i);
    }
    printf("Ex 34 - Menor divisivel por 1 a 20: %lld\n", res);
}