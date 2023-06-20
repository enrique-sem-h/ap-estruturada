#include <stdio.h>
#include <stdlib.h>

typedef struct PersonNode{
    int age, code;
    char sex;
    struct PersonNode* next;
};

int main(){
    PersonNode* start = (PersonNode*)malloc(sizeof(PersonNode));
    start->next = NULL;

    PersonNode* p1 = (PersonNode*)malloc(sizeof(PersonNode));
    p1->age = 19;
    p1->code = 01;
    p1->sex = 'M';
    p1->next = NULL;
    start = p1;

    PersonNode* p2 = (PersonNode*)malloc(sizeof(PersonNode));
    p2->age = 20;
    p2->code = 02;
    p2->sex = 'F';
    p2->next = NULL;
    p1->next = p2;

    PersonNode* p3 = (PersonNode*)malloc(sizeof(PersonNode));
    p3->age = 39;
    p3->code = 03;
    p3->sex = 'M';
    p3->next = NULL;
    p2->next = p3;

    printf("People:\n");
    PersonNode* pTest = start;
    while(pTest != NULL){
        printf("Age: %d\n", pTest->age);
        printf("Code: %d\n", pTest->code);
        printf("Sex: %c\n\n", pTest->sex);
        pTest = pTest->next;
    }


}