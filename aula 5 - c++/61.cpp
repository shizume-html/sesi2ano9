#include <stdio.h>
#include <stdbool.h>
#include <string.h>
void ex60() {
    int num, total = 0, soma = 0, maior, menor;
    int soma_par = 0, cont_par = 0;

    printf("Ex 60 - Digite inteiros (0 para terminar):\n");
    while (1) {
        scanf("%d", &num);
        if (num == 0) break;

        if (total == 0) maior = menor = num;
        else {
            if (num > maior) maior = num;
            if (num < menor) menor = num;
        }

        soma += num;
        total++;

        if (num % 2 == 0) {
            soma_par += num;
            cont_par++;
        }
    }

    if (total > 0) {
        printf("a) Soma: %d\n", soma);
        printf("b) Quantidade: %d\n", total);
        printf("c) Media: %.2f\n", (float)soma / total);
        printf("d) Maior: %d\n", maior);
        printf("e) Menor: %d\n", menor);
        printf("f) Media dos pares: %.2f\n", cont_par > 0 ? (float)soma_par / cont_par : 0);
    }
}