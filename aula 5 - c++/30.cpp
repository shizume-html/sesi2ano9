#include <stdio.h>
void ex30() {
    int n, i;
    printf("Ex 30 - Digite n: ");
    scanf("%d", &n);

    // a) 1 + 2 + ... + n
    int sa = 0;
    for (i = 1; i <= n; i++) sa += i;

    // b) 1 - 2 + 3 - 4 + ... + (2n - 1)
    int sb = 0;
    int limite_b = 2 * n - 1;
    for (i = 1; i <= limite_b; i++) {
        if (i % 2 != 0) sb += i;
        else sb -= i;
    }

    // c) 1 + 3 + 5 + ... + (2n - 1)
    int sc = 0;
    for (i = 1; i <= n; i++) sc += (2 * i - 1);

    printf("a) %d\n", sa);
    printf("b) %d\n", sb);
    printf("c) %d\n", sc);
}