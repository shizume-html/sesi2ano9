#include <stdio.h>
#include <stdbool.h>
#include <string.h>
void ex59() {
    int hab, cod;
    float kwh_val, consumo, maior, menor, soma_tot = 0;
    float c1 = 0, c2 = 0, c3 = 0;

    printf("Ex 59 - Digite num de habitantes e valor do kWh: ");
    scanf("%d %f", &hab, &kwh_val);

    for (int i = 1; i <= hab; i++) {
        printf("Habitante %d - Consumo e Codigo (1-Res, 2-Com, 3-Ind): ", i);
        scanf("%f %d", &consumo, &cod);

        if (i == 1) maior = menor = consumo;
        else {
            if (consumo > maior) maior = consumo;
            if (consumo < menor) menor = consumo;
        }

        soma_tot += consumo;
        if (cod == 1) c1 += consumo;
        else if (cod == 2) c2 += consumo;
        else if (cod == 3) c3 += consumo;
    }

    printf("\nMaior consumo: %.2f kWh\n", maior);
    printf("Menor consumo: %.2f kWh\n", menor);
    printf("Media geral: %.2f kWh\n", soma_tot / hab);
    printf("Total Residencial: %.2f kWh\n", c1);
    printf("Total Comercial: %.2f kWh\n", c2);
    printf("Total Industrial: %.2f kWh\n", c3);
}