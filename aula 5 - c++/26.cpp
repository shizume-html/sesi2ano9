#include <stdio.h>
void ex26() {
    int n;
    printf("Ex 26 - Digite um numero: ");
    scanf("%d", &n);
    int num = n + 1;
    while (1) {
        if (num % 11 == 0 || num % 13 == 0 || num % 17 == 0) {
            printf("Primeiro multiplo apos %d e: %d\n", n, num);
            break;
        }
        num++;
    }
}