#include <stdio.h>

int trocaValor(int *v, char *c){
    *v = 20;
    *c = 'Z';
    printf("%d\n", *v);
    printf("%c\n", *c);
}


int main(){
    int valor = 10;
    char carac = 'E';

    printf("%d\n", valor);
    printf("%c\n", carac);
    trocaValor(&valor, &carac);
    printf("%d\n", valor);
    printf("%c\n", carac);
}