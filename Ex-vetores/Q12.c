#include <stdio.h>

int main(){
    float v[5], maior, menor, media = 0;

    for(int i = 0; i < 5; i++){
        scanf("%f", &v[i]);
        media += v[i];
    }

    printf("Valores digitados:\n");
    maior = v[0]; menor = v[0];
    for(int i = 0; i < 5; i++){
        printf("%.2f\n", v[i]);
        if(v[i] > maior){
            maior = v[i];
        }else if(v[i] < menor){
            menor = v[i];
        }
    }

    printf("Maior numero: %.2f\n", maior);
    printf("Menor numero: %.2f\n", menor);
    printf("Media: %.2f\n", media / 5);
}