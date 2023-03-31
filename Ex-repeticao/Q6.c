/*Elabore um algoritmo que permita ao usuário realizar a compra de frutas. Assim, apresente a lista de frutas 
disponíveis, abaixo, com seus respectivos valores. O algoritmo deve permitir ao usuário retomar o menu frutas 
quantas vezes quiser, e solicitar a quantidade de frutas. Ao final, apresente o valor total da compra.*/
#include <stdio.h>
#define ABAC 5.00
#define MACA 1.00
#define PERA 4.00

int main(){
    int opcMenu, fruta, quantAbac, quantMaca;
    float total = 0;
    char voltar = 'r';

    printf("Bem-Vindo(a) a sua compra de frutas\n");
    printf("Digite 1 para comecar\n");
    scanf("%d", &opcMenu);

    if(opcMenu == 1){
        while(voltar == 'R' || voltar == 'r'){
            printf("\nSelecione as frutas abaixo:\n");
            printf("1. Abacaxi (R$ %.2f)\n", ABAC);
            printf("2. Maca (R$ %.2f)\n", MACA);
            printf("3. Pera (R$ %.2f)\n", PERA);
            printf("\nTotal: R$%.2f\n", total);
            printf("Digite 0 para encerrar\n");
            scanf("%d", &fruta);
            switch(fruta){
                case 0:
                        voltar = 's';
                        break;

                case 1:
                        printf("\nSelecionado: Abacaxi (R$ %.2f)\n", ABAC);
                        printf("digite a quantidade que deseja comprar (0 para voltar): ");
                        scanf("%d", &quantAbac);

                        total = total + (quantAbac * ABAC);

                        break;
                case 2:
                        printf("\nSelecionado: Maca (R$ %.2f)\n", MACA);
                        printf("digite a quantidade que deseja comprar (0 para voltar): ");
                        scanf("%d", &quantMaca);

                        total = total + (quantMaca * MACA);
                        break;
                case 3:
                        printf("\nSelecionado: Pera (R$ %.2f)\n", PERA);
                        printf("digite a quantidade que deseja comprar (0 para voltar): ");
                        scanf("%d", &quantMaca);

                        total = total + (quantMaca * PERA);
                        break;


                default:
                printf("Opcao invalida, digite R para retornar: ");
                scanf(" %c", &voltar);
            }


        }
    printf("-------------==-------------\nPrograma encerrado\nSeu Total: R$%.2f", total);
    } else
    printf("-------------==-------------\nPrograma encerrado\nSeu Total: R$%.2f", total);

    
    /*switch(opcMenu){
        case 1:
            printf("Selecione as frutas abaixo:\n");
            printf("1. Abacaxi (R$ 5,00)\n");
            printf("2. Maca (R$ 1,00)\n");
            printf("3. Pera (R$ 4,00)\n");
            scanf("%d", &fruta);
                switch(fruta){
                    case 1:
                        printf("Selecionado: Abacaxi (R$ 5,00)\n");
                        printf("digite a quantidade que deseja comprar: ");
                        scanf("%d", &quantAbac);

                        total = quantAbac + total;

                    default:
                        printf("Erro: opcao invalida!");
                        break;
                }

        break;

        default:
            printf("Desligando o sistema...");
            break;
    }*/
}

/*
    menu inicial - aperte 1 para iniciar
    frutas - pressione tal para escolher tal fruta
    fruta selecionada - escolha a quantidade -> confirmar - total
    voltar para o menu

*/