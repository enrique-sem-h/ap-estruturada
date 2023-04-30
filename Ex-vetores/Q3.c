#include <stdio.h>

int main(){
    int v1[10], v2[10], i;

    for(i = 0; i < 10; i++){
        scanf("%d", &v1[i]);
        v2[i] = v1[i] * v1[i];
    }
    printf("1º vetor:\t2º vetor:\n");
    for(i = 0; i < 10; i++){
        printf("%d\t\t%d\n", v1[i], v2[i]);
    }
}