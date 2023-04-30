#include <stdio.h>

int main(){
    float v[5];
    int posMaior, posMenor;

    for(int i = 0; i < 5; i++){
        scanf("%f", &v[i]);
    }

    printf("Valores digitados:\n");
    posMaior = v[0]; posMenor = v[0];
    for(int i = 0; i < 5; i++){
        printf("%.2f\n", v[i]);
        if(v[i] > posMaior){
            posMaior = i;
        }else if(v[i] < posMenor){
            posMenor = i;
        }
    }

    printf("Posicao maior numero: %d\n", posMaior);
    printf("Posicao menor numero: %d\n", posMenor);
}