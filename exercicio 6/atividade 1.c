#include <stdio.h>

main() {
int DDD;
  
  printf ("Digite o seu DDD: ");
  scanf("%d", &DDD);
  
  switch (DDD)
  {
    case 61:
    printf ("Brasilia\n");
    break;
    
    case 71:
    printf ("Salvador\n");
    break;
    
    case 11:
    printf ("São Paulo\n");
    break;
    
    case 21:
    printf ("Rio de Janeiro\n");
    break;
    
    case 32:
    printf ("Juiz de Fora\n");
    break;
    
    case 19:
    printf ("Campinas\n");
    break;
    
    case 27:
    printf ("Vitoria\n");
    break;

    case 31:
    printf ("Belo Horizonte\n");
    break;
    
    default:
    printf ("Sem identificação! Tente novamente mais tarde!\n");
  }
}