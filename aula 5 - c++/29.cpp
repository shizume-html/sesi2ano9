#include <stdio.h>
void ex29() {
    int i, j;
    double s = 0.0;
    for (i = 0; i < 5; i++) {
        double fat = 1.0;
        int num_fat = 2 * i;
        for (j = 1; j <= num_fat; j++) fat *= j;
        
        if (num_fat == 0) s += 0;
        else s += (double)i / fat;
    }
    printf("Ex 29 - Serie (5 termos) = %lf\n", s);
}