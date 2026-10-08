#include <stdio.h>
void ex13() {
    int n, i;
    printf("Ex 13 - Digite N par positivo: ");
    scanf("%d", &n);
    for (i = 0; i <= n; i += 2) printf("%d ", i);
    printf("\n");
}