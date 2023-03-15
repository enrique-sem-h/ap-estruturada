/*Faça um programa que calcule 
a quantidade necessária de latas de tinta para pintar uma parede. O programa pergunta as medidas de largura e 
altura da parede em metros e escreve quantas latas de tinta serão necessárias para pintá-la. Considere que o consumo 
de tinta é de 300 ml por metro quadrado e a quantidade de tinta por lata é de 2 litros.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float altura, largura, parede, latas;

    printf("digite a altura da parede (em m): ");
    scanf("%f", &altura);

    printf("digite a largura da parede (em m): ");
    scanf("%f", &largura);

    parede = largura * altura;

    system("clear");

    latas = (parede * 0.3) / 2;

    printf("Área da parede: %.2f\n", parede);
    printf("Será(ão) necessária(s) %.2f latas de tinta para pintar essa parede\n", latas);
        
}