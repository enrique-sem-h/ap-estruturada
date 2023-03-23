#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    float alt, peso, imc;

    printf("Digite sua altura: ");
    scanf("%f", &alt);

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    system("clear");
    imc = peso/(alt * alt);

    printf("Altura: %.2fm\n", alt);
    printf("Peso: %.2fkg\n", peso);
    printf("IMC: %.2f\n", imc);

    if(imc < 16)
        printf("\nMagreza grave");
    else if(imc >= 16 && imc < 17)
        printf("\nMagreza moderada");
    else if(imc >= 17 && imc < 18.5)
        printf("\nMagreza leve");
    else if(imc >= 18.5 && imc < 25)
        printf("\nSaudável");
    else if(imc >= 25 && imc < 30)
        printf("\nSobrepeso");
    else if(imc >= 30 && imc < 35)
        printf("\nObesidade rau 1");
    else if(imc >= 35 && imc < 40)
        printf("\nObesidade grau 2");
    else if(imc >= 40)
        printf("\nObesidade grau 3");
    



}