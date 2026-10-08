#include <stdio.h>
void ex21() {
    int a, b, inicio, fim, i;
    long long prod_impar = 1;
    int soma_par = 0, tem_impar = 0;
    
    printf("Ex 21 - Digite dois numeros: ");
    scanf("%d %d", &a, &b);
    inicio = (a < b) ? a : b;
    fim = (a > b) ? a : b;

    for (i = inicio; i <= fim; i++) {
        if (i % 2 == 0) soma_par += i;
        else {
            prod_impar *= i;
            tem_impar = 1;
        }
    }
    printf("Soma dos pares: %d\n", soma_par);
    printf("Multiplicacao dos impares: %lld\n", tem_impar ? prod_impar : 0);
}