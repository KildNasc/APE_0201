#include <stdio.h>

int main() {
    double x, y;

    /*Leia 2 valores com uma casa decimal (x e y), que devem representar as coordenadas de um ponto em um plano. A seguir, determine qual o quadrante ao qual pertence o ponto, ou se está sobre um dos eixos cartesianos ou na origem (x = y = 0). Se o ponto estiver na origem, escreva a mensagem “Origem”. Se o ponto estiver sobre um dos eixos escreva “Eixo X” ou “Eixo Y”, conforme for a situação. */
    
    printf("Coordenada x: ");
    scanf("%lf", &x);

    printf("Coordenada y: ");
    scanf("%lf", &y);

    if (x == 0.0 && y == 0.0) {
        printf("\nOrigem");
    } else if (x == 0.0) {
        printf("\nEixo Y");
    } else if (y == 0.0) {
        printf("\nEixo X");
    } else if (x > 0.0 && y > 0.0) {
        printf("\nEstá no quadrante Q1");
    } else if (x < 0.0 && y > 0.0) {
        printf("\nEstá no quadrante Q2");
    } else if (x < 0.0 && y < 0.0) {
        printf("\nEstá no quadrante Q3");
    } else {
        printf("\nEstá no quadrante Q4");
    }

    return 0;
}
