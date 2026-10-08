#include <stdio.h>
#include <stdbool.h>
#include <string.h>
void ex35() {
    int ini, fim, i, soma = 0;
    printf("Digite o valor inicial e valor final: ");
    scanf("%d %d", &ini, &fim);
    if (ini > fim) {
        printf("Intervalo de valores invalido\n");
        return;
    }
    for (i = ini; i <= fim; i++) {
        if (i % 2 != 0) soma += i;
    }
    printf("Soma dos ímpares neste intervalo: %d\n", soma);
}