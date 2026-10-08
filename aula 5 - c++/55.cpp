#include <stdio.h>
#include <stdbool.h>
#include <string.h>
void ex54() {
    int n;
    printf("Ex 54 - Digite n > 1: ");
    scanf("%d", &n);
    if (n > 1 && eh_primo(n)) printf("%d e PRIMO\n", n);
    else printf("%d NAO e primo\n", n);
}