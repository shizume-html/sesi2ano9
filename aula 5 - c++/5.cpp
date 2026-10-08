#include <stdio.h>
void ex05() {
    int i;
    double val, soma = 0;
    printf("Ex 05:\n");
    for (i = 1; i <= 10; i++) {
        printf("Digite o valor %d: ", i);
        scanf("%lf", &val);
        soma += val;
    }
    printf("Soma = %.2lf\n", soma);
}