#include <stdio.h>
#include <stdbool.h>
#include <string.h>
void ex44() {
    int limite, a = 0, b = 1, prox = 0;
    printf("Ex 44 - Digite um limite positivo: ");
    scanf("%d", &limite);
    
    printf("%d %d ", a, b);
    while (1) {
        prox = a + b;
        printf("%d ", prox);
        a = b;
        b = prox;
        if (prox > limite) break;
    }
    printf("\n");
}