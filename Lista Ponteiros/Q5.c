/* 2. Elaborar um programa que leia dois valores inteiros (A e B). Em seguida faça uma função que retorne a soma do dobro dos dois números lidos. A função dever  a armazenar o dobro de A na própria variável A e o dobro de B na própria variável B.*/
#include <stdio.h>

int somaDobro(int *a, int *b) {
    int soma = (*a * 2) + (*b * 2);
    *a = *a * 2;
    *b = *b * 2;
    return soma;
}

int main() {
    int valor1, valor2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    int resultado = somaDobro(&valor1, &valor2);

    printf("Soma do dobro dos valores: %d\n", resultado);
    printf("Novo valor de A: %d\n", valor1);
    printf("Novo valor de B: %d\n", valor2);

    return 0;
}
