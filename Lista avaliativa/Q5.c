/*Faça um algoritmo que leia um número positivo e imprima seus divisores. Exemplo: Os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.*/
#include <stdio.h>
#include <stdlib.h>

void divs(int n){
    int i;
    // int primoCheck[];

    printf("\tDivisores de: %d\n", n);
    for(i = n; i >=0; i--){
        if(n % i == 0){
            printf("%d\t", i);
        }
    }
    // if ((sizeof(primoCheck) / sizeof(primoCheck[0])) <= 2){
    //     printf("%d e um numero primo", n);
    // } aqui, tentei implementar uma funcao que nao deu certo :(

}

int main(){
    int num;

    printf("Digite o numero: ");
    scanf("%d", &num);
    system("clear");

    divs(num);

}