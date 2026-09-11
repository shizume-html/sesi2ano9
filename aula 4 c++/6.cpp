#include <stdio.h>

int main() {
    int a, b;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("Maior: %d\nDiferenca: %d\n", a, a - b);
    } else {
        printf("Maior: %d\nDiferenca: %d\n", b, b - a);
    }
    return 0;
}