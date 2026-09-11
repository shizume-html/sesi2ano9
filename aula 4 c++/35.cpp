#include <stdio.h>

int main() {
    int dia, mes, ano, valido = 1;

    printf("Digite a data (dia mes ano): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    if (mes < 1 || mes > 12) {
        valido = 0;
    } else {
        int bissexto = ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0));
        int max_dias;

        if (mes == 2) {
            max_dias = bissexto ? 29 : 28;
        } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
            max_dias = 30;
        } else {
            max_dias = 31;
        }

        if (dia < 1 || dia > max_dias) valido = 0;
    }

    if (valido) printf("Data valida\n");
    else printf("Data invalida\n");

    return 0;
}