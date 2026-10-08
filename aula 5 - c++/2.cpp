#include <stdio.h>

void ex02() {
    int i;
    printf("Ex 02 (for): ");
    for (i = 1; i <= 100; i++) printf("%d ", i);
    
    printf("\nEx 02 (while): ");
    i = 1;
    while (i <= 100) {
        printf("%d ", i);
        i++;
    }