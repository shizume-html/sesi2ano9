#include <stdio.h>

int main() {
    float dias, salario, imposto, liquido;

    scanf("%f", &dias);

    salario = dias * 30.00;
    imposto = salario * 0.08;
    liquido = salario - imposto;

    printf("Valor liquido: R$ %.2f\n", liquido);

    return 0;
}
