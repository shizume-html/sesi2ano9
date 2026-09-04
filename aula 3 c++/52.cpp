#include <stdio.h>

int main() {
    float investimento1, investimento2, investimento3;
    float premio, totalInvestido;
    float ganho1, ganho2, ganho3;

    scanf("%f %f %f", &investimento1, &investimento2, &investimento3);
    scanf("%f", &premio);

    totalInvestido = investimento1 + investimento2 + investimento3;

    ganho1 = premio * investimento1 / totalInvestido;
    ganho2 = premio * investimento2 / totalInvestido;
    ganho3 = premio * investimento3 / totalInvestido;

    printf("Apostador 1: R$ %.2f\n", ganho1);
    printf("Apostador 2: R$ %.2f\n", ganho2);
    printf("Apostador 3: R$ %.2f\n", ganho3);

    return 0;
}
