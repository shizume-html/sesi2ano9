#include <stdio.h>
#include <stdbool.h>
#include <string.h>
void ex48() {
    long long a = 1, b = 2, prox = 0, soma = 0;
    while (b <= 4000000) {
        if (b % 2 == 0) soma += b;
        prox = a + b;
        a = b;
        b = prox;
    }
    printf("Ex 48 - Soma = %lld\n", soma);
}