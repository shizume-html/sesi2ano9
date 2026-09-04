#include <stdio.h>

int main() {
    float radianos, graus;
    const float PI = 3.14;

    scanf("%f", &radianos);

    graus = radianos * 180.0 / PI;

    printf("%.2f graus\n", graus);

    return 0;
}
