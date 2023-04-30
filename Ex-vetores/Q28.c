#include <stdio.h>

int main(){
    int v[10], v1[10], v2[10];
    int i, cont1 = 0, cont2 = 0;

    printf("Digite 10 numeros inteiros:\n");
    for(i = 0; i < 10; i++){
        scanf("%d", &v[i]);
        if(v[i] % 2 == 0){
            v2[cont2] = v[i];
            cont2++;
        }else{
            v1[cont1] = v[i];
            cont1++;
        }
    }

    printf("Valores impares:\n");
    for(i = 0; i < cont1; i++){
        printf("%d ", v1[i]);
    }
    printf("\n");

    printf("Valores pares:\n");
    for(i = 0; i < cont2; i++){
        printf("%d ", v2[i]);
    }
}
