#include <stdio.h>
#include <stdbool.h>
#include <string.h>
void ex31() {
    double s = 0.0;
    int i;
    for (i = 1; i <= 50; i++) {
        s += (double)(2 * i - 1) / i;
    }
    printf("Ex 31 - S = %lf\n", s);
}