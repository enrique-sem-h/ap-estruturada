/*Criar um algoritmo que informe a quantidade total de calorias de uma refeição
 a partir do usuário que deverá informar o prato, a sobremesa e a bebida (veja a tabela a seguir). */
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

char plate(int numePrato)
{
    //int cPrato;
    char nomePrato[20];

    switch (numePrato)
    {
    case 1:
        strcpy(nomePrato, "Vegetariano");
        //cPrato = 180;
        break;
    case 2:
        strcpy(nomePrato, "Peixe");
       // cPrato = 230;
        break;
    case 3:
        strcpy(nomePrato, "Frango");
       // cPrato = 250;
        break;
    case 4:
        strcpy(nomePrato, "Carne");
       // cPrato = 350;
        break;
    default:
        printf("Erro");
        break;
    }

    return nomePrato;
}


int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numPrato, numSobr, numBeb, caloria, calPrato, calSobr, calBeb;
    char prato[20], sobremesa[18], bebida[20];

    printf("Informe o número do prato:\n1. Vegetariano\n2. Peixe\n3. Frango\n4. Carne\n");
    scanf("%d", &numPrato);

    prato[20] = plate(numPrato);
    //calPrato = cPrato;
    printf("%s", prato);

    printf("Informe o número da sobremesa:\n1. Abacaxi\n2. Sorvete Diet\n3. Mousse Diet\n4. Mousse Chocolate\n");
    scanf("%d", &numSobr);

    switch (numSobr)
    {
    case 1:
        strcpy(sobremesa, "Abacaxi");
        calSobr = 75;
        break;
    case 2:
        strcpy(sobremesa, "Sorvete Diet");
        calSobr = 110;
        break;
    case 3:
        strcpy(sobremesa, "Mousse Diet");
        calSobr = 170;
        break;
    case 4:
        strcpy(sobremesa, "Mousse Chocolate");
        calSobr = 200;
        break;
    default:
        printf("ERRO!");
        break;
    }

    printf("Informe o número da bebida:\n1. Chá\n2. Suco Laranja\n3. Suco Melão\n4. Refrigerante Diet\n");
    scanf("%d", &numBeb);

    switch(numBeb){
        case 1:
        strcpy(bebida, "Chá");
        calBeb = 20;
        break;
        case 2:
        strcpy(bebida, "Suco Laranja");
        calBeb = 70;
        break;
        case 3:
        strcpy(bebida, "Suco Melão");
        calBeb = 100;
        break;
        case 4:
        strcpy(bebida, "Refrigerante Diet");
        calBeb = 65;
        break;
        default:
        printf("ERRO!");
        break;
    }

    caloria = calPrato + calSobr + calBeb;

    system("clear");

    printf("\tRefeição:\n");
    printf("Prato: %s - %d cal\n", prato, calPrato);
    printf("Sobremesa: %s - %d cal\n", sobremesa, calSobr);
    printf("Bebida: %s - %d cal\n", bebida, calBeb);
    printf("Calorias Totais: %d cal", caloria);
}