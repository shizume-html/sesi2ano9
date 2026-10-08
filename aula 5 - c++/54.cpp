#include <stdio.h>
#include <stdbool.h>
#include <string.h>
void ex53() {
    int n, num = 1;
    printf("Ex 53 - Digite n linhas: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }
}