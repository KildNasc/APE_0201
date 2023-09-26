#include <stdio.h>

/*Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano. Construa um algoritmo que calcule e imprima quantos anos serão necessários para que Zé seja maior que Chico. */

int main() {
    double alturaChico = 150;
    double alturaZe = 110;
    int anos = 0;

    while (alturaZe <= alturaChico) {
        alturaChico += 2;
        alturaZe += 3;
        anos++;
    }

    printf("\nSerão necessários %d anos para que Zé seja mais alto que Chico.", anos);

    return 0;
}
