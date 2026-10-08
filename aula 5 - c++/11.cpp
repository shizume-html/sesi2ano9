#include <stdio.h>
void ex12() {
    int n, i;
    printf("Ex 12 - Digite N positivo: ");
    scanf("%d", &n);
    for (i = n; i >= 0; i--) printf("%d ", i);
    printf("\n");
}