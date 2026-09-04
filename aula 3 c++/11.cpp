#include <stdio.h>

int main() {
    float ms, kmh;

    scanf("%f", &ms);

    kmh = ms * 3.6;

    printf("%.2f km/h\n", kmh);

    return 0;
}
