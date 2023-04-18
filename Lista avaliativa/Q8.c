/*Elabore um programa que faça a leitura de vários números inteiros até que se digite um número negativo. O programa tem de retornar o maior e o menor número lido*/
#include <stdio.h>

int main() {
    int num, maior, menor;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    maior = num;
    menor = num;

    while (num >= 0) {
        if (num > maior) {
            maior = num;
        }
        if (num < menor) {
            menor = num;
        }
        printf("Digite outro numero inteiro: ");
        scanf("%d", &num);
    }

    printf("Maior numero lido: %d\n", maior);
    printf("Menor numero lido: %d\n", menor);

    return 0;
}
