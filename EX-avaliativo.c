/*Instruções
Implemente um algoritmo que:

inclua até 1000 usuários;
edite um usuário;
exclua um usuário;
busque um usuário pelo email;
imprima todos os usuários cadastrados;
faça backup dos usuários cadastrados;
faça restauração dos dados
Obrigatório uso de vetor e função.

Obrigatório uso de switch case com char para escolha da opção desejada.

ATENÇÃO: (1) NA CRIAÇÃO DE NOMES DE IDENTIFICADORES; (2) NOS TEXTOS DE INTERAÇÃO COM USUÁRIOS – ENTRADA E SAÍDA; (3) NA ORGANIZAÇÃO DO CÓDIGO.

Dados do usuário:

Id (int) => preenchido automaticamente por números randômicos
Nome completo (string)
Email (string) => validação do campo: verificar se o caractere "@" aparece
Sexo (string) => validação do campo: aceitar somente as palavras Feminino, Masculino e Indiferente
Endereço (string)
Altura (double) => validação do campo: aceitar valores entre 1 e 2 m.
Vacina (int) => validação de 1 para sim e 0 para não
Individual*/
#include <stdio.h>
#include <string.h>

#define LIMITEUSERS 1000

typedef struct User{
    int id;
    char name[50];
    char email[50];
    char sex[30];
    char address[60];
    double height;
    int vaccinated;
} User;

int userCount = 0;
User users[LIMITEUSERS];


void UserAdd(){
    char verificaArroba = '@';

    if (userCount >= LIMITEUSERS){
        printf("Limite de usuarios atingido");
        return;
    }

    User newUser;

    newUser.id = userCount + 1;

    printf("Digite o nome: ");
    scanf(" %s", &newUser.name);

    fflush(stdin);

    do{
    printf("Digite o email: ");
    scanf(" %s", &newUser.email);
    if(strrchr(newUser.email, verificaArroba) == NULL){
        printf("Erro, e-mail invalido\n");
    }
    }while(strrchr(newUser.email, verificaArroba) == NULL);

    fflush(stdin);
    
    do{
    printf("Digite o sexo (Masculino, Feminino ou Indiferente): ");
    scanf(" %s", &newUser.sex);
    if(strcmp(newUser.sex, "Feminino") != 0 && strcmp(newUser.sex, "Masculino") != 0 && strcmp(newUser.sex, "Indiferente") != 0){
        printf("Erro, sexo invalido\n");
    }
    }while(strcmp(newUser.sex, "Feminino") != 0 && strcmp(newUser.sex, "Masculino") != 0 && strcmp(newUser.sex, "Indiferente") != 0);

    fflush(stdin);
    
    printf("Digite o Endereco: ");
    scanf(" %s", &newUser.address);

    fflush(stdin);
    
    do{
    printf("Digite a altura: ");
    scanf("%lf", &newUser.height);
    if(newUser.height < 1 || newUser.height > 2){
        printf("Erro, altura invalida\n");
    }
    }while(newUser.height < 1 || newUser.height > 2);

    fflush(stdin);
    
    printf("%s foi vacinado(a)?\n0. Nao\n1. Sim\n", newUser.name);
    scanf("%d", &newUser.vaccinated);
    if(newUser.vaccinated != 1 && newUser.vaccinated != 0){
        printf("Erro, solicitacao invalida");
        return;
    }

    users[userCount] = newUser;
    userCount++;

    printf("Usuario adicionado com sucesso - ID: %d\n", newUser.id);
}

void UserEdit(){
    int userID;
    int escolha;

    do{
    printf("\nDigite a id do usuario a ser editado: ");
    scanf("%d", &userID);
    if(userID > userCount || userID < 0){
        printf("Erro, Id invalido\n");
    }
    }while(userID > userCount || userID < 0);

    User *pUser = &users[userID - 1];

    do{
    printf("O que deseja alterar?\n");
    printf("1. Nome: %s\n", pUser->name);
    printf("2. E-mail: %s\n", pUser->email);
    printf("3. Sexo: %s\n", pUser->sex);
    printf("4. Endereco: %s\n", pUser->address);
    printf("5. Altura: %lf\n", pUser->height);
    pUser->vaccinated == 1 ? (printf("6. Foi vacinado(a)\n")) : (printf("6. Nao foi vacinado(a)\n"));
    scanf("%d", &escolha);
    if(escolha < 1 && escolha > 6){
        printf("Escolha invalida\n");
    }
    }while(escolha < 1 && escolha > 6);

    switch(escolha){
        case 1:
        printf("Digite o novo nome: ");
        scanf(" %s", pUser->name);
        printf("Nome alterado com sucesso!\n");
        break;
        case 2:
        printf("Digite o novo e-mail: ");
        scanf(" %s", pUser->email);
        printf("E-mail alterado com sucesso!\n");
        break;
        case 3:
        printf("Digite o novo sexo: ");
        scanf(" %s", pUser->sex);
        printf("Sexo alterado com sucesso!\n");
        break;
        case 4:
        printf("Digite o novo endereco: ");
        scanf(" %s", pUser->address);
        printf("Endereco alterado com sucesso!\n");
        break;
        case 5:
        printf("Digite a nova altura: ");
        scanf(" %lf", pUser->height);
        printf("Altura alterada com sucesso!\n");
        break;
        case 6:
        pUser->vaccinated == 0 ? (pUser->vaccinated = 1) : (pUser->vaccinated = 0);
        printf("Estado de vacinacao alterado com sucesso!\n");
        break;
    }
}

void UserDel(){
    int userID;

    do{
    printf("Digite a ID do usuario a ser excluido: ");
    scanf("%d", &userID);
    if(userID > userCount || userID < 0){
        printf("Erro, ID invalido\n");
    }
}while(userID > userCount || userID < 0);

for(int i = userID - 1; i <= userCount; i++){
    users[i] = users[i+1];
}
userCount--;

printf("Usuario excluido :(\n");

}

void UserCheck(){
    if (userCount == 0){
        printf("Erro, nenhum usuario na base de dados\n");
        return;
    }
    
    int userID = -1, option;
    char email[50];

    do{
    printf("Digite o email: ");
    scanf(" %s", &email);
    if(strrchr(email, '@') == NULL){
        printf("Erro, e-mail invalido\n");
    }
    }while(strrchr(email, '@') == NULL);
    
    for(int i = 0; i < userCount; i++){
        // printf(email);
        if(strcmp(users[i].email, email) == 0){
                userID = users[i].id;
                break;
        }
        // for(int x = 0; x < userCount; x++){
        // }
    }

    userID--;
        // printf("%d", userID);
    if(userID >= 0){
    printf("\tUsuario encontrado!\n");
    
    printf("1.ID: %d\n", users[userID].id + 1);
    printf("2. Nome: %s\n", users[userID].name);
    printf("3. E-mail: %s\n", users[userID].email);
    printf("4. Sexo: %s\n", users[userID].sex);
    printf("5. Endereco: %s\n", users[userID].address);
    printf("6. Altura: %lf\n", users[userID].height);
    users[userID].vaccinated == 1 ? (printf("7. Foi vacinado(a)\n")) : (printf("7. Nao foi vacinado(a)\n"));
    printf("\nO que deseja fazer?\n1.Editar\n2.Excluir\n0.Cancelar\n");
    scanf("%d", &option);

    switch(option){
        case 1:
        UserEdit();
        break;
        case 2:
            for(int i = userID; i <= userCount; i++){
            users[i] = users[i+1];
            }
        userCount--;

        printf("Usuario excluido :(\n");
        break;
        default:
        break;
    }

    }else{
        printf("Usuario nao encontrado :(\n");
    }
}

void UserPrint() {
    if (userCount == 0) {
        printf("Nenhum usuário cadastrado.\n");
        return;
    }

    printf("Usuários cadastrados:\n");
    for (int i = 0; i < userCount; i++) {
        User *user = &users[i];
        printf("ID: %d", user->id);
        printf("\tNome: %s\n", user->name);
        printf("-------------------\n");
    }
}

void UserBackup(){
    FILE *file = fopen("backup.txt", "wb");

    for(int i = 0; i < userCount; i++){
        fprintf(file, "ID: %d", users[i].id);
        fprintf(file, "Nome: %s", users[i].name);
        fprintf(file, "E-mail: %s", users[i].email);
        fprintf(file, "Sexo: %s", users[i].sex);
        fprintf(file, "Endereco: %s", users[i].address);
        fprintf(file, "Altura: %lf", users[i].height);
        fprintf(file, "Estado de vacinacao: %d", users[i].vaccinated);
    }
    fclose(file);

    printf("Backup realizado com sucesso!");
}

// void UserBackupRestore(){
//     FILE *file = fopen("backup.txt", "rb");

//     if(file == NULL){
//         printf("Erro, nao foi possivel restaurar o backup\n");
//         return;
//     }

//     userCount = 0;

//     while (!feof(file) && userCount < LIMITEUSERS) {
//         fscanf(file, "%d", &users[userCount]);
//         fscanf(file, "%s", &users[userCount]);
//         fscanf(file, "%s", &users[userCount]);
//         fscanf(file, "%s", &users[userCount]);
//         fscanf(file, "%s", &users[userCount]);
//         fscanf(file, "%lf", &users[userCount]);
//         fscanf(file, "%d", &users[userCount]);
//         userCount++;
//     }

//     fclose(file);

//     printf("Backup restaurado com sucesso!");
// }

int main(){
    int option;

    do {
        printf("\tSelecione uma opção:\n");
        printf("1 - Incluir usuário\n");
        printf("2 - Editar usuário\n");
        printf("3 - Excluir usuário\n");
        printf("4 - Buscar usuário por email\n");
        printf("5 - Imprimir todos os usuários cadastrados\n");
        printf("6 - Fazer backup de usuarios\n");
        // printf("7 - Restaurar backup de usuarios\n");
        printf("0 - Sair\n");
        printf("Opção: ");
        scanf("%d", &option);
    
    switch(option){
        case 1:
            UserAdd();
        break;
        case 2:
            UserEdit();
        break;
        case 3:
            UserDel();
        break;
        case 4:
            UserCheck();
        break;
        case 5:
            UserPrint();
        break;
        case 6:
            UserBackup();
        break;
        // case 7:
        //     UserBackupRestore();
        // break;
        case 0:
            printf("Encerrando...");
        break;
        default:
            printf("Opcao invalida\n");
            option = 1;
        break;
    }
    }while(option > 0 && option <= 7);
}