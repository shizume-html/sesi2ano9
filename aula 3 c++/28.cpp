#include <stdio.h>

int main() {
    float H, M;

    printf("Digite a area em hectares: ");
    scanf("%f", &H);

    M = H * 10000;

    printf("Area em metros quadrados: %.2f\n", M);

    return 0;
}
