#include <stdio.h>
void ex23() {
    int n, i;
    printf("Ex 23 - Digite um numero positivo: ");
    scanf("%d", &n);
    printf("Divisores de %d: ", n);
    for (i = 1; i <= n; i++) {
        if (n % i == 0) printf("%d ", i);
    }
    printf("\n");
}