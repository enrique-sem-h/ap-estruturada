/*Escrever um algoritmo que leia o código do item pedido, a quantidade e calcule o
 valor a ser pago por aquele lanche. Considere que a cada execução somente será calculado um item.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int cod, quant;
    float valor;

    printf("Digite o código do item: ");
    scanf("%d", &cod);

    if (cod == 100){
        printf("Digite a quantidade de 'Cachorro Quente': ");
        scanf("%d", &quant);

        system("clear");

        valor = quant * 10.10;

        printf("\tResumo\nCachorro Quente = R$10,10\nQuantidade: %d\nTotal: R$%.2f", quant, valor);
    }else if (cod == 101){
        printf("Digite a quantidade de 'Bauru Simples': ");
        scanf("%d", &quant);

        system("clear");

        valor = quant * 8.30;

        printf("\tResumo\nBauru Simples= R$8.30\nQuantidade: %d\nTotal: R$%.2f", quant, valor);
    }else if (cod == 102){
        printf("Digite a quantidade de 'Bauru c/ ovo': ");
        scanf("%d", &quant);

        system("clear");

        valor = quant * 8.50;

        printf("\tResumo\nBauru c/ ovo = R$8.50\nQuantidade: %d\nTotal: R$%.2f", quant, valor);
    }else if (cod == 103){
        printf("Digite a quantidade de 'Hambúrguer': ");
        scanf("%d", &quant);

        system("clear");

        valor = quant * 12.50;

        printf("\tResumo\nHambúrguer = R$12.50\nQuantidade: %d\nTotal: R$%.2f", quant, valor);
    }else if (cod == 104){
        printf("Digite a quantidade de 'Cheeseburguer': ");
        scanf("%d", &quant);

        system("clear");

        valor = quant * 13.25;

        printf("\tResumo\nCheeseburguer = R$13.25\nQuantidade: %d\nTotal: R$%.2f", quant, valor);
    }else  
        printf("Erro, item não encontrado\n");
}