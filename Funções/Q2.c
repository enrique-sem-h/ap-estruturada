/*2.Desenvolva um programa que solicite as três notas das provas para cada estudante de uma turma em determinada disciplina. Leia os valores na
função principal e acione uma outra função (calculaMedia) que realizará o cálculo da média aritmética para cada estudante informado. Apresente
 no programa principal a média alcançada por cada estudante, conforme suas notas forem sendo informadas. Lembre-se que não é permitido
 o uso de variáveis globais */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// calling function
float calculaMedia(float n1, float n2, float n3);

// start of main function
void main()
{
    //defining variables
    int i;
    float n[3];

    //start of a for loop to get grades
    for (i = 0; i < 3; i++){
        printf("Digite a %dª nota: ", i + 1);
        scanf("%f", &n[i]);
    }
    // returning the operation
    printf("Média: %.2f", calculaMedia(n[0], n[1], n[2]));
}

// start of funtion responsible for operation
float calculaMedia(float n1, float n2, float n3){
    float media;

    media = (n1 + n2 + n3) / 3;

    return media;
}