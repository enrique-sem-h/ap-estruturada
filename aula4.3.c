#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i, quant, soma = 0;

    printf("Quantos números serão digitados?\n");
    scanf("%d", &quant);

    int num[quant];

    for(i = 1; i <= quant; i++){
        printf("Digite o %dº número: ", i);
        scanf("%d", &num[i]);
        soma = soma + num[i];
    }
    printf("Soma: %d", soma);
}