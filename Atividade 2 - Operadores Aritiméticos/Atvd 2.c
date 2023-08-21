#include <stdio.h>

main(){
  //Escreva um programa que receba um número qualquer e mostre o seu dobro;
  int numero, dobro;

  printf("------------");
  printf("Dobro de um numero");
  printf("------------");

  printf("\n\nDigite um numero qualquer: ");
  scanf("%d", &numero);
  getchar();

  dobro = numero + numero;
  //dobro = numero * 2;

  printf("O dobro do valor digitado é: %d", dobro);
}