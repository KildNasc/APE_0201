#include <stdio.h>

main(){
  //Escreva um programa que pergunte qual o raio de um circulo e imprima a sua área;

  printf("\n\n------------");
  printf("Raio de um circulo");
  printf("------------");

  double raio, PI = 3.1415, areaCirculo;

  printf("\n\nDigite o valor do raio: ");
  scanf("%lf", &raio);

  areaCirculo = PI * (raio * raio);
  //areaCirculo = PI *(pow(raio, 2));

  printf("O valor do raio do circulo é: %lf", areaCirculo);
}