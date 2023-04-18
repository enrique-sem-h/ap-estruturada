/*Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do produto de A e B pelo produto de C e D segundo
 a fórmula: DIFERENCA = (A * B - C * D). Apresente o resultado da seguinte forma:
DIFERENCA = (“valor de A” * “valor de B” - ““valor de C” * ““valor de D”) DIFERENCA = (“valor de DIFERENCA”)*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float a, b, c, d, dif;

    printf("digite o valor de A: ");
    scanf("%f", &a);

    printf("digite o valor de B: ");
    scanf("%f", &b);

    printf("digite o valor de C: ");
    scanf("%f", &c);

    printf("digite o valor de D: ");
    scanf("%f", &d);

    dif = (a * b) - (c * d);


    printf("Diferenca = (%.2f * %.2f - %.2f * %.2f)\nDiferenca = %.2f", a, b, c, d, dif);
}