/*Criar um algoritmo que informe a quantidade total de calorias de uma refeição
 a partir do usuário que deverá informar o prato, a sobremesa e a bebida (veja a tabela a seguir). */
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>


int calPrato(int codPrato)
{
    int calPrato;
    switch (codPrato)
    {
    case 1:
        printf("Voce escolheu o prato: Vegetariano\n");
        calPrato = 180;
        break;
    case 2:
        printf("Voce escolheu o prato: Peixe\n");
        calPrato = 230;
        break;
    case 3:
        printf("Voce escolheu o prato: Frango\n");
        calPrato = 250;
        break;
    case 4:
        printf("Voce escolheu o prato: Carne\n");
        calPrato = 350;
        break;
    default:
        printf("ERRO\n");
        return 0;
    }
    return calPrato;
}

int calSob(int codSob){
    int calSob;
    switch(codSob){
        case 1:
        printf("Você escolheu a sobremesa: Abacaxi\n");
        calSob = 75;
        break;
        case 2:
        printf("Você escolheu a sobremesa: Sorvete Diet\n");
        calSob = 110;
        break;
        case 3:
        printf("Você escolheu a sobremesa: Mouse Diet\n");
        calSob = 170;
        break;
        case 4:
        printf("Você escolheu a sobremesa: Mouse Chocolate\n");
        calSob = 200;
        break;
        default:
        printf("ERRO\n");
        return 0;
    }
    return calSob;
}


int calBeb(int codBeb)
{
    int calBeb;
    switch (codBeb)
    {
    case 1:
        printf("Voce escolheu a bebida: Chá\n");
        calBeb = 20;
        break;
    case 2:
        printf("Voce escolheu a bebida: Suco Laranja\n");
        calBeb = 70;
        break;
    case 3:
        printf("Voce escolheu a bebida: Suco melao\n");
        calBeb = 100;
        break;
    case 4:
        printf("Voce escolheu a bebida: Refri Diet\n");
        calBeb = 65;
        break;
    default:
        printf("ERRO\n");
        return 0;
    }
    return calBeb;
}

int main()
{
setlocale(LC_ALL, "Portuguese");
    int codPrato, codSob, codBeb, calTotal = 0;
    
    printf("Escolha o prato:\n1. Veg\n2. Peixe\n3. Frango\n4. Carne\n");
    scanf("%d", &codPrato);
    printf("Escolha a sobremesa:\n1. Abacaxi\n2. Sorvete Diet\n3. Mouse Diet\n4. Mouse Chocolate\n");
    scanf("%d", &codSob);
    printf("Escolha a bebida:\n1. Chá\n2. Suco laranja\n3. Suco melão\n4. Refri Diet\n");
    scanf("%d", &codBeb);

    system("clear");

    calTotal += calPrato(codPrato);
    calTotal += calSob(codSob);
    calTotal += calBeb(codBeb);

    printf("%d", calTotal);
}