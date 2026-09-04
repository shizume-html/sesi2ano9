#include <stdio.h>

int main() {
    float M, A;

    printf("Digite a area em metros quadrados: ");
    scanf("%f", &M);

    A = M * 0.000247;

    printf("Area em acres: %.2f\n", A);

    return 0;
}
