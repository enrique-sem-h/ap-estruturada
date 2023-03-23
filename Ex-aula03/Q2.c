/*Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui uma taxa diferente de 
imposto sobre o produto. Faça um programa em que o usuário entre com o valor e o estado de destino do produto
 e o programa retorne o preço final do produto acrescido do imposto do estado em que ele será vendido. Se o 
 estado digitado não for válido, mostrará uma mensagem de erro. */
 #include <stdio.h>
 #include <stdlib.h>
 #include <locale.h>

 int main(){
    setlocale(LC_ALL, "portuguese");
    char estado[20], x;
    float imposto, preco;

    printf("Digite o estado: ");
   // fgets(estado, 20, stdin);
    scanf("%[^\n]s", &estado);
    fflush(stdin);

    printf("Informe o valor do produto: R$");
    scanf("%f", &preco);

    printf("Informe o imposto cobrado por %s: %%", estado);
    scanf("%f", &imposto);

    system("clear");

    printf("Estado: %s\n", estado);
    printf("Valor do produto: %.2f\n", preco);
    printf("Imposto: %.2f%%\n", imposto);
    printf("Valor final: %.2f\n", preco + (preco * (imposto / 100)));
    

 }