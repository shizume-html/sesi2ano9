#include <stdio.h>
#include <stdbool.h>
#include <string.h>
void ex46() {
    int segredo = (rand() % 1000) + 1;
    int chute, tent = 0;
    printf("Ex 46 - Adivinhe o numero de 1 a 1000!\n");
    do {
        printf("Chute: ");
        scanf("%d", &chute);
        tent++;
        if (chute < segredo) printf("Maior!\n");
        else if (chute > segredo) printf("Menor!\n");
    } while (chute != segredo);
    printf("Acertou em %d tentativas!\n", tent);
}