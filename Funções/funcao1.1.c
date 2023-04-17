#include <stdio.h>

float media(float v1, float v2, float v3);

void situacaoAluno(float media){
    if(media >= 7){
        printf("Aprovado");
    }else if(media < 4){
        printf("Reprovado");
    }else
        printf("Recuperacao");
}

int main(){
    float n1, n2, n3, media3;
    printf("Digite a 1º nota: ");
    scanf("%f", &n1);

    printf("Digite a 2º nota: ");
    scanf("%f", &n2);

    printf("Digite a 3º nota: ");
    scanf("%f", &n3);

    media3 = media(n1, n2, n3);
    printf("\n%.2f\n", media3);

    // chamar outra funcao
    situacaoAluno(media3);

}

float media(float v1, float v2, float v3){
    float result = (v1 + v2 + v3) / 3;
    return result;
}
