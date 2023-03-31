/*5. Faça um programa que calcule e mostre a soma dos 50 primeiros números pares. */
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int soma = 0, x;

    for(x = 0; x <= 50; x+=2){
        soma = soma + x;
    }
        printf("soma dos 50 primeiros pares: %d\n", soma);


}