#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int v[2], x, adic;

    for(x = 0; x <= 1; x++){
    printf("Digite o %dº valor: ", x + 1);
    scanf("%d", &v[x]);
    }

    adic = v[0] + v[1];

    if(adic > 10)
        printf("valores somados: %d", adic);
}