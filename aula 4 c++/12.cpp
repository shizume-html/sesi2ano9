#include <stdio.h>
#include <math.h>

int main() {
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Numero invalido\n");
    } else {
        printf("Logaritmo natural: %.2f\n", log(num));
    }
    return 0;
}