#include <stdio.h>
#include <stdbool.h>
#include <string.h>
void ex43() {
    int idade, soma = 0, cont = 0;
    while (1) {
        printf("Digite a idade (0 para parar): ");
        scanf("%d", &idade);
        if (idade == 0) break;
        soma += idade;
        cont++;
    }
    if (cont > 0) printf("Idade media: %.2f\n", (float)soma / cont);
}