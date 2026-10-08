#include <stdio.h>
#include <stdbool.h>
#include <string.h>
void ex36() {
    long long soma_quad = 0, soma = 0;
    int i;
    for (i = 1; i <= 100; i++) {
        soma_quad += i * i;
        soma += i;
    }
    long long quad_soma = soma * soma;
    printf("Ex 36 - Diferenca = %lld\n", quad_soma - soma_quad);
}