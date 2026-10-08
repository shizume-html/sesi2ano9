#include <stdio.h>
#include <stdbool.h>
#include <string.h>
void ex32() {
    int n, i, d1, d2;
    srand(time(NULL));
    printf("Ex 32 - Digite n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        d1 = (rand() % 6) + 1;
        d2 = (rand() % 6) + 1;
        printf("Lancamento %d: d1=%d, d2=%d (d1 %c d2)\n", 
                i, d1, d2, (d1 > d2) ? '>' : (d1 < d2) ? '<' : '=');
    }
}