/*Implementar um sistema de controle de estoque com as funcionalidades de cadastrar produtos, consultar produtos, gerar relatório de produtos e remover produtos do estoque. Funções que deverão estar presentes no código:
Função que inicializa uma lista vazia; (0,5 ponto)
Função que adiciona um novo produto à lista de estoque. Ela solicita ao usuário informações como código, descrição, quantidade e valor do produto. (0,5 ponto)
Função que percorre a lista de estoque e imprime um relatório com as informações de cada produto, incluindo código, descrição, quantidade e valor. (1,0 ponto)
Função que permite ao usuário pesquisar um produto pelo código. (1,0 ponto)
Função que permite ao usuário remover um produto do estoque. Ela solicita o código do produto a ser removido e busca na lista o produto correspondente. Se encontrar o produto, o remove da lista. Caso contrário, exibe uma mensagem informando que o produto não está cadastrado. (1,0 ponto)
O sistema deverá exibir um menu com as opções disponíveis e realizar as chamadas correspondentes às funções acima, de acordo com a escolha do usuário. O loop deverá continuar até que o usuário escolha sair do programa.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct estoque
{
    int codProduto;
    float preco;
    estoque* prox;
}Estoque;

Estoque* novaLista(void){
    return NULL;
}

Estoque* insert(int codProduto, float preco, Estoque* estoque){
    Estoque* novo = (Estoque*)malloc(sizeof(Estoque));
    novo->codProduto = codProduto;
    novo->preco = preco;
    novo->prox = estoque;
    return novo;
}

void print(Estoque* estoque){
    Estoque* p = estoque;

    while(p != NULL){
        printf("Cod: %d\nPreco: R$%.2f\n\n", p->codProduto, p->preco);
        p = p->prox;
    }
}

int main(){
    Estoque* estoque;

    estoque = novaLista();
    estoque = insert(1, 10, estoque);

    print(estoque);
}