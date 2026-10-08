#include <stdio.h>

void ex04() {
    int v = 0;
    printf("Ex 04:\n");
    while (v <= 100000) {
        printf("%d ", v);
        v += 1000;
    }
    printf("\n");
}