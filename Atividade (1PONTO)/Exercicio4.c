#include <stdio.h>

/*Dados três valores A, B e C, construa um algoritmo para verificar se estes valores podem ser valores dos lados de um triângulo, e se for classificá-los (imprimi-los) segundo os ângulos. (Triângulo Retângulo = 90º, Triângulo Obtusângulo > 90º, Triângulo Acutângulo < 90º)*/

int main() {
    double A, B, C;

    printf("Digite o valor de A: ");
    scanf("%lf", &A);

    printf("Digite o valor de B: ");
    scanf("%lf", &B);

    printf("Digite o valor de C: ");
    scanf("%lf", &C);

    if (A + B > C && A + C > B && B + C > A) {
        if (A * A + B * B == C * C || A * A + C * C == B * B || B * B + C * C == A * A) {
            printf("\nTriângulo Retângulo.");
        } else if (A * A + B * B < C * C || A * A + C * C < B * B || B * B + C * C < A * A) {
            printf("\nTriângulo Obtusângulo.");
        } else {
            printf("\nTriângulo Acutângulo.");
        }
    } else {
        printf("\nEsses valores não formam um triângulo.");
    }

    return 0;
}
