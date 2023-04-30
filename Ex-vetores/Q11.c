#include <stdio.h>

int main()
{
    int v[10], negativos = 0, somaPos = 0;

    for (int i = 0; i < 10; i++){
        scanf("%d", &v[i]);
        if (v[i] < 0){
            negativos++;
        }else if (v[i] > 0){
            somaPos += v[i];
        }
    }

    printf("Valores digitados:\n");

    for (int i = 0; i < 10; i++){
    printf("%d\n", v[i]);
    }
        printf("Quantidade de valores negativos: %d\nSoma dos positivos: %d", negativos, somaPos);
}