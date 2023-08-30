#include <stdio.h>
main(){
    //Leia a altura e imprima se é maior que 1.8m

    int altura;
    char nome [10];

    printf("Digite seu nome: ");
    fgets (nome, 10, stdin);

    printf ("\nDigite a sua altura (em cm): ");
    scanf ("%d", &altura);

    if (altura >= 180){
        printf("%s você é maior", nome);
        printf("\n Sua altura e %d", altura);

    }else{
        printf("%s você é menor", nome);
    }

    printf("\ncontinua...");

}