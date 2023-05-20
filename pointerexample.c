#include <stdio.h>

int main(){
    int x = 10;
    int *p = NULL;

    printf("%d\n", &x);
    printf("%d\n", p);

    p = &x;

    printf("%d - endereco de memoria\n", &x);
    printf("%d - valor da variavel\n", x);
    printf("%d - conteudo do ponteiro\n", p);
    printf("%d - conteudo da variavel para a qual o ponteiro aponta\n", *p);

    *p = 30;

    printf("%d - endereco de memoria\n", &x);
    printf("%d - valor da variavel\n", x);
    printf("%d - conteudo do ponteiro\n", p);
    printf("%d - conteudo da variavel para a qual o ponteiro aponta\n", *p);

}