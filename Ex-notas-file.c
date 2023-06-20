#include <stdio.h>

int main() {
    float notaMatematica, notaFisica, notaQuimica;
    float media;

    printf("Digite a nota de Matemática: ");
    scanf("%f", &notaMatematica);

    printf("Digite a nota de Física: ");
    scanf("%f", &notaFisica);

    printf("Digite a nota de Química: ");
    scanf("%f", &notaQuimica);

    media = (notaMatematica + notaFisica + notaQuimica) / 3.0;

    FILE *arquivo = fopen("notas.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
    }

    fprintf(arquivo, "Notas do Aluno:\n");
    fprintf(arquivo, "Matemática: %.2f\n", notaMatematica);
    fprintf(arquivo, "Física: %.2f\n", notaFisica);
    fprintf(arquivo, "Química: %.2f\n", notaQuimica);
    fprintf(arquivo, "Média: %.2f\n", media);

    fclose(arquivo);

    printf("Notas salvas no arquivo notas.txt com sucesso.\n");
}
