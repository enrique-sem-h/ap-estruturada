/*1. Fazer um programa em "C" que solicita o total gasto pelo cliente de uma loja, imprime as opções de pagamento, solicita a opção
desejada e imprime o valor total das prestações (se houverem).

1) Opção: a vista com 10% de desconto

2) Opção: em duas vezes (preço da etiqueta)

3) Opção: de 3 até 10 vezes com 3% de juros ao mês (somente para compras acima de R$ 100,00).

OBS: fazer uma função que imprime as opções solicita a opção desejada e retorna a opção escolhida. No programa principal, testar a opção
 escolhida e ativar a função correspondente (uma função para cada opção) */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// variable declarations
float valor;
int opt;

// function definition - print and return
void print()
{
    int opt;

    printf("\tComo deseja realizar o pagamento?\n1. a vista com 10%% de desconto\n2. em duas vezes (preço da etiqueta)\n3. de 3 até 10 vezes com 3%% de juros ao mês (somente para compras acima de R$ 100,00).");
    // scanf("%d", &opt);

    // return opt;
}

// calling functions - operations
float op1(float valor);
float op2(float valor);
void op3(float valor);

// defining main
int main()
{
    char repeat = 'r';

        while (repeat == 'r')
    {
        system("clear");
        printf("Digite o valor da compra: R$");
        scanf("%f", &valor);

        print();
        scanf("%d", &opt);

        switch (opt)
        {
        case 1:
            system("clear");
            printf("\tResumo:\nValor da compra: R$%.2f\nA vista com 10%% de desconto: R$%.2f", valor, op1(valor));
            printf("\nDigite q para sair ou r para reiniciar o programa");
            scanf("%c", &repeat);
            break;
        case 2:
            system("clear");
            printf("\tResumo:\nValor da compra: R$%.2f\nem duas vezes (preço da etiqueta): 2x R$%.2f", valor, op2(valor));
            printf("\nDigite q para sair ou r para reiniciar o programa");
            scanf("%c", &repeat);
            break;
        case 3:
            system("clear");
            printf("\tResumo:\nValor da compra: R$%.2f\n", valor);
            op3(valor);
            printf("\nDigite q para sair ou r para reiniciar o programa");
            scanf("%c", &repeat);
            break;
        default:
            printf("Erro");
            printf("\nDigite q para sair ou r para reiniciar o programa");
            scanf("%c", &repeat);
            break;
        }
    }
}   

    float op1(float valor){
        valor = valor - (valor * 0.1);
        return valor;
    }
    float op2(float valor){
        valor = valor / 2;
        return valor;
    }
    void op3(float valor){
        int i;
        if (valor > 100){

            printf("\tParcelas:\n");
            printf("1x - R$%.2f\n", valor);
            
            for (i = 2; i <= 10; i++)
            {
                valor = valor + (valor * 0.03);
                printf("%dx - R$%.2f\n", i, valor);
            }
        }else
            printf("Erro, valor menor que R$ 100");
    }
