/*2. Construa uma estrutura aluno com nome, numero de matrícula e curso. Leia do usuário a informação de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na tela. */
#include <stdio.h>

typedef struct Student{
    char nome[50], curso[50], matricula[14];

}Student;

int main(){
    Student p[5];
    int opc;

    for(int i = 0; i < 5; i++){
        printf("Digite o nome do %dº aluno: ", i + 1);
        scanf("%50[^\n]s", &p[i].nome);
        fflush(stdin);
        printf("Digite a matricula de %s: ", p[i].nome);
        scanf("%14[^\n]s", &p[i].matricula);
        fflush(stdin);
        printf("Digite o curso de %s: ", p[i].nome);
        scanf("%50[^\n]s", &p[i].curso);
        fflush(stdin);
    }

    printf("Digite a posicao do aluno a ser verificada: ");
    scanf("%d", &opc);

    do{
    printf("\tRegistro:\n");
    printf("Nome: %s\n", p[opc].nome);
    printf("Matricula: %s\n", p[opc].matricula);
    printf("Curso: %s\n", p[opc].curso);
    printf("\nDigite outra posicao: ");
    scanf("%d", &opc);
    }while(opc >= 0 && opc <= 5);
}