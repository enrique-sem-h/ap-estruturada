#include <stdio.h>

int main() {
    int vetor[10];
    int i, j, duped;

    printf("Digite 10 números inteiros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Valores iguais: ");
    for (i = 0; i < 10; i++) {
        duped = 0;
        for (j = i + 1; j < 10; j++) {
            if (vetor[i] == vetor[j]) {
                duped = 1;
                break;
            }
        }
        if (duped) {
            printf("%d ", vetor[i]);
        }
    }
}
