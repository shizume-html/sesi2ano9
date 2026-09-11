#include <stdio.h>

int main() {
    float preco_antigo, preco_novo, aumento;

    printf("Digite o preco antigo do produto: R$ ");
    scanf("%f", &preco_antigo);

    if (preco_antigo <= 50.0) aumento = 0.05;
    else if (preco_antigo <= 100.0) aumento = 0.10;
    else aumento = 0.15;

    preco_novo = preco_antigo * (1 + aumento);
    printf("Preco novo: R$ %.2f\n", preco_novo);

    if (preco_novo <= 80.0) printf("Mensagem: Barato\n");
    else if (preco_novo <= 120.0) printf("Mensagem: Normal\n");
    else if (preco_novo <= 200.0) printf("Mensagem: Caro\n");
    else printf("Mensagem: Muito caro\n");

    return 0;
}