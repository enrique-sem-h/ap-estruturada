#include <stdio.h>

int main(){
    int v[10], i, pares = 0;

    for(i = 0; i < 10; i++){
        scanf("%d", &v[i]);
    }
    for(i = 0; i < 10; i++){
        if(v[i] % 2 == 0)
        pares++;
    }

    printf("Quantidade de pares: %d\n", pares);
    printf("Valores pares:\n");
    for(i = 0; i < 10; i++){
        if(v[i] % 2 == 0)
        printf("%d\n", v[i]);
    }
}