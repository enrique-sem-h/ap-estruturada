/*1. Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene os dados em uma estrutura;*/
#include <stdio.h>

typedef struct Person{
    char name[50], endereco[50];
    int idade;

}Person;


int main(){
    Person p1;

    printf("Digite o nome da pessoa: ");
    scanf("%50[^\n]s", &p1.name);
    printf("Digite a idade de %s: ", p1.name);
    scanf("%d", &p1.idade);
    fflush(stdin);
    printf("Digite o endereco de %s: ", p1.name);
    scanf("%50[^\n]s", &p1.endereco);

    printf("\tRegistro:\n");
    printf("Nome: %s\n", p1.name);
    printf("Idade: %d\n", p1.idade);
    printf("Endereco: %s", p1.endereco);


}