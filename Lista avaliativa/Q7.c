/*Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário. Imprima o enésimo termo da sequência de Fibonacci. Essa sequência começa no termo de ordem zero, e, a partir do segundo termo, seu valor é dado pela soma dos dois termos anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.*/
#include <stdio.h>

int main(){
    int i, n;
    int next;
    int fib[2] = {0, 1};

    printf("Digite o numero para calcular a posicao: ");
    scanf("%d", &n);

    while(n > 0 && n != 0 && n != 1){
        for(i = 2; i < n; i++){
            next = fib[0] + fib[1];
            fib[0] = fib[1];
            fib[1] = next;
        }
    printf("%dº numero na sequencia: %d", n, fib[1]);
    return 0;
    }
    printf("Erro, tente novamente");
}