#include <stdio.h>
#include <stdbool.h>
#include <string.h>
void ex56() {
    long long soma = 0;
    for (int i = 2; i < 2000000; i++) {
        if (eh_primo(i)) soma += i;
    }
    printf("Ex 56 - Soma dos primos < 2 millhoes = %lld\n", soma);
}