#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool eh_primo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}