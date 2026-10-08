#include <stdio.h>
void ex09() {
    int n, i;
    printf("Ex 09 - Digite N: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("%d ", 2 * i + 1);
    }
    printf("\n");
}