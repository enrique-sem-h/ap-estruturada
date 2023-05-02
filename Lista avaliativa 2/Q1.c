/*Durante uma corrida de automóveis com N voltas de duração foram anotados para um piloto, na ordem, os tempos registrados em cada volta. Fazer um programa em C para ler os tempos das N voltas, calcular e imprimir: 
• melhor tempo; 
• a volta em que o melhor tempo ocorreu; 
• tempo médio das N voltas
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int qntLaps; //

    printf("Digite a quantidade de voltas: "); // Defining quantity of laps
    scanf("%d", &qntLaps); //
    
    system("clear"); // clears the console

    int lap[qntLaps], bestLap; //
    float time[qntLaps], bestTime, avgTime = 0; // defining other variables, most of them based on the quantity of laps

    lap[0] = 0; //

    for(int i = 0; i < qntLaps; i++){ // inserting values for lap and time arrays
        printf("Digite o tempo da %dª volta (em minutos): ", i + 1);
        scanf("%f", &time[i]);
        if(i > 0){
        lap[i] = lap[i - 1] + 1;
        }
    }

    bestTime = time[0];

    for(int i = 0; i < qntLaps; i++){ // iterating over arrays for definition of best time and best lap
            if(bestTime > time[i]){
                bestTime = time[i];
                bestLap = lap[i];
            }
        }

    for(int i = 0; i < qntLaps; i++){ // defining the average of times
        avgTime+= time[i];
    }

    avgTime = avgTime / qntLaps; // calculating the average of times
    system("clear"); // clears the console

    printf("\tSumario:\n"); // summary
    printf("Melhor tempo: %dª volta - %.2f min\n", bestLap, bestTime);
    printf("Media de tempo: %.2f min\n", avgTime);


}