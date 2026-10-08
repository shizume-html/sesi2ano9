#include <stdio.h>
#include <stdbool.h>
#include <string.h>
void ex38() {
    int a, b, c;
    for (a = 1; a < 1000; a++) {
        for (b = a + 1; b < 1000; b++) {
            c = 1000 - a - b;
            if (c > b && (a * a + b * b == c * c)) {
                printf("Ex 38 - Terno Pitagorico: a=%d, b=%d, c=%d\n", a, b, c);
                return;
            }
        }
    }
}