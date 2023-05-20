#include <stdio.h>

int main(){
    int a = 10;
    int b = 20;

    printf("Endereco a: %p\n", &a);
    printf("Endereco b: %p\n", &b);

    &a > &b ? printf("O endereco de a e maior: %p", &a) : printf("O endereco de b e maior: %p", &b);


}