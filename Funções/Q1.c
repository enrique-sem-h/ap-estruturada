/*1.Escreva uma função que receba por parâmetro dois números e retorne o maior deles.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// function responsible for returning the bigger number
float biggerN(float n1, float n2){
    //n1 > n2 ? return n1 : return n2;
    if (n1 > n2){
        return n1;
    }else if (n1 == n2){
        return 0;
    }else{
        return n2;
    }
}

// start of main
int main(){
    // variable declarations
    int i;
    float n[2];

    // start of a for loop to get the numbers
    for(i = 1; i <= 2; i++){
    printf("Digite o n.%d: ", i);
    scanf("%f", &n[i-1]);
    }

    // returning the operation
    printf("O maior número é: %f", biggerN(n[0], n[1]));
}