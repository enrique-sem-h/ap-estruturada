/*3. Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais ímpares 
(sem usar comando condicional). */
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num, x;

    printf("Digite o limite de números ímpares positivos: ");
    scanf("%d", &num);

    for(x = 1; x <= num; x+= 2){
        printf("%d\n", x);
    }

}