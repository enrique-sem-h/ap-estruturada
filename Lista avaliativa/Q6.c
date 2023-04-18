/* Faça um programa que exiba a soma de todos os números naturais abaixo de 1.000 que são múltiplos de 3 ou 5.*/
#include <stdio.h>

int main() {
    int soma = 0;
    int i;

    for (i = 1; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            soma += i;
        }
    }

    printf("A soma dos multiplos de 3 ou 5 abaixo de 1000 e: %d\n", soma);

}
