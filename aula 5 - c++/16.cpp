#include <stdio.h>
void ex16() {
    int n, i;
    printf("Ex 16 - Digite N ímpar positivo: ");
    scanf("%d", &n);
    for (i = (n % 2 != 0 ? n : n - 1); i >= 1; i -= 2) printf("%d ", i);
    printf("\n");
}