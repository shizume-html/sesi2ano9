#include <stdio.h>

int main() {
    int opcao;
    float n1, n2;

    printf("Escolha a opcao:\n");
    printf("1 - Soma de 2 numeros.\n");
    printf("2 - Diferenca entre 2 numeros (maior pelo menor).\n");
    printf("3 - Produto entre 2 numeros.\n");
    printf("4 - Divisao entre 2 numeros (o denominador nao pode ser zero).\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Digite dois numeros: ");
            scanf("%f %f", &n1, &n2);
            printf("Soma: %.2f\n", n1 + n2);
            break;
        case 2:
            printf("Digite dois numeros: ");
            scanf("%f %f", &n1, &n2);
            if (n1 >= n2) printf("Diferenca: %.2f\n", n1 - n2);
            else printf("Diferenca: %.2f\n", n2 - n1);
            break;
        case 3:
            printf("Digite dois numeros: ");
            scanf("%f %f", &n1, &n2);
            printf("Produto: %.2f\n", n1 * n2);
            break;
        case 4:
            printf("Digite o numerador e o denominador: ");
            scanf("%f %f", &n1, &n2);
            if (n2 != 0) printf("Divisao: %.2f\n", n1 / n2);
            else printf("Erro: Denominador nao pode ser zero!\n");
            break;
        default:
            printf("Erro: Opcao invalida!\n");
    }
    return 0;
}