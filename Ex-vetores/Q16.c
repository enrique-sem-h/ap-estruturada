#include <stdio.h>

int main()
{
    float vetor[5];
    int codigo, cWhile = 1;

    printf("Digite os valores do vetor:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%f", &vetor[i]);
    }

    while (cWhile == 1)
    {
        printf("\tDigite o codigo\n0. Sair\n1. Ordem direta\n2. Ordem inversa:\n");
        scanf("%d", &codigo);

        switch (codigo)
        {
        case 0:
            printf("Programa finalizado.\n");
            cWhile = 0;
            break;
        case 1:
            printf("Vetor na ordem direta:\n");
            for (int i = 0; i < 5; i++)
            {
                printf("%.2f ", vetor[i]);
            }
            printf("\n");
            break;
        case 2:
            printf("Vetor na ordem inversa:\n");
            for (int i = 4; i >= 0; i--)
            {
                printf("%.2f ", vetor[i]);
            }
            printf("\n");
            break;
        default:
        printf("Erro, codigo invalido.\n");
            cWhile = 0;
            break;
        }
    }
}