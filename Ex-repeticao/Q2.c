/*2. Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem 
decrescente. */
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num, x;

    printf("Digite um número negativo a ser contado: ");
    scanf("%d", &num);

    for(x = num; x <= 0; x++){
        printf("%d\n", x);
    }


}