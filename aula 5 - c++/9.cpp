#include <stdio.h>
void ex10() {
    int i, soma = 0;
    for (i = 1; i <= 50; i++) {
        soma += 2 * i;
    }
    printf("Ex 10 - Soma dos 50 primeiros pares = %d\n", soma);
}