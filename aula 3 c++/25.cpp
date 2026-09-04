#include <stdio.h>

int main() {
    float A, M;

    printf("Digite a area em acres: ");
    scanf("%f", &A);

    M = A * 4048.58;

    printf("Area em metros quadrados: %.2f\n", M);

    return 0;
}
