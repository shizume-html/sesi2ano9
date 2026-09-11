#include <stdio.h>

int main() {
    float h, peso_ideal;
    char sexo;

    printf("Digite a altura (em metros): ");
    scanf("%f", &h);
    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sexo);

    if (sexo == 'M' || sexo == 'm') {
        peso_ideal = (72.7 * h) - 58;
        printf("Peso ideal: %.2f kg\n", peso_ideal);
    } else if (sexo == 'F' || sexo == 'f') {
        peso_ideal = (62.1 * h) - 44.7;
        printf("Peso ideal: %.2f kg\n", peso_ideal);
    } else {
        printf("Sexo invalido.\n");
    }
    return 0;
}