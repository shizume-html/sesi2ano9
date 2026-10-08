#include <stdio.h>
#include <stdbool.h>
#include <string.h>
void ex33() {
    int n, i, j, k = 0, num = 0;
    printf("Ex 33 - Digite n, i, j: ");
    scanf("%d %d %d", &n, &i, &j);
    printf("Múltiplos: ");
    while (k < n) {
        if (num % i == 0 || num % j == 0) {
            printf("%d ", num);
            k++;
        }
        num++;
    }
    printf("\n");
}