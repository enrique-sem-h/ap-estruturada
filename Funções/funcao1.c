#include <stdio.h>

// prototipo de funcao - definicao de assinaturas
float somar(float n1, float n2);

// definicao de funcoes
float subtrair(){

}
float multiplicar(){

}
float dividir(){

}

// funcao principal
main(void){
    float numer1, numer2, res;
    printf("Digire o 1º numero: ");
    scanf("%f", &numer1);

    printf("Digire o 2º numero: ");
    scanf("%f", &numer2);

    res = somar(numer1, numer2);
    printf("\n%.2f", res);

   // return;
}

float somar(float n1, float n2){
    float result = n1 + n2;
    return result;

/*  viajei aqui  
    int cancelar = 0, x = 0;
    float resultado = 0;

    do{
        printf("Digite o %dº numero a ser somado: ", x+1);
        scanf("%f", &n[x]);
        resultado = resultado + n[x];
        printf("Digite 1 para parar de somar")
    }while (cancelar == 0 && cancelar != 1);
*/
}