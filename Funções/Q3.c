/*Escreva uma funções que calculem a conversão entre diferentes escalas de temperatura. Considere as fórmulas de conversão abaixo:
Solicite o usuário para escolher a função desejada e apresente o resultado a partir da chamada da função escolhida.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// function call
float cF(float c);
float fC(float f);
float cK(float c);
float kC(float k);
float cR(float c);
float rC(float r);
float kR(float k);
float rK(float r);

// start of main function
int main()
{
    // variable declaration
    int opt;
    float varConv;

    // user prompt
    printf("Escolha a conversão desejada:\n1. Celsius -> Fahrenheit \n2. Fahrenheit -> Celsius \n3. Celsius -> Kelvin \n4. Kelvin -> Celsius \n5. Celsius -> Réaumur\n6. Réaumur -> Celsius \n7. Kelvin -> Rankine \n8. Rankine -> Kelvin\n");
    scanf("%d", &opt);

    // option switch - standard structure of code
    switch (opt)
    {
    case 1:
        printf("Digite a temperatura em: Celsius\n");
        scanf("%f", &varConv);
        system("clear");
        printf("Temperatura em Fahrenheit - %.2f", cF(varConv));
        break;
    case 2:
        printf("Digite a temperatura em: Fahrenheit\n");
        scanf("%f", &varConv);
        system("clear");
        printf("Temperatura em Celsius - %.2f", fC(varConv));
        break;
    case 3:
        printf("Digite a temperatura em: Celsius\n");
        scanf("%f", &varConv);
        system("clear");
        printf("Temperatura em Kelvin - %.2f", cK(varConv));
        break;
    case 4:
        printf("Digite a temperatura em: Kelvin\n");
        scanf("%f", &varConv);
        system("clear");
        printf("Temperatura em Celsius - %.2f", kC(varConv));
        break;
    case 5:
        printf("Digite a temperatura em: Celsius\n");
        scanf("%f", &varConv);
        system("clear");
        printf("Temperatura em Réaumur - %.2f", cR(varConv));
        break;
    case 6:
        printf("Digite a temperatura em: Réaumur\n");
        scanf("%f", &varConv);
        system("clear");
        printf("Temperatura em Celsius - %.2f", rC(varConv));
        break;
    case 7:
        printf("Digite a temperatura em: Kelvin\n");
        scanf("%f", &varConv);
        system("clear");
        printf("Temperatura em Rankine - %.2f", kR(varConv));
        break;
    case 8:
        printf("Digite a temperatura em: Rankine\n");
        scanf("%f", &varConv);
        system("clear");
        printf("Temperatura em Kelvin - %.2f", rK(varConv));
        break;

    default:
        printf("Opção Inválida!\n");
        break;
    }
}
// defining functions - each one is a diferent temperature conversion
float cF(float ce){
    float f;

    f = (9 * (ce / 5)) + 32;
    return f;
}

float fC(float fa){
float c;

c = (fa - 32) * (5 / 9);
return c;
}

float cK(float c){
float k;

k = c + 273.15;
return k;
}

float kC(float k){
    float c;
    
    c = k - 273.15;
    return c;
}

float cR(float c){
    float r;

    r = c * (4 / 5);
    return r;
}

float rC(float r){
    float c;

    c = r * (5 / 4);
    return c;
}

float kR(float k){
    float r;

    r = k * 1.8;
    return r;
}

float rK(float r){
    float k;

    k = r / 1.8;
    return k;
}