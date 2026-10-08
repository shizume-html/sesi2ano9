#include <stdio.h>
void ex14() {
    int n, i;
    printf("Ex 14 - Digite N par positivo: ");
    scanf("%d", &n);
    for (i = (n % 2 == 0 ? n : n - 1); i >= 0; i -= 2) printf("%d ", i);
    printf("\n");
}