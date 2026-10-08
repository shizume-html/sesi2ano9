#include <stdio.h>
void ex17() {
    int n, i, soma = 0;
    printf("Ex 17 - Digite N positivo: ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++) soma += i;
    printf("Soma = %d\n", soma);
}