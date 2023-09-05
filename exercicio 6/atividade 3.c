#include <stdio.h>

main() {
    int prato, sobremesa, bebida;
    double totalCalorias = 0;

    printf("-----Cardapio-----\n");
    printf("\n-----Pratos-----\n");
    printf("\nPratos: \n 1 - Vegetariano (180cal) \n 2 - Peixe (230cal) \n 3 - Frango (250 cal) \n 4 - Carne (350 cal)\n");
    printf("\nEscolha seu prato: ");
    scanf("%d", &prato);

    switch (prato) {
        case 1: totalCalorias += 180; 
          break;
        case 2: totalCalorias += 230; 
          break;
        case 3: totalCalorias += 250; 
          break;
        case 4: totalCalorias += 350; 
          break;
        default:
            printf("Opção de prato inválida.\n");
            return 1; 
    }
    printf("\n-----Sobremesas-----\n");
    printf("\nSobremesas: \n 1 - Abacaxi (75 cal) \n 2 - Sorvete Diet (110 cal) \n 3 - Mouse Diet (170 cal) \n 4 - Mouse Chocolate (200 cal)\n");
    printf("\nEscolha sua sobremesa: ");
    scanf("%d", &sobremesa);

    switch (sobremesa) {
        case 1: totalCalorias += 75; 
          break;
        case 2: totalCalorias += 110; 
          break;
        case 3: totalCalorias += 170; 
          break;
        case 4: totalCalorias += 200; 
          break;
        default:
            printf("Opção de sobremesa inválida.\n");
            return 1; 
    }
    printf("\n-----Bebidas-----\n");
    printf("\nBebidas: \n 1 - Chá (20 cal) \n 2 - Suco de Laranja (70 cal) \n 3 - Suco de Melão (100 cal) \n 4 - Refrigerante Diet (65 cal)\n");
    printf("\nEscolha sua bebida: ");
    scanf("%d", &bebida);

    switch (bebida) {
        case 1: totalCalorias += 20; 
          break;
        case 2: totalCalorias += 70; 
          break;
        case 3: totalCalorias += 100; 
          break;
        case 4: totalCalorias += 65; 
          break;
        default:
            printf("Opção de bebida inválida.\n");
            return 1; 
    }
    printf("Total de calorias da sua refeição: %.2lf calorias.\n", totalCalorias);

}
