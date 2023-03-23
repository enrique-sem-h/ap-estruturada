/*Faça um programa que mostre ao usuário um menu com quatro opções de operações matemáticas (as operações básicas, 
por exemplo). O usuário escolhe uma das opções, e o seu programa pede dois valores numéricos e realiza a operação, 
mostrando o resultado.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float valor[1];
    int opc, x;

    printf("Escolha uma opção:\n1. Adição\n2. Subtração\n3. Multiplicação\n4. Divisão\n");
    scanf("%d", &opc);

    switch (opc)
    {
    case 1:
        printf("Selecionado: Adição\n");

        for (x = 0; x <= 1; x++)
        {
            printf("Insira o %dº valor: ", x + 1);
            scanf("%f", &valor[x]);
        }
        system("clear");
        printf("Selecionado: Adição\n");

        printf("%.2f + %.2f = %.2f", valor[0], valor[1], valor[0] + valor[1]);
        
    
        break;
    case 2:
        printf("Selecionado: Subtração\n");

        for (x = 0; x <= 1; x++)
        {
            printf("Insira o %dº valor: ", x + 1);
            scanf("%f", &valor[x]);
        }
        system("clear");
        printf("Selecionado: Subtração\n");

        printf("%.2f - %.2f = %.2f", valor[0], valor[1], valor[0] - valor[1]);
        break;
    case 3:
        printf("Selecionado: Multiplicação\n");

        for (x = 0; x <= 1; x++)
        {
            printf("Insira o %dº valor: ", x + 1);
            scanf("%f", &valor[x]);
        }
        system("clear");
        printf("Selecionado: Multiplicação\n");

        printf("%.2f x %.2f = %.2f", valor[0], valor[1], valor[0] * valor[1]);
        break;

        break;
    case 4:
         printf("Selecionado: Divisão\n");

        for (x = 0; x <= 1; x++)
        {
            printf("Insira o %dº valor: ", x + 1);
            scanf("%f", &valor[x]);
        }
        system("clear");
        printf("Selecionado: Divisão\n");

        printf("%.2f / %.2f = %.2f", valor[0], valor[1], valor[0] / valor[1]);
        break;

        break;
    
    default:
        printf("Inválido!\n");
        break;
    }


}