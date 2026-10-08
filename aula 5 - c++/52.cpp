#include <stdio.h>
#include <stdbool.h>
#include <string.h>
void ex51() {
    double salario = 2000.0;
    double aumento = 0.015; // 1.5% em 1996
    salario += salario * aumento;
    
    for (int ano = 1997; ano <= 2024; ano++) {
        aumento *= 2;
        salario += salario * aumento;
    }
    printf("Ex 51 - Salario atual: R$ %.2lf\n", salario);
}