#include <stdio.h>

// float recebeVetor(){
//     float v[10];
//     printf("Digite 10 valores para o vetor\n");

//     for(int i = 0; i < 10; i++){
//         scanf("%f", &v[i]);
//     }
//     return v[10];

// }

// int main(){
//     float v[10] = recebeVetor();
//     float maior = v[0], menor = v[0];

//     for(int i = 0; i < 10; i++){
//         if(v[i] > maior){
//             maior = v[i];
//         }else if(v[i] < menor){
//             menor = v[i];
//         }
//     }
//     printf("\tSumario\nMaior valor digitado: %.2f\nMenor valor digitado: %.2f", maior, menor);
// }
int main()
{
    float v[10];
    printf("Digite 10 valores para o vetor\n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%f", &v[i]);
    }

    float maior = v[0], menor = v[0];

    for (int i = 0; i < 10; i++)
    {
        if (v[i] > maior)
        {
            maior = v[i];
        }
        else if (v[i] < menor)
        {
            menor = v[i];
        }
    }
    printf("\tSumario\nMaior valor digitado: %.2f\nMenor valor digitado: %.2f", maior, menor);
}