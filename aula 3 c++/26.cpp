#include <stdio.h>

int main() {
    float M, H;

    printf("Digite a area em metros quadrados: ");
    scanf("%f", &M);

    H = M * 0.0001;

    printf("Area em hectares: %.2f\n", H);

    return 0;
}
