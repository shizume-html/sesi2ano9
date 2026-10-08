#include <stdio.h>
void ex18() {
    int q, i, val, maior, qtd = 0;
    printf("Ex 18 - Digite a quantidade de numeros: ");
    scanf("%d", &q);
    if (q <= 0) return;
    
    for (i = 0; i < q; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &val);
        if (i == 0 || val > maior) {
            maior = val;
            qtd = 1;
        } else if (val == maior) {
            qtd++;
        }
    }
    printf("Maior = %d (lido %d vez(es))\n", maior, qtd);
}