/*Escreva um algoritmo para ler as dimensões de um retângulo (base e altura), 
calcular e escrever a área do retângulo. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float base, altura;

    printf("Insira as dimensões\nBase: ");
    scanf("%f", &base);
    printf("Altura: ");
    scanf("%f", &altura);

    system("clear");

    printf("Base: %.2f\n", base);
    printf("Altura: %.2f\n", altura);
    printf("\nÁrea: %.2f", base * altura);



}