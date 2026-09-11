#include <stdio.h>

int main() {
    float salario, reajuste = 0.0, bonus = 0.0, salario_final;
    int tempo;

    printf("Digite o salario atual: R$ ");
    scanf("%f", &salario);
    printf("Digite o tempo de servico (anos): ");
    scanf("%d", &tempo);

    // Reajuste por Salário
    if (salario <= 500.0) reajuste = 0.25;
    else if (salario <= 1000.0) reajuste = 0.20;
    else if (salario <= 1500.0) reajuste = 0.15;
    else if (salario <= 2000.0) reajuste = 0.10;
    else reajuste = 0.0;

    // Bônus por Tempo de Serviço
    if (tempo < 1) bonus = 0.0;
    else if (tempo <= 3) bonus = 100.0;
    else if (tempo <= 6) bonus = 200.0;
    else if (tempo <= 10) bonus = 300.0;
    else bonus = 500.0;

    if (reajuste == 0.0 && bonus == 0.0) {
        printf("O funcionario nao tem direito a nenhum aumento.\n");
    } else {
        salario_final = salario * (1 + reajuste) + bonus;
        printf("Salario reajustado final: R$ %.2f\n", salario_final);
    }

    return 0;
}