#include <stdio.h>
main(){
    //Leia o peso e imprima se é menor que 60kg

    int peso;
    char nome [10];

    printf("Digite seu nome: ");
    fgets (nome, 10, stdin);

    printf ("\nDigite o seu peso (em Kg): ");
    scanf ("%d", &peso);

    if (peso <= 60){
        printf("%s você é menor", nome);
        printf("\n Seu peso e %d", peso);

    }else{
        printf("%s você é maior", nome);
    }

    printf("\ncontinua...");

}