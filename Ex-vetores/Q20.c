#include <stdio.h>

int main() {
    int vetor1[10], vetor2[10], x = 0, i;

    printf("Digite 10 números inteiros no intervalo [0,50]:\n");
    for(i = 0; i < 10; i++) {
        int numero;
        scanf("%d", &numero);

        if(numero >= 0 && numero <= 50) {
            vetor1[i] = numero;
            if(numero % 2 == 1) {
                vetor2[x] = numero;
                x++;
            }
        }
    }

    printf("Vetor 1:\n");
    for(i = 0; i < 10; i += 2) {
        printf("%d %d\n", vetor1[i], vetor1[i+1]);
    }

    printf("Vetor 2:\n");
    for(i = 0; i < x + 1; i += 2) {
        printf("%d %d\n", vetor2[i], vetor2[i+1]);
    }
}
