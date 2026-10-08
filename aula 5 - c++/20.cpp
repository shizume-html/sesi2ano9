#include <stdio.h>
void ex20() {
    int val, total = 0, pares = 0;
    printf("Ex 20 - Digite inteiros (1000 para parar):\n");
    while (1) {
        scanf("%d", &val);
        if (val == 1000) break;
        total++;
        if (val % 2 == 0) {
            printf("%d e PAR\n", val);
            pares++;
        } else {
            printf("%d e IMPAR\n", val);
        }
    }
    printf("Total lidos: %d, Total pares: %d\n", total, pares);
}