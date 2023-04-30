#include <stdio.h>

int main(){
    float v[8];
    int x, y;

    for(int i = 0; i < 8; i++){
        scanf("%f", &v[i]);
    }
    printf("vetor armazenado com sucesso!\nDigite a posicao para x: ");
    scanf("%d", &x);
    printf("Digite a posicao para y: ");
    scanf("%d", &y);

    printf("Valor na posicao: %d - %.2f\n", x, v[x]);
    printf("Valor na posicao: %d - %.2f\n", y, v[y]);
}