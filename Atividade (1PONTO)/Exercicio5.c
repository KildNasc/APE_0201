#include <stdio.h>
#include <math.h>

/*Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1, y1) e p2(x2, y2) e calcule a distância entre eles, mostrando 4 casas decimais após a vírgula, segundo a fórmula: */

int main() {
    double x1, y1, x2, y2;

    printf("Digite as coordenadas do ponto p1 (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Digite as coordenadas do ponto p2 (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    double distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("\nA distancia entre os pontos p1 e p2 e: %.4lf", distancia);

    return 0;
}
