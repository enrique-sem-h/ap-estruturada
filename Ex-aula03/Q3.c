/*Usando o comando switch, faça um algoritmo que leia o número de DDD e
informe a qual cidade pertence, considerando só os seguintes valores: */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int ddd;

    printf("Informe o DDD: ");
    scanf("%d", &ddd);

    switch (ddd)
    {
    case 11:
        printf("Estado: São Paulo\n");
        break;
    case 19:
        printf("Estado: Campinas");
        break;
    case 21:
        printf("Estado: Rio de Janeiro\n");
        break;
    case 27:
        printf("Estado: Vitória\n");
        break;
    case 31:
        printf("Estado: Belo Horizonte\n");
        break;
    case 32:
        printf("Estado: Juiz de Fora\n");
        break;
    case 61:
        printf("Estado: Brasília\n");
        break;
    case 71:
        printf("Estado: Salvador\n");
        break;
    default:
        printf("Estado sem identificação!\n");
    }
}