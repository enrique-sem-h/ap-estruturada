/*Você foi contratado para desenvolver um algoritmo para controlar as informações de um campeonato de futebol de salão. Sabe-se que no campeonato serão inscritos um mínimo de 3 times e um máximo de 9 times e que cada time deve inscrever no mínimo 6 jogadores e no máximo onze jogadores entre reservas e titulares. 
Faça um algoritmo que para cada time inscrito obtenha a idade e o peso de cada jogador e apresente as seguintes informações:
Para cada time:
Média das idades dos jogadores time;
Média do peso dos jogadores acima de 25 anos;
Para todos os jogadores inscritos no campeonato:
Quantidade de jogadores menores de idade (18 anos);
Quantidade e porcentagem de jogadores com mais de 80 quilos 
*/
#include <stdio.h>

#define MINTIMES 1
#define MAXTIMES 9
#define MINJOGADORES 1
#define MAXJOGADORES 11

int main(){
    int qntTimes;

    do{
    printf("Digite a quantidade de times: ");
    scanf("%d", &qntTimes);
    if(qntTimes < MINTIMES || qntTimes > MAXTIMES)
        printf("Erro, quantidade invalida\n");
    }while(qntTimes < MINTIMES || qntTimes > MAXTIMES);

    int time[qntTimes], qntJogadores = 11, arrayJogadores[qntTimes], idade[qntTimes][qntJogadores], peso[qntTimes][qntJogadores];
    float mediaIdadeJogadores[qntTimes], mediaPesoJogadores[qntTimes];

    for(int i = 0; i < qntTimes; i++){
    do{
    printf("Digite a quantidade de jogadores para o time %d: ", i + 1);
    scanf("%d", &qntJogadores);
    arrayJogadores[i] = qntJogadores;
    if(qntJogadores < MINJOGADORES || qntJogadores > MAXJOGADORES)
        printf("Erro, quantidade invalida\n");
    }while(qntJogadores < MINJOGADORES || qntJogadores > MAXJOGADORES);
    for(int x = 0; x < qntJogadores; x++){
        printf("Digite a idade do %dº jogador: ", x + 1);
        scanf("%d", &idade[i][x]);
        printf("Digite o peso do %dº jogador: ", x + 1);
        scanf("%d", &peso[i][x]);
    }
    }

    for(int i = 0; i < qntTimes; i++){
        mediaIdadeJogadores[i] = 0;
        mediaPesoJogadores[i] = 0;
        for(int x = 0; x < arrayJogadores[i]; x++){
            mediaIdadeJogadores[i] += idade[i][x];
            mediaPesoJogadores[i] += peso[i][x];
        }
        mediaIdadeJogadores[i] = mediaIdadeJogadores[i] / arrayJogadores[i];
        mediaPesoJogadores[i] = mediaPesoJogadores[i] / arrayJogadores[i];
    }

    for(int i = 0; i < qntTimes; i++){
        printf("\tTime %d\n", i + 1);
        printf("Media idade: %.2f\n", mediaIdadeJogadores[i]);
        printf("Media peso: %.2f\n", mediaPesoJogadores[i]);
    }

    float idade18 = 0, peso80 = 0, totalJogadores = 0;

    for(int i = 0; i < qntTimes; i++){
        for(int x = 0; x < arrayJogadores[i]; x++){
            if(idade[i][x] < 18){
                idade18++;
            }
            if(peso[i][x] > 80){
                peso80++;
            }
        }
    totalJogadores += arrayJogadores[i];
    }

    printf("\tGeral:\n");
    printf("Menores de 18: %.2f\n", idade18);
    printf("Mais pesados que 80kg: %.2f - %.2f%%\n", peso80, (peso80 / totalJogadores) * 100);


}

