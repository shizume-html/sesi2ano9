#include <stdio.h>
void ex19() {
    int num;
    printf("Ex 19 - Digite numero de 100 a 999: ");
    scanf("%d", &num);
    if (num >= 100 && num <= 999) {
        printf("Centena: %d\n", num / 100);
        printf("Dezena:  %d\n", (num / 10) % 10);
        printf("Unidade: %d\n", num % 10);
    }
}