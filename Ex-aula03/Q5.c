/* Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um valor monetário. A seguir,
calcule o menor número de notas e moedas possíveis no qual o valor pode ser decomposto. As notas consideradas são
de 100, 50, 20, 10, 5, 2. As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. A seguir mostre a relação de 
notas necessárias. */
#include <stdio.h>

int main(){
    float money;
    int valor, a, b, c, d, e, f, a2, b2, c2, e2, f2;
    int nota100, nota50, nota20, nota10, nota5, nota2;
    int moedas, moeda1, moeda50, moeda25, moeda10, moeda5, moeda2;

    printf("Digite o valor: ");
    scanf("%f", &money);

    valor = money;
    nota100 = valor / 100;
    a = valor % 100;
    nota50 = a / 50;
    b = a % 50;
    nota20 = b / 20;
    c = b % 20;
    nota10 = c / 10;
    d = c % 10;
    nota5 = d / 5;
    e = d % 5;
    nota2 = e / 2;
    f = e % 2;

}