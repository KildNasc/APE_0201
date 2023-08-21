#include <stdio.h>

main(){
  //Faça um programa em que o usuario digite o custo de um a determinada mercadoria, em seguida, adiciona-se ao custo o varlod do frete e despesas eventuais (tambem olicitadas pelo teclado). Para concluir, o progrma perguna qual o valor de venda e indica a porcentagem de lucro da mercadoria

  printf("\n\n------------");
  printf("Custo determinada mercadoria");
  printf("------------");
  float custo, valorFrete, despesas, valorVenda, lucro, valorBruto, porcetagemLucro;

  printf("\n\nDigite o valor de custo da mercadoria: ");
  scanf ("%f", &custo);
  printf("Digite o valor de frete da mercadoria: ");
  scanf ("%f", &valorFrete);
  printf("Digite o valor de frete das despesas: ");
  scanf ("%f", &despesas);
  printf("Digite o valor de venda: ");
  scanf ("%f", &valorVenda);

  valorBruto = custo + valorFrete + despesas;

  lucro = (valorVenda - valorBruto);

  porcetagemLucro = (lucro / valorBruto)*100;

  printf("A porcentagm de lucro é: %.2f%%", lucro);
}