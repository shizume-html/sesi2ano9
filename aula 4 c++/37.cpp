#include <stdio.h>

int main() {
    int h_chegada, m_chegada, h_partida, m_partida;
    int min_chegada, min_partida, duracao_min, horas;
    float valor = 0.0;

    printf("Digite a hora e minuto de chegada (ex: 12 50): ");
    scanf("%d %d", &h_chegada, &m_chegada);
    printf("Digite a hora e minuto de partida (ex: 14 10): ");
    scanf("%d %d", &h_partida, &m_partida);

    min_chegada = h_chegada * 60 + m_chegada;
    min_partida = h_partida * 60 + m_partida;

    if (min_partida <= min_chegada) {
        min_partida += 24 * 60; // Passou para o dia seguinte
    }

    duracao_min = min_partida - min_chegada;
    horas = duracao_min / 60;
    if (duracao_min % 60 != 0) {
        horas++; // Arredonda por excesso
    }

    if (horas <= 2) {
        valor = horas * 1.00;
    } else if (horas <= 4) {
        valor = 2 * 1.00 + (horas - 2) * 1.40;
    } else {
        valor = 2 * 1.00 + 2 * 1.40 + (horas - 4) * 2.00;
    }

    printf("Tempo cobrado: %d horas. Valor a pagar: R$ %.2f\n", horas, valor);
    return 0;
}