/*Fazer um programa que use funções para imprimir a tabela ASCII (código decimal, código hexa, caracter) para os códigos de 0 a 127. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ascii(){
    int i;

    printf("Tabela Ascii\n");
    printf("Int, Hexadecimal, C\n");

    for(i = 1; i <= 127; i++){
        printf("%d, %X, %c\n", i, i, i);
    }

}

int main(){
    ascii();

}