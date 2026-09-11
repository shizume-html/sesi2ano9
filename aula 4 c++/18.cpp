#include <stdio.h>

int main() {
    int opcao;
    float num1, num2;

    printf("Escolha uma operacao:\n");
    printf("1 - Adicao\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\nOpcao: ");
    scanf("%d", &opcao);

    if (opcao < 1 || opcao > 4) {
        printf("Opcao invalida.\n");
        return 0;
    }

    printf("Digite dois valores numericos: ");
    scanf("%f %f", &num1, &num2);

    switch (opcao) {
        case 1: printf("Resultado: %.2f\n", num1 + num2); break;
        case 2: printf("Resultado: %.2f\n", num1 - num2); break;
        case 3: printf("Resultado: %.2f\n", num1 * num2); break;
        case 4: 
            if (num2 != 0) printf("Resultado: %.2f\n", num1 / num2);
            else printf("Erro: Divisao por zero!\n");
            break;
    }
    return 0;
}