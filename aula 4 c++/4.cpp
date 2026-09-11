#include <stdio.h>
#include <math.h>

int main() {
    float num;
    printf("Digite um numero: ");
    scanf("%f", &num);

    if (num > 0) {
        printf("Ao quadrado: %.2f\n", num * num);
        printf("Raiz quadrada: %.2f\n", sqrt(num));
    }
    return 0;
}