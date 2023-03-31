#include <stdio.h>
#include <stdlib.h>

int main(){
    int senha;

    printf("Digite a senha: ");
    scanf("%d", &senha);

    while(senha != 2022){
        system("clear");
        printf("Senha incorreta, tente novamente\n\n");
        scanf("%d", &senha);
    }
    printf("Acesso autorizado, Bem vindo(a)");
}