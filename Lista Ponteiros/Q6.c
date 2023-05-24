/* 3. Crie um programa que contenha uma função que permita passar por parâmetro dois números inteiros A e B. A função deverá calcular a soma entre estes dois números e armazenar o resultado na variável A. Esta função não deverá possuir retorno, mas deverá modificar o valor do primeiro parâmetro. Imprima os valores de A e B na função principal.*/
#include <stdio.h>

void calcularSoma(int *a, int b) {
    *a = *a + b;
}

int main() {
    int valorA, valorB;

    printf("Digite o valor de A: ");
    scanf("%d", &valorA);

    printf("Digite o valor de B: ");
    scanf("%d", &valorB);

    calcularSoma(&valorA, valorB);

    printf("Valor de A: %d\n", valorA);
    printf("Valor de B: %d\n", valorB);

    return 0;
}
