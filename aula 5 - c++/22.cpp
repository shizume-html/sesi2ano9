#include <stdio.h>
void ex22() {
    float nota, soma = 0;
    int cont = 0;
    printf("Ex 22 - Digite notas (10 a 20). Outro valor encerra:\n");
    while (1) {
        scanf("%f", &nota);
        if (nota < 10.0 || nota > 20.0) break;
        soma += nota;
        cont++;
    }
    if (cont > 0) printf("Media = %.2f\n", soma / cont);
    else printf("Nenhuma nota valida foi informada.\n");
}