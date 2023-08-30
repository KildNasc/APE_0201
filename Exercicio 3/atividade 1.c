#include <stdio.h>
main(){
    //Leia a idade e imprima se a pessoa é de maior

    int idade;
    char nome [10];

    printf("Digite seu nome: ");
    fgets (nome, 10, stdin);

    printf ("\nDigite a sua idade: ");
    scanf ("%d", &idade);

    if (idade >= 18){
        printf("%s você é maior de idade", nome);
        printf("\n Sua idade é %d", idade);

    }else{
        printf("%s você é menor de idade", nome);
    }

    printf("\ncontinua...");

}