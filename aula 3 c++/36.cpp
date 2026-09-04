#include <stdio.h>

int main() {
    float altura, raio, volume;
    const float PI = 3.141592;

    scanf("%f %f", &altura, &raio);

    volume = PI * raio * raio * altura;

    printf("Volume = %.2f\n", volume);

    return 0;
}
