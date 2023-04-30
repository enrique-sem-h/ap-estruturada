#include <stdio.h>

int main(){
    int v[6], checkEven;

    for(int i = 0; i < 6; i++){
        scanf("%d", &checkEven);
        if(checkEven % 2 == 0){
            v[i] = checkEven;
            i++;
        }
            i--;
    }

    printf("Os 6 valores pares na ordem inversa:\n");

    for(int i = 5; i >= 0; i--){
        printf("%d\n", v[i]);
    }

}