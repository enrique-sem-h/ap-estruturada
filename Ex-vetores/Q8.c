#include <stdio.h>

int main(){
    int v[6];

    for(int i = 0; i < 6; i++){
        scanf("%d", &v[i]);
    }

    printf("Valores na ordem inversa:\n");

    for(int i = 5; i >= 0; i--){
        printf("%d\n", v[i]);
    }

}