/*5. Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima o dobro de cada  valor lido.*/
#include <stdio.h>

int main() {
    int array[5];

    printf("Digite os valores do array:\n");

    // Lendo os valores do array
    for (int i = 0; i < 5; i++) {
        scanf("%d", &array[i]);
    }

    printf("O dobro dos valores lidos é:\n");

    // Imprimindo o dobro de cada valor utilizando aritmética de ponteiros
    for (int i = 0; i < 5; i++) {
        int* endereco = &array[i];
        printf("%d\n", (*endereco) * 2);
    }

    return 0;
}
