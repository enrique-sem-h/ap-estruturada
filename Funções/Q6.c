/*Fazer um programa  que lê o preço de um produto e inflaciona esse preço em 10% se ele for menor que 100 e em 20% se ele for maior ou igual a 100.
Utilize funções para construir o algoritmo.*/
#include <stdio.h>
#include <stdlib.h>

float infla10(float preco);
float infla20(float preco);

int main(){
    float preco;

    printf("Digite o preco do produto: ");
    scanf("%f", &preco);

    (preco < 100) ? printf("Valor final acrescido de 10%%: %.2f", infla10(preco)) : printf("Valor final acrescido de 20%%: %.2f", infla20(preco));
}

float infla10(float preco){
    preco = preco + (preco * 0.10);
    return preco;
}
float infla20(float preco){
    preco = preco + (preco * 0.20);
    return preco;
}