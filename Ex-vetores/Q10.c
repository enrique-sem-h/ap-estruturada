#include <stdio.h>
#include <stdlib.h>

int main(){
    float notaAluno[15], soma = 0;

    for(int i = 0; i < 15; i++){
        printf("Digite a nota para o %dº aluno: ", i + 1);
        scanf("%f", &notaAluno[i]);
        system("clear");
    }

    printf("Media de todos os alunos: ");

    for(int i = 0; i < 15; i++){
        soma += notaAluno[i];
    }
    printf("%.2f", soma / 15);
}