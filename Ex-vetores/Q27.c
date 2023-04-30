#include <stdio.h>
#include <math.h>

int primo(int num){
    int i;

    if(num <= 1){
        return 0;
    }

    for(i = 2; i <= sqrt(num); i++){
        if(num % i == 0){
            return 0;
        }
    }

    return 1;
}

int main(){
    int v[10];
    int i;

    printf("Digite 10 numeros inteiros:\n");
    for(i = 0; i < 10; i++){
        scanf("%d", &v[i]);
    }

    printf("Numeros primos e suas posicoes:\n");
    for(i = 0; i < 10; i++){
        if(primo(v[i])){
            printf("%d na posicao %d\n", v[i], i);
        }
    }
}
