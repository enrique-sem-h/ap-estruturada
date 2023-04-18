// chamada bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// declaracao constantes
#define CACHORRO 10.10
#define BAURU 8.3
#define BAURU2 8.5
#define HAMBURGER 12.5
#define CHEESE 13.25

// funcao para apresentar menu
void menu()
{
    printf("\tCardápio:\n");
    printf("100 - Cachorro Quente - R$10,10:\n");
    printf("101 - Bauru Simples - R$8,30:\n");
    printf("102 - Bauru c/ ovo - R$8,50:\n");
    printf("103 - Hamburger - R$12,50:\n");
    printf("104 - Cheeseburger - R$13,25:\n");
}

// chamada de função
float valorCompra(int codigo, int quant);

// declaracao funcao para limpar a tela sem tirar o menu
void limpar(){
    system("clear");
    menu();
}

// declaracao da main
main()
{
    setlocale(LC_ALL, "Portuguese"); // definir idioma
    limpar(); // limpa a tela e mostra o cardapio
    int codigo, quant; // definicao de variaveis
    //float valor; // opcional

    printf("Digite o código do item: "); // prompt
    scanf("%d", &codigo); // armazena codigo
    limpar(); // limpa sem tirar o cardapio

    printf("Digite a quantidade: "); // prompt
    scanf("%d", &quant); // armazena a quantidade

    limpar();

    if(codigo >= 100 && codigo <= 104){ // impede que o resumo rode se houver um erro
    printf("\tResumo:\nItem: %d\nQuantidade: %d\nValor total: R$%.2f", codigo, quant, valorCompra(codigo, quant)); // resumo
    }
}

// funcao que define o valor total da compra
float valorCompra(int codigo, int quant)
{
    float valor; // definicao de variavel
    switch (codigo)
    {
    case 100: // cachorro quente
    valor = quant * CACHORRO;
        break;
    case 101: // bauru simples
    valor = quant * BAURU;
        break;
    case 102: // bauru com ovo
    valor = quant * BAURU2;
        break;
    case 103: // hamburger
    valor = quant * HAMBURGER;
        break;
    case 104: // cheeseburger
    valor = quant * CHEESE;
        break;
    default:
    printf("Erro");
    return 0;
    }
    return valor; // retorna a variavel
}