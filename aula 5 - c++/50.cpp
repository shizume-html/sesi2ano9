#include <stdio.h>
#include <stdbool.h>
#include <string.h>
void ex50() {
    float chico = 1.50, ze = 1.10;
    int anos = 0;
    while (ze <= chico) {
        chico += 0.02;
        ze += 0.03;
        anos++;
    }
    printf("Ex 50 - Anos necessarios: %d\n", anos);
}