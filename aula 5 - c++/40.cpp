#include <stdio.h>
#include <stdbool.h>
#include <string.h>
void ex40() {
    int val, menor, maior, primeiro = 1;
    printf("Ex 40 - Digite numeros (negativo para sair):\n");
    while (1) {
        scanf("%d", &val);
        if (val < 0) break;
        if (primeiro) {
            menor = maior = val;
            primeiro = 0;
        } else {
            if (val < menor) menor = val;
            if (val > maior) maior = val;
        }
    }
    if (!primeiro) printf("Maior: %d, Menor: %d\n", maior, menor);
}