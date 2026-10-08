#include <stdio.h>
#include <stdbool.h>
#include <string.h>
void ex52() {
    int valor, notas;
    int cedulas[] = {100, 50, 20, 10, 5, 2, 1};
    printf("Ex 52 - Digite o valor do saque: ");
    scanf("%d", &valor);
    for (int i = 0; i < 7; i++) {
        notas = valor / cedulas[i];
        valor %= cedulas[i];
        if (notas > 0) printf("%d nota(s) de R$ %d\n", notas, cedulas[i]);
    }
}