#include <stdio.h>

int main() {
    int vetor[100];
    int contador = 0;
    int i = 1;

    while (contador < 100) {
        if (i % 7 != 0 && i % 10 != 7) {
            vetor[contador] = i;
            contador++;
        }
        i++;
    }

    printf("Vetor:\n");
    for (int j = 0; j < 100; j++) {
        printf("%d ", vetor[j]);
    }
}
