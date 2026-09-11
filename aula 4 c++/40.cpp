#include <stdio.h>

int main() {
    float custo_fabrica, pct_dist, pct_imp, custo_consumidor;

    printf("Digite o custo de fabrica do carro: R$ ");
    scanf("%f", &custo_fabrica);

    if (custo_fabrica <= 12000.0) {
        pct_dist = 0.05;
        pct_imp = 0.0;
    } else if (custo_fabrica <= 25000.0) {
        pct_dist = 0.10;
        pct_imp = 0.15;
    } else {
        pct_dist = 0.15;
        pct_imp = 0.20;
    }

    custo_consumidor = custo_fabrica + (custo_fabrica * pct_dist) + (custo_fabrica * pct_imp);
    printf("Custo ao consumidor: R$ %.2f\n", custo_consumidor);

    return 0;
}