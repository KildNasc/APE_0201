#include <stdio.h>

/*A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e número de filhos. A prefeitura deseja saber:  

a) média do salário da população;

b) média do número de filhos;

c) maior salário;

d) percentual de pessoas com salário até R$100,00.

O final da leitura de dados se dará com a entrada de um salário negativo. (Use o comando do - while) .*/

int main() {
    int contador = 0;
    double salario, somaSalario = 0, mediaSalario, mediaFilhos, maiorSalario = 0;
    int numeroFilhos, somaFilhos = 0;
    int percentualAte100 = 0;

    do {
        printf("Informe o salario (ou um salario negativo para encerrar): ");
        scanf("%lf", &salario);

        if (salario < 0) {
            break;
        }

        printf("Informe o numero de filhos: ");
        scanf("%d", &numeroFilhos);

        somaSalario += salario;

        somaFilhos += numeroFilhos;

        if (salario > maiorSalario) {
            maiorSalario = salario;
        }

        if (salario <= 100.0) {
            percentualAte100++;
        }

        contador++;
    } while (1);

    if (contador > 0) {
        mediaSalario = somaSalario / contador;
        mediaFilhos = (double)somaFilhos / contador;

        printf("\nMédia do salário da população: %.2lf", mediaSalario);
        printf("\nMédia do número de filhos: %.2lf", mediaFilhos);
        printf("\nMaior salário: %.2lf", maiorSalario);
        printf("\nPercentual de pessoas com salário até R$100,00: %.2lf%%", (double)percentualAte100 / contador * 100);
    } else {
        printf("Nenhum dado foi informado.\n");
    }

    return 0;
}
