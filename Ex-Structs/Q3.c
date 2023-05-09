/*Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota da terceira prova. 

a) Permita ao usuário entrar com os dados de 5 alunos. 

(b) Encontre o aluno com maior nota da primeira prova.

(c) Encontre o aluno com maior media geral.

(d) Encontre o aluno com menor media geral.

(e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 7 para aprovação*/
#include <stdio.h>
#define QNTALUNOS 2

typedef struct Aluno{
    char matricula[15], nome[50];
    float n1[3], media;
}Aluno;

Aluno maior(Aluno n[QNTALUNOS]){
    float maior = 0;
    Aluno aluno;

    for(int i = 0; i < QNTALUNOS; i++){
        if(n[i].n1[0] > maior){
            maior = n[i].n1[0];
            aluno = n[i];
        }
    }
    return aluno;
}

Aluno maiorMedia(Aluno n[QNTALUNOS]){
    Aluno aluno;
    float maior = (n[0].n1[0] + n[0].n1[1] + n[0].n1[2]) / 3;
    aluno = n[0];

    for(int i = 0; i < QNTALUNOS; i++){
        n[i].media = (n[i].n1[0] + n[i].n1[1] + n[i].n1[2]) / 3;
        if(n[i].media > maior){
            maior = n[i].media;
            aluno = n[i];
        }
    }
    return aluno;
}

Aluno menorMedia(Aluno n[QNTALUNOS]){
    Aluno aluno;
    float menor = (n[0].n1[0] + n[0].n1[1] + n[0].n1[2]) / 3;
    aluno = n[0];

    for(int i = 0; i < QNTALUNOS; i++){
        n[i].media = (n[i].n1[0] + n[i].n1[1] + n[i].n1[2]) / 3;
        if(n[i].media < menor){
            menor = n[i].media;
            aluno = n[i];
        }
    }
    return aluno;
}

int aprovado(Aluno a){
    a.media = (a.n1[0] + a.n1[1] + a.n1[2]) / 3;

    if(a.media >= 7){
        return 1;
    }else{
        return 0;
    }

}


int main(){
    Aluno a[QNTALUNOS];

    for(int i = 0; i < QNTALUNOS; i++){
        printf("Digite a matricula: ");
        scanf("%15[^\n]s", &a[i].matricula);
        fflush(stdin);
        printf("Digite o nome: ");
        scanf("%50[^\n]s", &a[i].nome);
        fflush(stdin);
        for(int x = 0; x < 3; x++){
            printf("Digite a %dª nota: ", x + 1);
            scanf("%f", &a[i].n1[x]);
        }
        fflush(stdin);
    }

    printf("Aluno com a maior 1ª nota: %s = %.2f\n", maior(a).nome, maior(a).n1[0]);
    printf("Aluno com a maior media geral: %s = %.2f\n", maiorMedia(a).nome, maiorMedia(a).media);
    printf("Aluno com a menor media geral: %s = %.2f\n", menorMedia(a).nome, menorMedia(a).media);

    printf("\tAprovacao:\n");
    for(int i = 0; i < QNTALUNOS; i++){
        if(aprovado(a[i]) == 1){
        printf("Aluno: %s/ Matricula: %s/ APROVADO!\n", a[i].nome, a[i].matricula);
        }else{
        printf("Aluno: %s/ Matricula: %s/ REPROVADO!\n", a[i].nome, a[i].matricula);
        }
    }

}