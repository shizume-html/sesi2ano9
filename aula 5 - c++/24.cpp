#include <stdio.h>
void ex24() {
    int n, i, soma = 0;
    printf("Ex 24 - Digite um inteiro: ");
    scanf("%d", &n);
    for (i = 1; i < n; i++) {
        if (n % i == 0) soma += i;
    }
    printf("Soma dos divisores proprios = %d\n", soma);
}