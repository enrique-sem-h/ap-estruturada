/*Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses
 e dias e escreva a idade dessa pessoa expressa apenas em dias. Considerar 
 ano com 365 dias e mês com 30 dias. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int ano, mes, diaNasc, dias, diaHoje;

    printf("Quantos anos você tem?\n");
    scanf("%d", &ano);
    system("clear");

    printf("Quantos meses desde seu último aniversário?\n");
    scanf("%d", &mes);
    system("clear");

    printf("Qual o dia do seu nascimento?\n");
    scanf("%d", &diaNasc);
    system("clear");

    printf("Qual o dia de hoje?\n");
    scanf("%d", &diaHoje);

    system("clear");

    printf("Você tem %d dias de vida", (diaHoje - diaNasc) + (mes * 30) + (ano * 365));




}