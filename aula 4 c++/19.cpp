#include <stdio.h>

int main() {
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    int div3 = (num % 3 == 0);
    int div5 = (num % 5 == 0);

    if ((div3 || div5) && !(div3 && div5)) {
        printf("O numero %d e divisivel por 3 ou 5, mas nao por ambos.\n", num);
    } else {
        printf("O numero nao atende a condicao especificada.\n");
    }
    return 0;
}