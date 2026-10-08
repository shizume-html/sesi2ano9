#include <stdio.h>
#include <stdbool.h>
#include <string.h>
void ex55() {
    int n, cont = 0, num = 2;
    long long soma = 0;
    printf("Ex 55 - Digite n: ");
    scanf("%d", &n);
    while (cont < n) {
        if (eh_primo(num)) {
            soma += num;
            cont++;
        }
        num++;
    }
    printf("Soma dos %d primeiros primos = %lld\n", n, soma);
}