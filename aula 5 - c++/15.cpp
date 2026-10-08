#include <stdio.h>
void ex15() {
    int n, i;
    printf("Ex 15 - Digite N ímpar positivo: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i += 2) printf("%d ", i);
    printf("\n");
}