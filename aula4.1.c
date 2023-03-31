#include <stdio.h>

int main(){
    int x, y;

    do{
        printf("Digite x: ");
        scanf("%d", &x);
        printf("Digite y: ");
        scanf("%d", &y);

        if(x > y)
            printf("Decrescente\n\n");
        else if(x < y)
            printf("Crescente\n\n");
        else
            printf("Valores iguais !!");
    }while(x != y);
}