#include <stdio.h>
#include <stdbool.h>
#include <string.h>
void ex39() {
    float base, altura;
    do {
        printf("Digite a base (>0): ");
        scanf("%f", &base);
    } while (base <= 0);
    
    do {
        printf("Digite a altura (>0): ");
        scanf("%f", &altura);
    } while (altura <= 0);

    printf("Area = %.2f\n", (base * altura) / 2);
}