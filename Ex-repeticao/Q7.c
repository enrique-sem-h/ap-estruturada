/*Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário.
Imprima o enésimo termo da sequência de Fibonacci. Essa sequência começa no termo de ordem zero, e, 
a partir do segundo termo, seu valor é dado pela soma dos dois termos anteriores. Alguns termos dessa 
sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.*/
#include <stdio.h>

int main(){
    int i, num, soma, a, b, c;

    a = 0;
    b = 1;
    soma = 0;


    printf("Digite a posicao do numero na sequencia: ");
    scanf("%d", &num);

    if(num <= 0){
        printf("Erro, encerrando...");
        return 0;
    }

    printf("%d ", a);

    for(i = 3; i <= num; i++){
        soma = a + b;
        a = b;
        b = soma;

        if(soma == 1){
            printf("%d ", soma);
        }

        printf("%d ", soma);
    }
        printf("\nA %dª posicao na sequencia de fibonacci corresponde a: %d\n", num, soma);


}
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

main() {

    setlocale(LC_ALL, "Portuguese");

    int a, b, auxiliar, i, n;

    a = 0;
    b = 1;

    printf("Digite um número: ");
    scanf("%d", &n);
    printf("\nSérie de Fibonacci:\n\n");
    printf("%d\n", a);

    for(i = 1; i <= n; i++) {

        auxiliar = a + b;
        a = b;
        b = auxiliar;

        printf("%d\n", auxiliar);
    }
}



*/