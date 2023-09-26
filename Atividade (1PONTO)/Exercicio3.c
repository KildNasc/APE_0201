#include <stdio.h>

/*Dado três valores, A, B e C, construa um algoritmo para verificar se estes valores podem ser valores dos lados de um triângulo, e se for, se é um triangulo escaleno, um triangulo equilátero ou um triangulo isósceles.*/

int main() {
    double A, B, C;

    printf("Digite o valor de A: ");
    scanf("%lf", &A);

    printf("Digite o valor de B: ");
    scanf("%lf", &B);

    printf("Digite o valor de C: ");
    scanf("%lf", &C);

    if (A + B > C && A + C > B && B + C > A) {
        if (A == B && B == C) {
            printf("\nÉ um triângulo equilátero.");
        } else if (A == B || A == C || B == C) {
            printf("\nÉ um triângulo isósceles.");
        } else {
            printf("\nÉ um triângulo escaleno.");
        }
    } else {
        printf("\nEsses valores não podem formar um triângulo.");
    }

    return 0;
}
