#include <stdio.h>

struct Funcionario {
    int quantidade;
    float salario;
};

int validaQuantidade();
float calculaSalario(int quantidade);
void mostraFinal(struct Funcionario funcionario);

int main() {
    struct Funcionario funcionario;
    char continuar;

    do {
        funcionario.quantidade = validaQuantidade();
        funcionario.salario = calculaSalario(funcionario.quantidade);
        mostraFinal(funcionario);

        printf("Deseja inserir outro funcionário? (S - sim, N - não): ");
        scanf(" %c", &continuar);
    } while (continuar == 'S' || continuar == 's');

    printf("Programa encerrado.\n");

    return 0;
}

int validaQuantidade() {
    int quantidade;
    do {
        printf("A quantidade de peças fabricadas pelo funcionário: ");
        scanf("%d", &quantidade);

        if (quantidade < 0) {
            printf("Quantidade inválida. Digite um valor não negativo.\n");
        }
    } while (quantidade < 0);

    return quantidade;
}

float calculaSalario(int quantidade) {
    const float salarioBase = 600.0;
    const float adicional50 = 0.50;
    const float adicional80 = 0.75;

    float salario = salarioBase;

    if (quantidade > 50) {
        salario += (quantidade <= 80) ? (quantidade - 50) * adicional50 : 30 * adicional50 + (quantidade - 80) * adicional80;
    }

    return salario;
}

void mostraFinal(struct Funcionario funcionario) {
    printf("Quantidade de peças fabricadas: %d\n", funcionario.quantidade);
    printf("Salário total do funcionário: R$ %.2f\n", funcionario.salario);
    printf("\n");
}
