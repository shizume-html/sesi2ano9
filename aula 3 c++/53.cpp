#include <stdio.h>

int main() {
    float comprimento, largura, preco;
    float perimetro, custo;

    scanf("%f %f %f", &comprimento, &largura, &preco);

    perimetro = 2 * (comprimento + largura);
    custo = perimetro * preco;

    printf("Custo para cercar: R$ %.2f\n", custo);

    return 0;
}
