/*4. Faça um programa que determine e mostre os cinco primeiros múltiplos de 3 considerando números maiores que 0.*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int m3, x;

    m3 = 0;

    printf("5 primeiros múltiplos de 3:\n");
    
    for(x = 0; x <= 5; x++){
    m3+=3;
    if(m3 % 3 == 0)
        printf("%d\n", m3);
    }
}