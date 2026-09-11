#include <stdio.h>

int main() {
    float lab, sem, final_exam, media;
    printf("Digite a nota do Trabalho de Laboratorio (0 a 10): ");
    scanf("%f", &lab);
    printf("Digite a nota da Avaliacao Semestral (0 a 10): ");
    scanf("%f", &sem);
    printf("Digite a nota do Exame Final (0 a 10): ");
    scanf("%f", &final_exam);

    if (lab < 0 || lab > 10 || sem < 0 || sem > 10 || final_exam < 0 || final_exam > 10) {
        printf("Notas invalidas!\n");
        return 0;
    }

    media = (lab * 2 + sem * 3 + final_exam * 5) / 10.0;
    printf("Media final: %.2f\n", media);

    if (media >= 0.0 && media <= 2.9) {
        printf("Situacao: Reprovado\n");
    } else if (media >= 3.0 && media <= 4.9) {
        printf("Situacao: Recuperacao\n");
    } else {
        printf("Situacao: Aprovado\n");
    }
    return 0;
}