#include <stdio.h>
#include <stdlib.h>
#define N 3

typedef struct Aluno {
  char nome[50];
  char matricula[15];
  float mediaFinal;
} Aluno;

int main() {
  Aluno alunos[N];
  Aluno aprovados[N], reprovados[N];
  int nAprovados = 0, nReprovados = 0;

  for (int i = 0; i < N; i++) {
    printf("Dados do aluno %d:\n", i + 1);
    printf("Nome: ");
    scanf("%s", alunos[i].nome);
    printf("Matricula: ");
    scanf("%s", alunos[i].matricula);
    printf("Media final: ");
    scanf("%f", &alunos[i].mediaFinal);
    printf("\n");
  }
  system("clear");

  for (int i = 0; i < N; i++) {
    if (alunos[i].mediaFinal >= 5.0) {
      aprovados[nAprovados] = alunos[i];
      nAprovados++;
    } else {
      reprovados[nReprovados] = alunos[i];
      nReprovados++;
    }
  }

  for (int i = 0; i < nAprovados; i++) {
    printf("Nome: %s\n", aprovados[i].nome);
    printf("Matricula: %s\n", aprovados[i].matricula);
    printf("Media final: %.2f\n", aprovados[i].mediaFinal);
    printf("Aluno aprovado!\n\n");
  }

  for (int i = 0; i < nReprovados; i++) {
    printf("Nome: %s\n", reprovados[i].nome);
    printf("Matricula: %s\n", reprovados[i].matricula);
    printf("Media final: %.2f\n", reprovados[i].mediaFinal);
    printf("Aluno reprovado!\n\n");
  }
}
