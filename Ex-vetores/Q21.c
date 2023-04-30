#include <stdio.h>

int main(){
    int A[10], B[10], C[10];

    printf("Digite os valores do vetor A:\n");
    for(int i=0; i<10; i++){
        scanf("%d", &A[i]);
    }

    printf("Digite os valores do vetor B:\n");
    for(int i=0; i<10; i++){
        scanf("%d", &B[i]);
    }

    for(int i=0; i<10; i++){
        C[i] = A[i] - B[i];
    }

    printf("Vetor C:\n");
    for(int i=0; i<10; i++){
        printf("%d ", C[i]);
    }
}
