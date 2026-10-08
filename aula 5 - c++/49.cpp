#include <stdio.h>
#include <stdbool.h>
#include <string.h>
void ex49() {
    double carlos = 1000.0; 
    double joao = carlos / 3.0;
    int meses = 0;

    while (joao < carlos) {
        carlos += carlos * 0.02;
        joao += joao * 0.05;
        meses++;
    }
    printf("Ex 49 - Meses necessarios: %d\n", meses);
}