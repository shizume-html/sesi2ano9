#include <stdio.h>

int main() {
    float graus, radianos;
    const float PI = 3.14;

    scanf("%f", &graus);

    radianos = graus * PI / 180.0;

    printf("%.2f radianos\n", radianos);

    return 0;
}
