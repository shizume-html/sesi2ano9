#include <stdio.h>

int main() {
    float km, litros, consumo;
    printf("Digite a distancia (km) e a quantidade de litros consumidos: ");
    scanf("%f %f", &km, &litros);

    if (litros <= 0) {
        printf("Quantidade de litros deve ser maior que zero.\n");
        return 0;
    }

    consumo = km / litros;
    printf("Consumo: %.2f km/l - ", consumo);

    if (consumo < 8) {
        printf("Venda o carro!\n");
    } else if (consumo <= 14) {
        printf("Economico!\n");
    } else {
        printf("Super economico!\n");
    }
    return 0;
}