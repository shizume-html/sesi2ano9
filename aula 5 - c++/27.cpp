#include <stdio.h>
void ex27() {
    int n, i;
    double h = 0.0;
    printf("Ex 27 - Digite n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        h += 1.0 / i;
    }
    printf("H(%d) = %lf\n", n, h);
}