#include <stdio.h>

main() {
    //Dados três valores A, B e C, construa um algoritmo, que imprima os valores de forma ascendente (do menor para o maior).
    int num1, num2, num3;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

  
    if (num1 > num2) {
        if (num2 > num3) {
            printf("Números em ordem crescente: %d, %d, %d\n", num3, num2, num1);
        } else {
            if (num1 > num3) {
                printf("Números em ordem crescente: %d, %d, %d\n", num2, num3, num1);
            } else {
                printf("Números em ordem crescente: %d, %d, %d\n", num2, num1, num3);
            }
        }
    } else {
        if (num1 > num3) {
            printf("Números em ordem crescente: %d, %d, %d\n", num3, num1, num2);
        } else {
            if (num2 > num3) {
                printf("Números em ordem crescente: %d, %d, %d\n", num1, num3, num2);
            } else {
                printf("Números em ordem crescente: %d, %d, %d\n", num1, num2, num3);
            }
        }
    }

}