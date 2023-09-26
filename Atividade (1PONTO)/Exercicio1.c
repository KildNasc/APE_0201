#include <stdio.h>
#include <math.h>
/*Criar um algoritmo que receba o valor de x, e calcule e imprima o valor de f(x). */

int main() {
    double x, resultado;

    printf("Digite o valor de x: ");
    scanf("%lf", &x);

    if (x < 4) {
        printf("\nO valor de x deve ser maior ou igual a 4");
    } else {
        resultado = (5 * x + 3) / sqrt(x * x - 16);

        printf("\nO valor da expressao e: %.2lf", resultado);
    }

}
