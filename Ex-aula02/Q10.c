/* Desafio Báskara */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
    int a,b,c, x1, x2;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    system("clear");

    printf("Digite o valor de B: ");
    scanf("%d", &b);
    system("clear");

    printf("Digite o valor de C: ");
    scanf("%d", &c);
    system("clear");

    x1 = (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);
    x2 = (-b - sqrt((b * b) - (4 * a * c))) / (2 * a);


    printf("A = %d\nB = %d\nC = %d\n", a,b,c);
    printf("\nS = {%d,%d}", x1, x2);



}
