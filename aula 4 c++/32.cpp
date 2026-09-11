#include <stdio.h>

int main() {
    int codigo, qtd;
    float preco = 0.0;

    printf("Digite o codigo do produto e a quantidade: ");
    scanf("%d %d", &codigo, &qtd);

    switch (codigo) {
        case 100: preco = 1.20; break;
        case 101: preco = 1.30; break;
        case 102: preco = 1.50; break;
        case 103: preco = 1.20; break;
        case 104: preco = 1.70; break;
        case 105: preco = 2.20; break;
        case 106: preco = 1.00; break;
        default:
            printf("Codigo invalido!\n");
            return 0;
    }

    printf("Valor total a pagar: R$ %.2f\n", preco * qtd);
    return 0;
}