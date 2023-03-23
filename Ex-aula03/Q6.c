/*Escreva um algoritmo que leia um número e informe se ele é divisível por 5, 
por 3 ou por 2 ou se não é divisível por nenhum deles. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num;

    printf("Digite o número a ser lido: ");
    scanf("%d", &num);

    system("clear");

    printf("%d é divisível por: ", num);
    if((int)num % 5 == 0 && (int)num % 3 == 0 && (int)num % 2 == 0){
        printf("5, 3 e 2");
    }else if((int)num % 5 == 0 && (int)num % 3 == 0)
        printf("5 e 3");
    else if((int)num % 5 == 0 && (int)num % 2 == 0)
        printf("5 e 2");
    else if((int)num % 3 == 0 && (int)num % 2 == 0)
        printf("3 e 2");
    else if((int)num % 5 == 0)
        printf("5");
    else if((int)num % 3 == 0)
        printf("3");
    else if((int)num % 2 == 0)
        printf("2");
    else   
        printf("%d não é divisível por 5, 3 ou 2\n");



}