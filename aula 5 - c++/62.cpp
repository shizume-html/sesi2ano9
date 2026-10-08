#include <stdio.h>

int letras_por_extenso(int n) {
    int u[] = {0, 3, 4, 4, 6, 5, 4, 4, 4, 4};
    int e10_19[] = {3, 4, 4, 5, 8, 6, 10, 10, 7, 8};
    int d[] = {0, 0, 5, 6, 8, 10, 8, 7, 7, 7};
    int c[] = {0, 5, 8, 9, 12, 10, 10, 10, 10};

    if (n == 1000) return 3;
    if (n == 100) return 3;

    int t = 0;
    int cent = n / 100;
    int resto = n % 100;

    if (cent > 0) {
        t += c[cent];
        if (resto > 0) t += 1;
    }

    if (resto >= 10 && resto <= 19) {
        t += e10_19[resto - 10];
    } else {
        int dezena = resto / 10;
        int unia = resto % 10;
        if (dezena > 0) {
            t += d[dezena];
            if (unia > 0) t += 1;
        }
        if (unia > 0) {
            t += u[unia];
        }
    }
    return t;
}

int main() {
    long total_letras = 0;
    for (int i = 1; i <= 1000; i++) {
        total_letras += letras_por_extenso(i);
    }
    printf("Total de letras: %ld\n", total_letras);
    return 0;
}