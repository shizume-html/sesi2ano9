#include <stdio.h>
#include <math.h>

int main() {
    int x, y, z;
    char opcao;

    printf("Digite tres numeros inteiros positivos: ");
    scanf("%d %d %d", &x, &y, &z);

    if (x <= 0 || y <= 0 || z <= 0) {
        printf("Os numeros devem ser positivos.\n");
        return 0;
    }

    printf("Escolha a media a ser calculada:\n");
    printf("a. Geometrica\nb. Ponderada\nc. Harmonica\nd. Aritmetica\nOpcao: ");
    scanf(" %c", &opcao);

    switch (opcao) {
        case 'a': case 'A':
            printf("Media Geometrica: %.2f\n", cbrt(x * y * z));
            break;
        case 'b': case 'B':
            printf("Media Ponderada: %.2f\n", (x + 2.0 * y + 3.0 * z) / 6.0);
            break;
        case 'c': case 'C':
            printf("Media Harmonica: %.2f\n", 1.0 / ((1.0/x) + (1.0/y) + (1.0/z)));
            break;
        case 'd': case 'D':
            printf("Media Aritmetica: %.2f\n", (x + y + z) / 3.0);
            break;
        default:
            printf("Opcao invalida!\n");
    }
    return 0;
}