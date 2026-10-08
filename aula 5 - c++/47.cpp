#include <stdio.h>
#include <stdbool.h>
#include <string.h>
void ex47() {
    int op;
    float n1, n2;
    do {
        printf("\n1. Adicao\n2. Subtracao\n3. Multiplicacao\n4. Divisao\n5. Saida\nOpcao: ");
        scanf("%d", &op);
        if (op >= 1 && op <= 4) {
            printf("Digite dois numeros: ");
            scanf("%f %f", &n1, &n2);
            if (op == 1) printf("Res: %.2f\n", n1 + n2);
            if (op == 2) printf("Res: %.2f\n", n1 - n2);
            if (op == 3) printf("Res: %.2f\n", n1 * n2);
            if (op == 4) {
                if (n2 != 0) printf("Res: %.2f\n", n1 / n2);
                else printf("Erro: Divisao por zero!\n");
            }
        }
    } while (op != 5);
}