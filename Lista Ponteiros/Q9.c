/*6. Crie uma função que receba como parâmetro um array e o imprima. Não utilize índices para percorrer o array, apenas aritmética de ponteiros.*/
#include <stdio.h>

void imprimirArray(int* array, int tamanho) {
    // Ponteiro para percorrer o array
    int* ptr = array;

    // Imprimir os elementos do array utilizando aritmética de ponteiros
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", *ptr);
        ptr++;
    }

    printf("\n");
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(array) / sizeof(array[0]);

    imprimirArray(array, tamanho);

    return 0;
}
