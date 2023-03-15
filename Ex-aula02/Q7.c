/*O custo de um carro novo ao consumidor é a soma do custo de fábrica com a porcentagem do distribuidor e dos 
impostos (aplicados ao custo de fábrica). Supondo que o percentual do distribuidor seja de 28% e os impostos de 45%, 
escrever um algoritmo para ler o custo de fábrica de um carro, calcular e escrever o custo final ao consumidor. */
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define PORDIST 0.28
#define IMP 0.45

int main(){
    setlocale(LC_ALL, "Portuguese");
    float cusFab, cusFin;

    printf("Insira o custo de fábrica: R$");
    scanf("%f", &cusFab);

    system("clear");

    cusFin = cusFab + (cusFab * PORDIST) + (cusFab * IMP);

    printf("Custo de fábrica: R$%.2f\n",cusFab);
    printf("Porcentagem do distribuidor: %.2f%%\n", PORDIST * 100);
    printf("Impostos: %.2f%%\n", IMP * 100);
    printf("Custo Final: R$%.2f", cusFin);







}