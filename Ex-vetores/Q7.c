#include <stdio.h>

int main(){
    int v[10];
    printf("Digite 10 valores para o vetor\n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &v[i]);
    }

    int maior = v[0], pos = 0;

    for (int i = 0; i < 10; i++)
    {
        if (v[i] > maior){
            maior = v[i];
            pos = i;
        }
    }
    printf("Vetor:\n");
    for(int i = 0; i < 10; i++){
        printf("%d\t", v[i]);
    }
    printf("\nMaior num: %d, esta na posicao: %d", maior, pos);
    
}