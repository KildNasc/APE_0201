#include <stdio.h>

main(){
  //Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de reajuste. Calcular e escrever o valor do novo salário.;

 float salario, reajuste, porcent, newsal;
  

  printf("Digite seu salário mensal atual: \n");
  scanf("%f", &salario);

  printf("Insira a porcentagem do reajuste: \n");
  scanf("%f", &reajuste);

  porcent = reajuste/100;

  newsal = (salario * porcent) + salario;

  printf("Valor do novo salário: %f", newsal);
}