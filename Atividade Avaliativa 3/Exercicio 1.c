#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int codigo;
    char descricao[50];
    int quantidade;
    float valorProduto;
} Produto;

void cadastrarProduto(Produto **listaProdutos, int *quantidadeProdutos);
void consultarProduto(Produto *listaProdutos, int quantidadeProdutos, int codigo);
void gerarRelatorio(Produto *listaProdutos, int quantidadeProdutos);
void excluirProduto(Produto **listaProdutos, int *quantidadeProdutos, int codigo);

int main() {
    int opcao, codigoProduto, quantidadeProdutos = 0;
    Produto *listaProdutos = NULL;

    do {
        printf("1 - Cadastrar Produto\n2 - Consultar Produto\n3 - Gerar Relatório\n"
               "4 - Remover Produto\n9 - Sair\nDigite uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: cadastrarProduto(&listaProdutos, &quantidadeProdutos); break;
            case 2:
                printf("Digite o código do produto para consulta: ");
                scanf("%d", &codigoProduto);
                consultarProduto(listaProdutos, quantidadeProdutos, codigoProduto);
                break;
            case 3: gerarRelatorio(listaProdutos, quantidadeProdutos); break;
            case 4:
                printf("Digite o código do produto para exclusão: ");
                scanf("%d", &codigoProduto);
                excluirProduto(&listaProdutos, &quantidadeProdutos, codigoProduto);
                break;
            default: printf("Opção inválida.\n"); break;
        }

    } while (opcao != 9);

    free(listaProdutos);

    return 0;
}

void cadastrarProduto(Produto **listaProdutos, int *quantidadeProdutos) {
    *listaProdutos = realloc(*listaProdutos, (*quantidadeProdutos + 1) * sizeof(Produto));
    Produto *produto = *listaProdutos + *quantidadeProdutos;

    printf("Digite o código, descrição, quantidade e valor do produto: ");
    scanf("%d %[^\n] %d %f", &produto->codigo, produto->descricao, &produto->quantidade, &produto->valorProduto);

    (*quantidadeProdutos)++;
}

void consultarProduto(Produto *listaProdutos, int quantidadeProdutos, int codigo) {
    for (int i = 0; i < quantidadeProdutos; i++) {
        if (listaProdutos[i].codigo == codigo) {
            printf("Código: %d\nDescrição: %s\nQuantidade: %d\nValor: %.2f\n", 
                listaProdutos[i].codigo, listaProdutos[i].descricao, 
                listaProdutos[i].quantidade, listaProdutos[i].valorProduto);
            return;
        }
    }
    printf("Produto não encontrado.\n");
}

void gerarRelatorio(Produto *listaProdutos, int quantidadeProdutos) {
    if (quantidadeProdutos == 0) {
        printf("Nenhum produto cadastrado.\n");
        return;
    }

    printf("Relatório dos Produtos:\n");

    for (int i = 0; i < quantidadeProdutos; i++) {
        printf("Código: %d\nDescrição: %s\nQuantidade: %d\nValor: %.2f\n"
               "####################\n",
               listaProdutos[i].codigo, listaProdutos[i].descricao,
               listaProdutos[i].quantidade, listaProdutos[i].valorProduto);
    }
}

void excluirProduto(Produto **listaProdutos, int *quantidadeProdutos, int codigo) {
    for (int i = 0; i < *quantidadeProdutos; i++) {
        if ((*listaProdutos)[i].codigo == codigo) {
            for (int j = i; j < *quantidadeProdutos - 1; j++)
                (*listaProdutos)[j] = (*listaProdutos)[j + 1];

            (*quantidadeProdutos)--;
            if (*quantidadeProdutos <= 0.25 * i)
                *listaProdutos = realloc(*listaProdutos, *quantidadeProdutos * sizeof(Produto));

            printf("Produto excluído\n");
            return;
        }
    }

    printf("Nenhum produto com esse código cadastrado.\n");
}
