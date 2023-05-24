/*1. Faça um programa que leia dois valores inteiros e chame uma função que receba estes  2 valores de entrada e retorne o maior valor na primeira variável e o menor valor na  segunda variável. Escreva o conteúdo das 2 variáveis na tela. */
#include <stdio.h>

void trocarValores(int *a, int *b) {
    if (*a > *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int valor1, valor2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    trocarValores(&valor1, &valor2);

    printf("Valor 1: %d\n", valor1);
    printf("Valor 2: %d\n", valor2);

    return 0;
}
