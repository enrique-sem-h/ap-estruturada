#include <stdio.h>

int main(){
    int inteiro, *i;
    double real, *r;
    char caractere, *c;

    inteiro = 1;
    real = 1.5;
    caractere = 'E';

    i = &inteiro;
    r = &real;
    c = &caractere;

    printf("Inteiro: %p\n", *i);
    printf("Real: %p\n", *r);
    printf("Char: %p\n", *c);

    *i = 2;
    *r = 3;
    *c = 'C';

    printf("\nInteiro: %d\n", *i);
    printf("Real: %lf\n", *r);
    printf("Char: %c", *c);

}