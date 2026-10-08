#include <stdio.h>
#include <stdbool.h>
#include <string.h>
void ex37() {
    int i, alta, baixa, soma;
    printf("Ex 37 - Numeros com a propriedade:\n");
    for (i = 1000; i <= 9999; i++) {
        alta = i / 100;
        baixa = i % 100;
        soma = alta + baixa;
        if (soma * soma == i) {
            printf("%d\n", i);
        }
    }
}