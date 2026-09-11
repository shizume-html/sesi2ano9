#include <stdio.h>

int main() {
    int num, soma = 0, temp;
    printf("Digite um numero inteiro maior que zero: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Numero invalido\n");
        return 0;
    }

    temp = num;
    while (temp > 0) {
        soma += temp % 10;
        temp /= 10;
    }

    printf("A soma dos algarismos de %d e: %d\n", num, soma);
    return 0;
}