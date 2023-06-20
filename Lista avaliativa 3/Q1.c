/*1. Crie uma estrutura para descrever restaurantes. Os membros devem armazenar o nome, o endereço, o preço médio e o tipo de comida. Crie uma lista simples encadeada e escreva um programa que utilize uma função para solicitar os dados de um elemento da lista e outra para listar todos os dados. (0,75 ponto)*/
// #include <stdio.h>
// #include <stdlib.h>

// typedef struct Restaurant{
//     char name[50], address[50], foodType[50];
//     float avgPrice;
//     struct Restaurant* next;
// }

// void addRestaurant(char name, char address, char foodType, float avgPrice){
//     Restaurant* 
// }

// int main(){

// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Restaurant {
    char name[50], address[50], foodType[50];
    float avgPrice;
    struct Restaurant* next;
} Restaurant;

Restaurant* createRestaurant(char name[], char address[], char foodType[], float avgPrice) {
    Restaurant* restaurant = (Restaurant*)malloc(sizeof(Restaurant));
    strcpy(restaurant->name, name);
    strcpy(restaurant->address, address);
    strcpy(restaurant->foodType, foodType);
    restaurant->avgPrice = avgPrice;
    restaurant->next = NULL;
    return restaurant;
}

void addRestaurant(Restaurant** head, char name[], char address[], char foodType[], float avgPrice) {
    Restaurant* restaurant = createRestaurant(name, address, foodType, avgPrice);
    if (*head == NULL) {
        *head = restaurant;
    } else {
        Restaurant* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = restaurant;
    }
}

void listRestaurants(Restaurant* head) {
    Restaurant* current = head;
    if (current == NULL) {
        printf("A lista de restaurantes está vazia.\n");
    } else {
        printf("Lista de restaurantes:\n");
        while (current != NULL) {
            printf("Nome: %s\n", current->name);
            printf("Endereço: %s\n", current->address);
            printf("Tipo de comida: %s\n", current->foodType);
            printf("Preço médio: %.2f\n", current->avgPrice);
            printf("------------------------\n");
            current = current->next;
        }
    }
}

int main() {
    Restaurant* head = NULL;

    addRestaurant(&head, "Restaurante 1", "Endereço 1", "Comida 1", 20.50);
    addRestaurant(&head, "Restaurante 2", "Endereço 2", "Comida 2", 15.75);
    addRestaurant(&head, "Restaurante 3", "Endereço 3", "Comida 3", 30.00);

    listRestaurants(head);

    return 0;
}
