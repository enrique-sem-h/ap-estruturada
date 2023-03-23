/*Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
 o número digitado ao quadrado e raiz quadrada do número digitado.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float num, numQuad, numRaiz;

    printf("Digite o número: ");
    scanf("%f", &num);

    system("clear");

    if(num > 0){
        numQuad = pow(num,2);
        numRaiz = sqrt(num);
        printf("Número selecionado: %.2f\nQuadrado: %.2f\nRaiz Quadrada: %.2f", num, numQuad, numRaiz);
    }else
        printf("Erro, o número não é positivo!");



}