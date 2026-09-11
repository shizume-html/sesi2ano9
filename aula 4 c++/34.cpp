#include <stdio.h>

int main() {
    float nota;
    int faltas;
    char conceito;

    printf("Digite a nota (0 a 10) e o numero de faltas: ");
    scanf("%f %d", &nota, &faltas);

    if (nota >= 9.0 && nota <= 10.0) conceito = 'A';
    else if (nota >= 7.5) conceito = 'B';
    else if (nota >= 5.0) conceito = 'C';
    else if (nota >= 4.0) conceito = 'D';
    else conceito = 'E';

    if (faltas > 20) {
        if (conceito == 'A') conceito = 'B';
        else if (conceito == 'B') conceito = 'C';
        else if (conceito == 'C') conceito = 'D';
        else if (conceito == 'D') conceito = 'E';
    }

    printf("Conceito do aluno: %c\n", conceito);
    return 0;
}