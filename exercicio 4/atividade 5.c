#include <stdio.h>

main() {
    //Construir um algoritmo que leia um número e imprima se ele é igual a 5, a 200, a 400, se está no intervalo entre 500 e 1000, ou se ela está fora dos escopos anteriores.
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero == 5) {
        printf("O número é igual.\n");
    } else if (numero == 200) {
        printf("O número é igual.\n");
    } else if (numero == 400) {
        printf("O número é igual.\n");
    } else if (numero >= 500 && numero <= 1000) {
        printf("O número está no intervalo entre 500 e 1000.\n");
    } else {
        printf("O número está fora dos escopos anteriores.\n");
    }

}
