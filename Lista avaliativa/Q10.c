/*Faça um programa que leia 10 inteiros e imprima sua média.*/

#include <stdio.h>

int main() {
    int i, num, soma = 0;

    printf("Digite 10 números inteiros:\n");

    for (i = 1; i <= 10; i++) {
        scanf("%d", &num);
        soma += num;
    }

    printf("Média: %.2f", (float) soma / 10);
}
