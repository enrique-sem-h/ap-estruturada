/*Escreva um algoritmo para ler o salário mensal atual de um 
funcionário e o percentual de reajuste. Calcular e escrever o valor do novo salário. */
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float salario, reajuste;

    printf("Digite o valor do salário: ");
    scanf("%f", &salario);

    printf("Digite o valor de reajuste em %%: ");
    scanf("%f", &reajuste);
    system("clear");

    printf("O novo salário será de: %.2f", (salario * reajuste)/100);


}