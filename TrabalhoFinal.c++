/*Implementar um sistema de controle de estoque com as funcionalidades de cadastrar produtos, consultar produtos, gerar relatório de produtos e remover produtos do estoque. Funções que deverão estar presentes no código:
Função que inicializa uma lista vazia; (0,5 ponto)
Função que adiciona um novo produto à lista de estoque. Ela solicita ao usuário informações como código, descrição, quantidade e valor do produto. (0,5 ponto)
Função que percorre a lista de estoque e imprime um relatório com as informações de cada produto, incluindo código, descrição, quantidade e valor. (1,0 ponto)
Função que permite ao usuário pesquisar um produto pelo código. (1,0 ponto)
Função que permite ao usuário remover um produto do estoque. Ela solicita o código do produto a ser removido e busca na lista o produto correspondente. Se encontrar o produto, o remove da lista. Caso contrário, exibe uma mensagem informando que o produto não está cadastrado. (1,0 ponto)
O sistema deverá exibir um menu com as opções disponíveis e realizar as chamadas correspondentes às funções acima, de acordo com a escolha do usuário. O loop deverá continuar até que o usuário escolha sair do programa.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int codigo;
    char descricao[100];
    int quantidade;
    float valor;
} Produto;

void inicializarLista(Produto *estoque, int *quantidadeProdutos) {
    *quantidadeProdutos = 0;
}

void adicionarProduto(Produto *estoque, int *quantidadeProdutos) {
    printf("Informe o código do produto: ");
    scanf("%d", &estoque[*quantidadeProdutos].codigo);

    printf("Informe a descrição do produto: ");
    scanf(" %[^\n]s", estoque[*quantidadeProdutos].descricao);

    printf("Informe a quantidade do produto: ");
    scanf("%d", &estoque[*quantidadeProdutos].quantidade);

    printf("Informe o valor do produto: ");
    scanf("%f", &estoque[*quantidadeProdutos].valor);

    (*quantidadeProdutos)++;
}

void imprimirRelatorio(Produto *estoque, int quantidadeProdutos) {
    printf("Relatório de Produtos:\n");
    printf("Código\tDescrição\tQuantidade\tValor\n");
    for (int i = 0; i < quantidadeProdutos; i++) {
        printf("%d\t%s\t%d\t\t%.2f\n", estoque[i].codigo, estoque[i].descricao, estoque[i].quantidade, estoque[i].valor);
    }
}

void pesquisarProduto(Produto *estoque, int quantidadeProdutos) {
    int codigo;
    printf("Informe o código do produto: ");
    scanf("%d", &codigo);

    for (int i = 0; i < quantidadeProdutos; i++) {
        if (estoque[i].codigo == codigo) {
            printf("Produto encontrado:\n");
            printf("Código\tDescrição\tQuantidade\tValor\n");
            printf("%d\t%s\t%d\t\t%.2f\n", estoque[i].codigo, estoque[i].descricao, estoque[i].quantidade, estoque[i].valor);
            return;
        }
    }

    printf("Produto não encontrado.\n");
}

void removerProduto(Produto *estoque, int *quantidadeProdutos) {
    int codigo;
    printf("Informe o código do produto a ser removido: ");
    scanf("%d", &codigo);

    int i;
    for (i = 0; i < *quantidadeProdutos; i++) {
        if (estoque[i].codigo == codigo) {
            break;
        }
    }

    if (i == *quantidadeProdutos) {
        printf("Produto não cadastrado.\n");
        return;
    }

    for (int j = i; j < *quantidadeProdutos - 1; j++) {
        estoque[j] = estoque[j + 1];
    }

    (*quantidadeProdutos)--;
    printf("Produto removido com sucesso.\n");
}

void exibirMenu() {
    printf("\n");
    printf("======= Menu =======\n");
    printf("1 - Adicionar Produto\n");
    printf("2 - Imprimir Relatório\n");
    printf("3 - Pesquisar Produto\n");
    printf("4 - Remover Produto\n");
    printf("0 - Sair\n");
    printf("====================\n");
    printf("Digite a opção desejada: ");
}

int main() {
    Produto estoque[100];
    int quantidadeProdutos = 0;
    int opcao;

    inicializarLista(estoque, &quantidadeProdutos);

    do {
        exibirMenu();
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionarProduto(estoque, &quantidadeProdutos);
                break;
            case 2:
                imprimirRelatorio(estoque, quantidadeProdutos);
                break;
            case 3:
                pesquisarProduto(estoque, quantidadeProdutos);
                break;
            case 4:
                removerProduto(estoque, &quantidadeProdutos);
                break;
            case 0:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida.\n");
                break;
        }
    } while (opcao != 0);
}
