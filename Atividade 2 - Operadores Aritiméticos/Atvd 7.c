#include <stdio.h>

main(){
  //Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a idade dessa pessoa expressa apenas em dias.;

  int anos, meses, dias, total;

  printf("Digite sua idade em anos: \n");
  scanf("%d", &anos);

  printf("Digite sua idade em meses: \n");
  scanf("%d", &meses);

  printf("Digite sua idade em dias: \n");
  scanf("%d", &dias);
 
 total = (anos*365) + (meses*30) + dias;

  printf("Total de dias: %d", total);
  
}