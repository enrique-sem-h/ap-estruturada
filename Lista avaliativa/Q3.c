/*Faça um programa que calcule e mostre a área da superfície e o volume de uma esfera sendo fornecido o valor de seu raio (R). A fórmula para calcular o volume é: (4/3) * pi * R3. A fórmula para calcular a área é: 4 * pi * R2. Considere (atribua) para pi o valor 3.14159. Use o conceito de constante Dica: Ao utilizar a fórmula, procure usar (4/3.0) ou (4.0/3), pois algumas linguagens (dentre elas o C++), assumem que o resultado da divisão entre dois inteiros é outro inteiro*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159

float area(float r);
float volume(float r);

int main(){
    float raio;


    system("clear");
    printf("Raio da esfera: ");
    scanf("%f", &raio);

    printf("Volume: %.2f\n", volume(raio));
    printf("Area: %.2f", area(raio));

}


float area(float r){
    float area = 4 * PI * pow(r, 2);

    return area;
}
float volume(float r){
    float vol = (4/3) * PI * pow(r,3);

    return vol;
}