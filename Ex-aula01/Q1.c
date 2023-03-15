/*Faça um programa em que o usuário digite o custo de uma determinada mercadoria, em seguida, adiciona-se ao
 custo o valor do frete e despesas eventuais (também solicitadas pelo teclado). Para concluir, o programa pergunta 
 qual o valor de venda e indica a percentagem de lucro da mercadoria*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float custo, frete, despesas, venda,lucro;

    printf("Digite o valor do custo: \n");
    scanf("%f", &custo);

    printf("Digite o valor do frete: \n");
    scanf("%f", &frete);

    printf("Digite o valor de eventuais despesas: \n");
    scanf("%f", &despesas);

    printf("Valor de venda: ");
    scanf("%f", &venda);

    system("clear");

    lucro = venda - (custo + frete + despesas);

    printf("Valor de custo: %.2f\n", custo);
    printf("Valor do frete: %.2f\n", frete);
    printf("Eventuais despesas: %.2f\n", despesas);
    printf("Valor de venda: %.2f\n", venda);
    printf("Margem de lucro: %.2f%%\n", lucro / (custo + frete + despesas) * 100);

}