#include <stdio.h>

int main() {
    float b_maior, b_menor, altura, area;
    printf("Digite a base maior, a base menor e a altura: ");
    scanf("%f %f %f", &b_maior, &b_menor, &altura);

    if (b_maior <= 0 || b_menor <= 0) {
        printf("As bases devem ser maiores que zero.\n");
    } else {
        area = ((b_maior + b_menor) * altura) / 2.0;
        printf("Area do trapezio: %.2f\n", area);
    }
    return 0;
}