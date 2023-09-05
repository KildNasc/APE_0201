#include <stdio.h>

main() {
    int codigo;
    int quantidade;
    double valor;

    printf("Digite o código do item: ");
    scanf("%d", &codigo);
    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    switch (codigo) {
        case 100:
            valor = quantidade * 10.10;
            break;
        case 101:
            valor = quantidade * 8.30;
            break;
        case 102:
            valor = quantidade * 8.50;
            break;
        case 103:
            valor = quantidade * 12.50;
            break;
        case 104:
            valor = quantidade * 13.25;
            break;
        default:
            printf("Código de item inválido.\n");
            return 1; 
    }

    
    printf("Valor a pagar: R$%.2lf\n", valor);

}
