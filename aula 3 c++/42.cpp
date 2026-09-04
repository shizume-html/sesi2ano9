#include <stdio.h>

int main() {
    float valorHora, horas, salario;

    scanf("%f %f", &valorHora, &horas);

    salario = valorHora * horas;
    salario = salario * 1.10;

    printf("Valor a pagar: R$ %.2f\n", salario);

    return 0;
}
