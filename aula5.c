#include <stdio.h>
#include <stdlib.h>

typedef struct aloc{
    int x;
}Aloc;

int main(){
    int *t = malloc(5 * sizeof(Aloc));

    for(int i = 0; i < 5; i++){
        scanf("%d\n", &t[i]);
    }

    printf("\n");

    for(int i = 0; i < 5; i++){
        printf("%d\n", &t[i]);
    }
    free(t);
}