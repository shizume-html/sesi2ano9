#include <stdio.h>
#include <stdbool.h>
#include <string.h>
void ex57() {
    int a, b, cont = 0;
    printf("Ex 57 - Digite a e b: ");
    scanf("%d %d", &a, &b);
    int ini = (a < b) ? a : b;
    int fim = (a > b) ? a : b;
    for (int i = ini; i <= fim; i++) {
        if (eh_primo(i)) cont++;
    }
    printf("Quantidade de primos no intervalo: %d\n", cont);
}