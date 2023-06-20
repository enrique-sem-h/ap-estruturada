/*2. Crie uma estrutura, com o nome Dieta, para armazenar em uma lista encadeada o nome de uma comida, o peso de uma porção e o número de calorias. Escreva um programa semelhante a questão 1. (0,75 ponto)*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Dieta {
    char nome[50];
    float pesoPorcao;
    int calorias;
    struct Dieta* next;
} Dieta;

Dieta* criarDieta(char nome[], float pesoPorcao, int calorias) {
    Dieta* dieta = (Dieta*)malloc(sizeof(Dieta));
    strcpy(dieta->nome, nome);
    dieta->pesoPorcao = pesoPorcao;
    dieta->calorias = calorias;
    dieta->next = NULL;
    return dieta;
}

void adicionarDieta(Dieta** head, char nome[], float pesoPorcao, int calorias) {
    Dieta* novaDieta = criarDieta(nome, pesoPorcao, calorias);
    if (*head == NULL) {
        *head = novaDieta;
    } else {
        Dieta* atual = *head;
        while (atual->next != NULL) {
            atual = atual->next;
        }
        atual->next = novaDieta;
    }
}

void listarDietas(Dieta* head) {
    Dieta* atual = head;
    if (atual == NULL) {
        printf("A lista de dietas está vazia.\n");
    } else {
        printf("Lista de dietas:\n");
        while (atual != NULL) {
            printf("Nome: %s\n", atual->nome);
            printf("Peso da porção: %.2f\n", atual->pesoPorcao);
            printf("Calorias: %d\n", atual->calorias);
            printf("------------------------\n");
            atual = atual->next;
        }
    }
}

int main() {
    Dieta* head = NULL;

    adicionarDieta(&head, "Arroz", 100.0, 130);
    adicionarDieta(&head, "Feijão", 80.0, 120);
    adicionarDieta(&head, "Carne", 120.0, 250);

    listarDietas(head);
}
