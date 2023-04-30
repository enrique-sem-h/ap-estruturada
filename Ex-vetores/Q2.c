#include <stdio.h>

int main(){
    int v[6], i;

    for(i = 0; i < 6; i++){
        scanf("%d", &v[i]);
    }
    printf("Valores digitados:\n");
    for(i = 0; i < 6; i++){
        printf("%d\n", v[i]);
    }
}