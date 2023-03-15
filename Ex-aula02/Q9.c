/*Faça um algoritmo que leia três notas de um aluno, calcule e escreva a média final deste aluno. 
Considerar que a média é ponderada e que o peso das notas é 2, 3 e 5. Fórmula para o cálculo da média final é: */
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int x;
    float notas[3], media;

    for (x = 0; x <= 2; x++){
        printf("Insira a %dª nota: ", x + 1);
        scanf("%f", &notas[x]);
        system("clear");
    }

    media = ((notas[0] * 2) + (notas[1] * 3) + (notas[2] * 5)) / 10;

    printf("A média final desse aluno é: %.2f", media);

}