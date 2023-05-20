#include <stdio.h>

int main(){
    int a, b;

    printf("Digite a variavel a: ");
    scanf("%d", &a);
    printf("Digite a variavel b: ");
    scanf("%d", &b);

    printf("Endereco de a: %p\n", &a);
    printf("Endereco de b: %p\n", &b);

    &a > &b ? printf("O endereco de a e maior!") : printf("O endereco de b e maior");
}