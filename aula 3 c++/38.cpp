#include <stdio.h>

int main() {
    float valor, desconto, valorFinal;

    scanf("%f", &valor);

    desconto = valor * 0.12;
    valorFinal = valor - desconto;

    printf("Valor com desconto = R$ %.2f\n", valorFinal);

    return 0;
}
