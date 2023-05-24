/*4. Crie um programa que contenha um array de float contendo 10 elementos. Imprima o endereço de cada posçao desse array.*/
#include <stdio.h>

int main() {
    float array[10];

    printf("Endereços do array:\n");

    for (int i = 0; i < 10; i++) {
        printf("Endereço da posição %d: %p\n", i, &array[i]);
    }

    return 0;
}
