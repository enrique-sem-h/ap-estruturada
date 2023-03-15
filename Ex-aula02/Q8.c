/*Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês, mais uma 
comissão também fixa para cada carro vendido e mais 5% do valor das vendas por ele efetuadas. Escrever um 
algoritmo que leia o número de carros por ele vendidos, o valor total de suas vendas, o salário fixo e o 
valor que ele recebe por carro vendido. Calcule e escreva o salário final do vendedor.*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int numCarros;
    float comissao, valVendas, salario;
    
    printf("Salário fixo: ");
    scanf("%f", &salario);
    
    printf("Número de carros vendidos: ");
    scanf("%d", &numCarros);

    printf("Comissão: ");
    scanf("%f", &comissao);

    printf("Valor das vendas: ");
    scanf("%f", &valVendas);

    system("clear");

    printf("Salário: %.2f\nComissão total: %.2f\nComissão de vendas: %.2f\nTotal: %.2f", salario, (numCarros * comissao), (valVendas * 0.05), salario + (numCarros * comissao) + (valVendas * 0.05));
    




}