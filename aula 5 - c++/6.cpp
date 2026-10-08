#include <stdio.h>
void ex07() {
    int cont = 0, val, soma = 0;
    printf("Ex 07:\n");
    while (cont < 10) {
        printf("Digite um inteiro positivo (%d/10): ", cont + 1);
        scanf("%d", &val);
        if (val > 0) {
            soma += val;
            cont++;
        }
    }
    printf("Média dos positivos = %.2f\n", (float)soma / 10);
}