#include <stdio.h>

int validaSexo(char sexo);
float validaSalario();

void classificaSalario(float salario, float salarioMinimo) {
    if (salario > salarioMinimo) {
        printf("Acima do salario minimo\n");
    } else if (salario == salarioMinimo) {
        printf("Igual ao salario minimo\n");
    } else {
        printf("Abaixo do salario minimo\n");
    }
}

void mostraClassifica(float salario, char sexo) {
    printf("Salario: R$%.2f\n", salario);

    if (sexo == 'M' || sexo == 'm') {
        printf("Sexo: Masculino\n");
    } else if (sexo == 'F' || sexo == 'f') {
        printf("Sexo: Feminino\n");
    }

    float salarioMinimo = 1400.0;
    classificaSalario(salario, salarioMinimo);
}

int main() {
    int numAssalariados;
    int abaixoSalarioMinimo = 0;
    int acimaSalarioMinimo = 0;

    printf("Digite o numero de assalariados: ");
    scanf("%d", &numAssalariados);

    for (int i = 0; i < numAssalariados; i++) {
        char sexo;
        float salario;

        printf("Digite o sexo (M/F): ");
        sexo = validaSexo(sexo);

        printf("Digite o salario (maior que R$1,00): ");
        salario = validaSalario();

        mostraClassifica(salario, sexo);

        if (salario < 1400.0) {
            abaixoSalarioMinimo++;
        } else {
            acimaSalarioMinimo++;
        }
    }

    printf("\nQuantidade de assalariados abaixo do salario minimo: %d\n", abaixoSalarioMinimo);
    printf("Quantidade de assalariados acima do salario minimo: %d\n", acimaSalarioMinimo);

    return 0;
}

int validaSexo(char sexo) {
    while (1) {
        scanf(" %c", &sexo);
        if (sexo == 'M' || sexo == 'm' || sexo == 'F' || sexo == 'f') {
            return sexo;
        } else {
            printf("Sexo invalido. Digite novamente (M/F): ");
        }
    }
}

float validaSalario() {
    float salario;

    while (1) {
        scanf("%f", &salario);
        if (salario > 1.0) {
            return salario;
        } else {
            printf("Salario invalido. Digite novamente (maior que R$1,00): ");
        }
    }
}
