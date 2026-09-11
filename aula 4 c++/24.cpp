#include <stdio.h>
#include <string.h>

int main() {
    float valor, imposto = 0.0;
    char estado[3];

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);
    printf("Digite a sigla do estado de destino (MG, SP, RJ, MS): ");
    scanf("%s", estado);

    if (strcmp(estado, "MG") == 0 || strcmp(estado, "mg") == 0) imposto = 0.07;
    else if (strcmp(estado, "SP") == 0 || strcmp(estado, "sp") == 0) imposto = 0.12;
    else if (strcmp(estado, "RJ") == 0 || strcmp(estado, "rj") == 0) imposto = 0.15;
    else if (strcmp(estado, "MS") == 0 || strcmp(estado, "ms") == 0) imposto = 0.08;
    else {
        printf("Erro: Estado invalido!\n");
        return 0;
    }

    printf("Preco final com imposto: R$ %.2f\n", valor * (1 + imposto));
    return 0;
}