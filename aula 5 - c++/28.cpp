#include <stdio.h>
void ex28() {
    int n, i;
    double e = 1.0, fat = 1.0;
    printf("Ex 28 - Digite N: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        fat *= i;
        e += 1.0 / fat;
    }
    printf("E = %lf\n", e);
}