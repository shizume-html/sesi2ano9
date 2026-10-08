#include <stdio.h>
void ex25() {
    int i, soma = 0;
    for (i = 1; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) soma += i;
    }
    printf("Ex 25 - Soma = %d\n", soma);
}