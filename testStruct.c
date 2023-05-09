#include <stdio.h>

typedef struct Aluno{
    char nome[50];
    int idade;

}ListaAlunos;


int main(){
    ListaAlunos aluno1;

    printf("Digire o nome: ");
    scanf("%50[^\n]s", &aluno1.nome);
    printf("Digire a idade: ");
    scanf("%d", &aluno1.idade);

    printf("\tRegisto:\nNome: %s\n", aluno1.nome);
    printf("Idade: %d", aluno1.idade);

}