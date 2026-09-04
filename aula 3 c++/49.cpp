#include <stdio.h>

int main() {
    int hora, minuto, segundo;
    int duracao;
    int totalSegundos;

    scanf("%d %d %d", &hora, &minuto, &segundo);
    scanf("%d", &duracao);

    totalSegundos = hora * 3600 + minuto * 60 + segundo;
    totalSegundos += duracao;

    totalSegundos %= 24 * 3600;

    hora = totalSegundos / 3600;
    minuto = (totalSegundos % 3600) / 60;
    segundo = totalSegundos % 60;

    printf("%02d:%02d:%02d\n", hora, minuto, segundo);

    return 0;
}
