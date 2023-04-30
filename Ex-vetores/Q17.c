#include <stdio.h>

int main() {
    int v[10];

    printf("Digite os valores do vetor:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

    for(int i = 0; i < 10; i++) {
        if(v[i] < 0) {
            v[i] = 0;
        }
    }

    printf("Vetor com valores negativos zerados:\n");
    for(int i = 0; i < 10; i++) {
        printf("%d ", v[i]);
    }
}
