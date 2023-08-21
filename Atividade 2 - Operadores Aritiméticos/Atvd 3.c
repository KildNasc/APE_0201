#include <stdio.h>

main(){
    //Dado um valor em reais e a cotação do dólar, converta esse valor para dólares.

  printf("\n\n------------");
  printf("Conversao Dolar");
  printf("------------");
  
  float reais, cotacaoDolar, valorConvertido;

  printf("\n\nInsira o valor em reais: ");
  scanf("%f", &reais);

  printf("\n\nInsira a cotacao do dolar: ");
  scanf("%f", &cotacaoDolar);

  valorConvertido = reais / cotacaoDolar;

  printf("\n\nO valor em dolar é: %f", valorConvertido);
}