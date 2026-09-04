#include <stdio.h>

int main() {
    float valor, valorDesconto, parcela;
    float comissaoVista, comissaoParcelada;

    scanf("%f", &valor);

    valorDesconto = valor * 0.90;
    parcela = valor / 3.0;

    comissaoVista = valorDesconto * 0.05;
    comissaoParcelada = valor * 0.05;

    printf("Total com desconto: R$ %.2f\n", valorDesconto);
    printf("Cada parcela (3x): R$ %.2f\n", parcela);
    printf("Comissao a vista: R$ %.2f\n", comissaoVista);
    printf("Comissao parcelada: R$ %.2f\n", comissaoParcelada);

    return 0;
}
