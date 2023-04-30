#include <stdio.h>

int main() {
    int vetor[10], x, count = 0;

    printf("Digite os valores do vetor:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Digite um número inteiro x: ");
    scanf("%d", &x);

    for(int i = 0; i < 10; i++) {
        if(vetor[i] % x == 0) {
            count++;
        }
    }

    if(count == 0) {
        printf("Nenhum múltiplo de %d encontrado no vetor.\n", x);
    } else {
        printf("\nForam encontrados %d múltiplos de %d no vetor:\n", count, x);
    for(int i = 0; i < 10; i++) {
        if(vetor[i] % x == 0) {
            printf("%d ", vetor[i]);
        }
    }
    }


}
