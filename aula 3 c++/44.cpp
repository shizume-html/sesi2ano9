#include <stdio.h>

int main() {
    float alturaDegrau, alturaDesejada;
    int degraus;

    scanf("%f %f", &alturaDegrau, &alturaDesejada);

    degraus = (int)(alturaDesejada / alturaDegrau);

    if (alturaDesejada > degraus * alturaDegrau) {
        degraus++;
    }

    printf("Degraus: %d\n", degraus);

    return 0;
}
