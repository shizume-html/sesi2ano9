#include <stdio.h>
#include <math.h>

int main() {
    float x, y, distancia;

    scanf("%f %f", &x, &y);

    distancia = sqrt(x * x + y * y);

    printf("Distancia = %.2f\n", distancia);

    return 0;
}
