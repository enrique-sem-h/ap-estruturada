#include <stdio.h>

int main() {
    int v[20];
    int unicos[20];
    int nUnicos = 0;

    printf("Digite os numeros do vetor:\n");
    for(int i = 0; i < 20; i++){
        scanf("%d", &v[i]);
    }

    for(int i = 0; i < 20; i++){
        int repetido = 0;
        for(int j = 0; j < nUnicos; j++){
            if(v[i] == unicos[j]){
                repetido = 1;
                break;
            }
        }
        if(!repetido){
            unicos[nUnicos] = v[i];
            nUnicos++;
        }
    }

    printf("Elementos do vetor sem repeticao:\n");
    for(int i = 0; i < nUnicos; i++){
        printf("%d ", unicos[i]);
    }

    return 0;
}
