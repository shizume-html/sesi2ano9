#include <stdio.h>
#include <stdbool.h>
#include <string.h>
void ex58() {
    int a, b;
    long long soma = 0;
    printf("Ex 58 - Digite a e b: ");
    scanf("%d %d", &a, &b);
    int ini = (a < b) ? a : b;
    int fim = (a > b) ? a : b;
    for (int i = ini; i <= fim; i++) {
        if (eh_primo(i)) soma += i;
    }
    printf("Soma dos primos no intervalo: %lld\n", soma);
}