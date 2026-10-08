#include <stdio.h>
#include <stdbool.h>
#include <string.h>
void ex45() {
    int op;
    float v;
    do {
        printf("\n1. km/h -> m/s\n2. m/s -> km/h\n3. Sair\nOpcao: ");
        scanf("%d", &op);
        if (op == 1) {
            printf("km/h: "); scanf("%f", &v);
            printf("m/s: %.2f\n", v / 3.6);
        } else if (op == 2) {
            printf("m/s: "); scanf("%f", &v);
            printf("km/h: %.2f\n", v * 3.6);
        }
    } while (op != 3);
}