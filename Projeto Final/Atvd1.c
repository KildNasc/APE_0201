#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char dono[50];
  int combustivel;
  char modelo[50];
  char cor[10];
  char chassi[100];
  int ano;
  char placa[10];
} Automovel;

int validarPlaca(char *placa);
void mostrarAutomovel(Automovel *carro);
void listarCarrosDiesel2010(Automovel *automoveis, int quantidade);
void listarPlacas(Automovel *automoveis, int quantidade);
int calcularSomaDigitos(char *str);
void listarModeloCorVogalPar(Automovel *automoveis, int quantidade);
void trocarProprietario(Automovel *automoveis, int quantidade);
void listarModeloCorVogalSomaPar(Automovel *automoveis, int quantidade);

int main() {
  Automovel *automoveis = NULL;
  int cadSair, placaVerica;
  int quantidadeAutomoveis = 0;

  do {
    automoveis = realloc(automoveis, (quantidadeAutomoveis + 1) * sizeof(Automovel));

    printf("\nCadastro do veículo %d:\n", quantidadeAutomoveis + 1);

    printf("\n1) Digite o nome do dono: ");
    fgets(automoveis[quantidadeAutomoveis].dono,
          sizeof(automoveis[quantidadeAutomoveis].dono), stdin);

    do {
      printf("\n2) O veículo é movido\n1 - álcool\n2 - diesel\n3 - gasolina\n");
      scanf("%d", &automoveis[quantidadeAutomoveis].combustivel);
      getchar();
    } while (automoveis[quantidadeAutomoveis].combustivel != 1 &&
             automoveis[quantidadeAutomoveis].combustivel != 2 &&
             automoveis[quantidadeAutomoveis].combustivel != 3);

    printf("\n3) Qual o modelo do veículo: ");
    fgets(automoveis[quantidadeAutomoveis].modelo,
          sizeof(automoveis[quantidadeAutomoveis].modelo), stdin);

    printf("\n4) Qual a cor do veículo: ");
    fgets(automoveis[quantidadeAutomoveis].cor, sizeof(automoveis[quantidadeAutomoveis].cor),
          stdin);

    printf("\n5) Qual o chassi do veículo: ");
    fgets(automoveis[quantidadeAutomoveis].chassi,
          sizeof(automoveis[quantidadeAutomoveis].chassi), stdin);

    printf("\n6) Qual o ano do veículo: ");
    scanf("%d", &automoveis[quantidadeAutomoveis].ano);
    getchar();

    do {
      printf("\n7) Digite a placa do veículo: ");
      scanf("%10[^\n]%*c", automoveis[quantidadeAutomoveis].placa);

      placaVerica = validarPlaca(automoveis[quantidadeAutomoveis].placa);

      if (placaVerica != 1) {
        printf("Digite uma placa válida\n");
      }

    } while (placaVerica != 1);

    quantidadeAutomoveis++;

    printf("Deseja cadastrar mais veículos? (1 - Sim, 2 - Não): ");
    scanf("%d", &cadSair);
    getchar();

  } while (cadSair != 2);

  do {
    printf("\nMenu:\n1 - Listar os donos de veículos movidos a diesel ou com veículos mais novos que 2010\n\n");
    printf("2 - Listar placas que começam com J e terminam com 0, 2, 4 ou 7\n\n");
    printf("3 - Listar modelo e cor dos veículos com placas que têm segunda letra vogal e soma dos valores numéricos é par\n\n");
    printf("4 - Trocar dono por chassi (apenas veículos sem dígito zero na placa)\n\n");
    printf("5 - Finalizar\n\n");
    printf("Digite uma opção: ");
    scanf("%d", &cadSair);

    switch (cadSair) {
    case 1:
      listarCarrosDiesel2010(automoveis, quantidadeAutomoveis);
      break;
    case 2:
      listarPlacas(automoveis, quantidadeAutomoveis);
      break;
    case 3:
      listarModeloCorVogalPar(automoveis, quantidadeAutomoveis);
      break;
    case 4:
      trocarProprietario(automoveis, quantidadeAutomoveis);
      break;
    case 5:
      break;
    case 6:
      listarModeloCorVogalSomaPar(automoveis, quantidadeAutomoveis);
      break;
    default:
      printf("Opção inválida. Tente novamente.\n");
    }

  } while (cadSair != 5);

  free(automoveis);

  return 0;
}

int validarPlaca(char *placa) {
  if (strlen(placa) != 7) {
    return 0;
  }

  for (int i = 0; i < 3; i++) {
    if (!isalpha(placa[i])) {
      return 0;
    }
  }

  for (int i = 3; i < 7; i++) {
    if (!isdigit(placa[i])) {
      return 0;
    }
  }

  return 1;
}

void mostrarAutomovel(Automovel *carro) {
  printf("Dono: %s\n", carro->dono);
  printf("Combustível: %d\n", carro->combustivel);
  printf("Modelo: %s\n", carro->modelo);
  printf("Cor: %s\n", carro->cor);
  printf("Chassi: %s\n", carro->chassi);
  printf("Ano: %d\n", carro->ano);
  printf("Placa: %s\n", carro->placa);
}

void listarCarrosDiesel2010(Automovel *automoveis, int quantidade) {
  printf("\nDonos de veículos movidos a diesel ou com veículos mais novos que 2010:\n");

  for (int i = 0; i < quantidade; i++) {
    if (automoveis[i].ano >= 2010 || automoveis[i].combustivel == 2) {
      printf("- %s\n", automoveis[i].dono);
    }
  }
}

void listarPlacas(Automovel *automoveis, int quantidade) {
  printf("\nPlacas que começam com J e terminam com 0, 2, 4 ou 7:\n");

  for (int i = 0; i < quantidade; i++) {
    if (automoveis[i].placa[0] == 'J' &&
        (automoveis[i].placa[6] == '0' || automoveis[i].placa[6] == '2' ||
         automoveis[i].placa[6] == '4' || automoveis[i].placa[6] == '7')) {
      printf("- Placa: %s, Dono: %s\n", automoveis[i].placa,
             automoveis[i].dono);
    }
  }
}

int calcularSomaDigitos(char *str) {
  int soma = 0;
  for (int i = 0; i < strlen(str); i++) {
    if (isdigit(str[i])) {
      soma += str[i] - '0';
    }
  }
  return soma;
}

void listarModeloCorVogalPar(Automovel *automoveis, int quantidade) {
  printf("\nModelo e cor dos veículos com placas que têm segunda letra vogal e "
         "soma dos valores numéricos é par:\n");

  for (int i = 0; i < quantidade; i++) {
    if (strchr("aeiouAEIOU", automoveis[i].placa[1]) != NULL &&
        calcularSomaDigitos(automoveis[i].placa) % 2 == 0) {
      printf("Modelo: %sCor: %s\n", automoveis[i].modelo, automoveis[i].cor);
    }
  }
}

void trocarProprietario(Automovel *automoveis, int quantidade) {
  char chassi[100];
  int encontrado = 0;

  printf("Digite o número do chassi: ");
  fgets(chassi, sizeof(chassi), stdin);

  for (int i = 0; i < quantidade; i++) {
    if (strcmp(automoveis[i].chassi, chassi) == 0 &&
        strchr(automoveis[i].placa, '0') == NULL) {
      printf("Digite o novo nome do dono para o veículo com chassi %s: ",
             chassi);
      fgets(automoveis[i].dono, sizeof(automoveis[i].dono), stdin);
      encontrado = 1;
      break;
    }
  }

  if (!encontrado) {
    printf(
        "Veículo com chassi %s não encontrado ou possui dígito zero na placa.\n",
        chassi);
  }
}

void listarModeloCorVogalSomaPar(Automovel *automoveis, int quantidade) {
  printf("\nModelo e cor dos veículos com placas que têm segunda letra vogal e "
         "soma dos valores numéricos é par:\n");

  for (int i = 0; i < quantidade; i++) {
    if (strchr("aeiouAEIOU", automoveis[i].placa[1]) != NULL &&
        calcularSomaDigitos(automoveis[i].placa) % 2 == 0) {
      printf("Modelo: %sCor: %s\n", automoveis[i].modelo, automoveis[i].cor);
    }
  }
}