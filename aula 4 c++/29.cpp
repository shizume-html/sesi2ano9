#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, a, b, resposta, acertos = 0;
    srand(time(NULL));

    for (i = 1; i <= 5; i++) {
        a = (rand() % 100) + 1;
        b = (rand() % 100) + 1;
        
        printf("Pergunta %d: Qual e a soma de %d + %d? ", i, a, b);
        scanf("%d", &resposta);

        if (resposta == a + b) {
            printf("Correto!\n");
            acertos++;
        } else {
            printf("Incorreto. A resposta correta era %d.\n", a + b);
        }
    }

    printf("\nVoce acertou %d de 5 perguntas.\n", acertos);
    return 0;
}