#include <stdio.h>
#define TAM 5

int main() {
  float v1[TAM], v2[TAM];
  float pEscalar = 0;

  // Lê os valores do primeiro vetor
  printf("Digite os valores do primeiro vetor:\n");
  for (int i = 0; i < TAM; i++) {
    scanf("%f", &v1[i]);
  }

  // Lê os valores do segundo vetor
  printf("Digite os valores do segundo vetor:\n");
  for (int i = 0; i < TAM; i++) {
    scanf("%f", &v2[i]);
  }

  // Calcula o produto escalar
  for (int i = 0; i < TAM; i++) {
    pEscalar += v1[i] * v2[i];
  }

  // Imprime os vetores e o produto escalar
  printf("Vetor 1: ");
  for (int i = 0; i < TAM; i++) {
    printf("%.2f ", v1[i]);
  }
  printf("\n");

  printf("Vetor 2: ");
  for (int i = 0; i < TAM; i++) {
    printf("%.2f ", v2[i]);
  }
  printf("\n");

  printf("Produto escalar: %.2f\n", pEscalar);

}
