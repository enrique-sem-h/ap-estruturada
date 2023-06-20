#include <stdio.h>
#include <stdlib.h>

typedef struct No{
    int value;
    struct No* next;
};

int main(){
    // iniciar a lista
    No* start = (No*)malloc(sizeof(No));
    start->next = NULL;

    //adicionar elementos na lista

    No* No1 = (No*)malloc(sizeof(No));
    No1->value = 10;
    No1->next = NULL;
    start = No1;

    No* No2 = (No*)malloc(sizeof(No));
    No2->value = 20;
    No2->next = NULL;
    No1->next = No2;

    No* No3 = (No*)malloc(sizeof(No));
    No3->value = 30;
    No3->next = NULL;
    No2->next = No3;
   
    No* No4 = (No*)malloc(sizeof(No));
    No4->value = 40;
    No4->next = NULL;
    No3->next = No4;

    printf("Imprimir a lista:\n");
    No* noAtual = start;
    while(noAtual != NULL){
        printf("%d\t", noAtual->value);
        noAtual = noAtual->next;
    }
}