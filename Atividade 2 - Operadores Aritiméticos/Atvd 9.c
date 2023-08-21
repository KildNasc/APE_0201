#include <stdio.h>

main(){
  //O custo de um carro novo ao consumidor é a soma do custo de fábrica com a porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que o percentual do distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo para ler o custo de fábrica de um carro, calcular e escrever o custo final ao consumidor.


 float vFabrica, vFinal, impostos = 0.45, distribuidor = 0.28;

  printf("Digite o custo de fábrica do automóvel: \n");
  scanf("%f", &vFabrica);

  vFinal = (vFabrica * distribuidor) + (vFabrica * impostos) + vFabrica;

  printf("O valor do custo final do carro é: %f", vFinal);
}