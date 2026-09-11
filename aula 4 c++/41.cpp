#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Digite o peso (kg) e a altura (m): ");
    scanf("%f %f", &peso, &altura);

    if (altura <= 0) {
        printf("Altura deve ser maior que zero.\n");
        return 0;
    }

    imc = peso / (altura * altura);
    printf("IMC: %.2f - ", imc);

    if (imc < 18.5) printf("Abaixo do peso\n");
    else if (imc <= 24.9) printf("Saudavel\n");
    else if (imc <= 29.9) printf("Peso em excesso\n");
    else if (imc <= 34.9) printf("Obesidade Grau I\n");
    else if (imc <= 39.9) printf("Obesidade Grau II (severa)\n");
    else printf("Obesidade Grau III (morbida)\n");

    return 0;
}