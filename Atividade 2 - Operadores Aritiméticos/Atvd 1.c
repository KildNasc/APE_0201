#include <stdio.h>
main() {

  int num1, num2, resultadoSoma, resultadoSub, resultadoMult;
  float resultadoDiv;

  //montar as operações

  printf("Digite o primeiro numero\n");
  scanf("%d", &num1);
  printf("Digite o segundo numero\n");
  scanf("%d", &num2);

  resultadoSoma = num1 + num2;
  resultadoSub = num1 - num2;
  resultadoMult = num1 * num2;
  resultadoDiv = (float) num1 / num2;

  printf("\nResultado soma: %d", resultadoSoma);
  printf("\nResultado subtracao: %d", resultadoSub);
  printf("\nResultado divisao: %f", resultadoDiv);
  printf("\nResultado multiplicacao: %d", resultadoMult);
    
}
