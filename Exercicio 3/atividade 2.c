#include <stdio.h>
main(){
    //Leia o salário e imprima se ganha mais que o mínimo
    float salarioMinimo = 1320.00;
    float salario;

    printf ("Digite o salario atual: ");
    scanf ("%f", &salario);

    if(salario > salarioMinimo){
        printf("O salario é maior");
    }else if(salario == salarioMinimo){
        printf("O salario é igual");
    }else{
        printf("O salario é menor");
    }

}