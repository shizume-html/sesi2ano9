#include <stdio.h>
#include <stdbool.h>
#include <string.h>
void ex41() {
    float r1, r2, r;
    while (1) {
        printf("Digite R1 e R2 (0 para sair): ");
        scanf("%f %f", &r1, &r2);
        if (r1 == 0 || r2 == 0) break;
        r = (r1 * r2) / (r1 + r2);
        printf("Resistencia equivalente: %.2f\n", r);
    }
}