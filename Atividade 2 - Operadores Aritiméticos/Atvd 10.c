#include <stdio.h>

main(){
    float numCarros, totalVendas, salarioFixo, valorPorCarro, salarioFinal, comissaoFixa = 0.05;

    printf("Digite a quantidade de carros vendidos: ");
    scanf("%f", &numCarros);

    printf("Digite o valor total das vendas: ");
    scanf("%f", &totalVendas);

    printf("Digite o salario fixo: ");
    scanf("%f", &salarioFixo);

    printf("Digite a comissao por carro vendido: ");
    scanf("%f", &valorPorCarro);

    salarioFinal = salarioFixo + (numCarros * valorPorCarro) + (totalVendas * comissaoFixa);

  printf ("O salario final é igual a: %f", salarioFinal);

}
