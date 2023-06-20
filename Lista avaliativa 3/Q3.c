#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Veiculo {
    char proprietario[50];
    char combustivel[20];
    char modelo[50];
    char cor[20];
    char chassi[20];
    int ano;
    char placa[8];
    struct Veiculo* next;
} Veiculo;

Veiculo* criarVeiculo(char proprietario[], char combustivel[], char modelo[], char cor[], char chassi[], int ano, char placa[]) {
    Veiculo* veiculo = (Veiculo*)malloc(sizeof(Veiculo));
    strcpy(veiculo->proprietario, proprietario);
    strcpy(veiculo->combustivel, combustivel);
    strcpy(veiculo->modelo, modelo);
    strcpy(veiculo->cor, cor);
    strcpy(veiculo->chassi, chassi);
    veiculo->ano = ano;
    strcpy(veiculo->placa, placa);
    veiculo->next = NULL;
    return veiculo;
}

void adicionarVeiculo(Veiculo** head, char proprietario[], char combustivel[], char modelo[], char cor[], char chassi[], int ano, char placa[]) {
    Veiculo* novoVeiculo = criarVeiculo(proprietario, combustivel, modelo, cor, chassi, ano, placa);
    if (*head == NULL) {
        *head = novoVeiculo;
    } else {
        Veiculo* atual = *head;
        while (atual->next != NULL) {
            atual = atual->next;
        }
        atual->next = novoVeiculo;
    }
}

void listarProprietariosAnoDiesel(Veiculo* head) {
    Veiculo* atual = head;
    int encontrado = 0;
    printf("Proprietários de veículos do ano de 2010 ou posterior movidos a diesel:\n");
    while (atual != NULL) {
        if (strcmp(atual->combustivel, "diesel") == 0 && atual->ano >= 2010) {
            printf("%s\n", atual->proprietario);
            encontrado = 1;
        }
        atual = atual->next;
    }
    if (!encontrado) {
        printf("Nenhum veículo encontrado.\n");
    }
}

void listarPlacasJ(Veiculo* head) {
    Veiculo* atual = head;
    int encontrado = 0;
    printf("Placas que começam com a letra J e terminam com 0, 2, 4 ou 7:\n");
    while (atual != NULL) {
        if (atual->placa[0] == 'J' && (atual->placa[7] == '0' || atual->placa[7] == '2' || atual->placa[7] == '4' || atual->placa[7] == '7')) {
            printf("Placa: %s\n", atual->placa);
            printf("Proprietário: %s\n", atual->proprietario);
            encontrado = 1;
        }
        atual = atual->next;
    }
    if (!encontrado) {
        printf("Nenhuma placa encontrada.\n");
    }
}

int somaDigitosNumerico(char placa[]) {
    int soma = 0;
    for (int i = 3; i < 7; i++) {
        soma += placa[i] - '0';
    }
    return soma;
}

void listarModeloCorPlacasVogalSomaPar(Veiculo* head) {
    Veiculo* atual = head;
    int encontrado = 0;
    printf("Modelo e cor dos veículos cujas placas têm como segunda letra uma vogal e a soma dos valores numéricos é par:\n");
    while (atual != NULL) {
        char segundaLetra = atual->placa[1];
        int soma = somaDigitosNumerico(atual->placa);
        if ((segundaLetra == 'A' || segundaLetra == 'E' || segundaLetra == 'I' || segundaLetra == 'O' || segundaLetra == 'U') && soma % 2 == 0) {
            printf("Modelo: %s\n", atual->modelo);
            printf("Cor: %s\n", atual->cor);
            encontrado = 1;
        }
        atual = atual->next;
    }
    if (!encontrado) {
        printf("Nenhum veículo encontrado.\n");
    }
}

void trocarProprietario(Veiculo* head, char chassi[], char novoProprietario[]) {
    Veiculo* atual = head;
    while (atual != NULL) {
        if (strcmp(atual->chassi, chassi) == 0) {
            if (atual->placa[3] != '0' && atual->placa[4] != '0' && atual->placa[5] != '0' && atual->placa[6] != '0') {
                strcpy(atual->proprietario, novoProprietario);
                printf("Proprietário alterado com sucesso.\n");
                return;
            } else {
                printf("O veículo com o chassi fornecido possui dígitos zero na placa e não é elegível para troca de proprietário.\n");
                return;
            }
        }
        atual = atual->next;
    }
    printf("Veículo com o chassi fornecido não encontrado.\n");
}

void listarVeiculos(Veiculo* head) {
    Veiculo* atual = head;
    if (atual == NULL) {
        printf("A lista de veículos está vazia.\n");
    } else {
        printf("Lista de veículos:\n");
        while (atual != NULL) {
            printf("Proprietário: %s\n", atual->proprietario);
            printf("Combustível: %s\n", atual->combustivel);
            printf("Modelo: %s\n", atual->modelo);
            printf("Cor: %s\n", atual->cor);
            printf("Nº chassi: %s\n", atual->chassi);
            printf("Ano: %d\n", atual->ano);
            printf("Placa: %s\n", atual->placa);
            printf("------------------------\n");
            atual = atual->next;
        }
    }
}

int main() {
    Veiculo* head = NULL;

    // Exemplo de adição de veículos
    adicionarVeiculo(&head, "Proprietário 1", "gasolina", "Modelo 1", "Cor 1", "Chassi 1", 2012, "JXX1234");
    adicionarVeiculo(&head, "Proprietário 2", "diesel", "Modelo 2", "Cor 2", "Chassi 2", 2015, "JXY5678");
    adicionarVeiculo(&head, "Proprietário 3", "diesel", "Modelo 3", "Cor 3", "Chassi 3", 2010, "JZZ0247");
    adicionarVeiculo(&head, "Proprietário 4", "diesel", "Modelo 4", "Cor 4", "Chassi 4", 2013, "JAB1047");

    // Exemplo de utilização das funções
    listarProprietariosAnoDiesel(head);
    printf("------------------------\n");
    listarPlacasJ(head);
    printf("------------------------\n");
    listarModeloCorPlacasVogalSomaPar(head);
    printf("------------------------\n");
    trocarProprietario(head, "Chassi 1", "Novo Proprietário");
    listarVeiculos(head);

    return 0;
}
