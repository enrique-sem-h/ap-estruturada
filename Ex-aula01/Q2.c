/*Escreva um programa que pergunte qual o raio de um círculo e imprima a sua área. Faça um programa que calcule 
a quantidade necessária de latas de tinta para pintar uma parede. O programa pergunta as medidas de largura e 
altura da parede em metros e escreve quantas latas de tinta serão necessárias para pintá-la. Considere que o consumo 
de tinta é de 300 ml por metro quadrado e a quantidade de tinta por lata é de 2 litros.*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define PI 3.14

int main(){
    setlocale(LC_ALL, "Portuguese");
    int programa;
    float raio, altura, largura, parede, latas;

    printf("Selecione o programa desejado:\n1. Raio do círculo\n2. Área da parede\n");
    scanf("%d", &programa);

    system("clear");

    switch (programa)
    {
    case 1:
        printf("digite o valor do raio: ");
        scanf("%f", &raio);

        system("clear");

        printf("A area de um círculo de raio %.2f é igual a %.2f", raio, PI * (raio * raio));
        
        break;
    case 2:
        printf("digite a altura da parede (em m): ");
        scanf("%f", &altura);

        printf("digite a largura da parede (em m): ");
        scanf("%f", &largura);

        parede = largura * altura;

        system("clear");

        latas = (parede * 0.3) / 2;

        printf("Área da parede: %.2f\n", parede);
        printf("Será(ão) necessária(s) %.2f latas de tinta para pintar essa parede\n", latas);
        
        
        break;
    default:
        printf("Erro, por favor reinicie o programa\n");
        break;
    }


}