#include <stdio.h>
#define NALUNOS 10

int main() {
  int nAluno[NALUNOS];
  float altura[NALUNOS];
  int menorAl = 0, maiorAl = 0;

  // Lê os números dos alunos e suas alturas
  for (int i = 0; i < NALUNOS; i++) {
    printf("Digite o número e altura do aluno %d: ", i+1);
    scanf("%d %f", &nAluno[i], &altura[i]);

    // Verifica se o aluno atual é o mais baixo ou o mais alto até agora
    if (altura[i] < altura[menorAl]) {
      menorAl = i;
    }
    if (altura[i] > altura[maiorAl]) {
      maiorAl = i;
    }
  }

  // Imprime o número e a altura do aluno mais baixo e do mais alto
  printf("Aluno mais baixo: %d, altura: %.2f\n", nAluno[menorAl], altura[menorAl]);
  printf("Aluno mais alto: %d, altura: %.2f\n", nAluno[maiorAl], altura[maiorAl]);

  return 0;
}
