#include <stdio.h>

int main(){
    int A[10], B[10], C[20];

    printf("Digite os valores do vetor A:\n");
    for(int i=0; i<10; i++){
        scanf("%d", &A[i]);
    }

    printf("Digite os valores do vetor B:\n");
    for(int i=0; i<10; i++){
        scanf("%d", &B[i]);
    }

    // preenchendo C com os valores de A nas posições pares e B nas posições impares
    for(int i=0; i<10; i++){
        C[2*i] = A[i];
        C[2*i+1] = B[i];
    }

    printf("Vetor C:\n");
    for(int i=0; i<20; i++){
        printf("%d ", C[i]);
    }
}
