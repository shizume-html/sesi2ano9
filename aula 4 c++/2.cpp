#include <stdio.h>
#include <math.h>

int main() {
    float num;
    printf("Digite um numero: ");
    scanf("%f", &num);

    if (num >= 0) {
        printf("A raiz quadrada e: %.2f\n", sqrt(num));
    } else {
        printf("Numero invalido.\n");
    }
    return 0;
}