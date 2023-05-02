/*Em uma fábrica de peças, o salário base dos operários é de R$ 600,00. Além do salário base, cada operário recebe um adicional de produtividade baseado na quantidade de peças fabricadas por mês. Este adicional é pago de acordo com o seguinte critério:
Se o número de peças for inferior ou igual a 50, não existe adicional de produtividade;
Se o número de peças for superior a 50 e inferior ou igual a 80, o adicional de produtividade será de R$ 0,50 para cada peça fabricada acima de 50;
Se o número de peças for superior a 80, o adicional de produtividade será de R$ 0,50 para cada peça fabricada acima de 50 até 80 e de R$ 0,75 por peça fabricada acima das 80.
Elabore um algoritmo para solicitar de cada funcionário a quantidade de peças fabricadas naquele mês e apresentar o seu salário. Isto deve se repetir para todos os funcionários da empresa, onde o usuário não sabe, inicialmente, quantos funcionários existem nesta empresa, ou seja, o número de funcionários não será fornecido. 
Sua solução proposta deverá possuir as lógicas bem definidas que sejam necessárias a implementação separada em sub-algoritmos específicos, devendo pelo menos os seguintes sub-algoritmos:
validaQuantidade que validará o número de peças fabricadas por cada funcionário;
calculaSalario que efetuará o cálculo do salário total para cada funcionário.
O resultado final será mostrado ao usuário por meio de um procedimento (mostraFinal).
*/
#include <stdio.h>

int validaQuantidade(){
    int qntPecas;

    printf("Digite a quantidade de pecas produzidas: ");
    scanf("%d", &qntPecas);

    return qntPecas;
}

float calculaSalario(int qntPecas){
    float salario = 600;

    if(qntPecas <= 50){
        return salario;
    }else if(qntPecas > 50 && qntPecas <= 80){
        return salario += (qntPecas - 50) * 0.5;
    }else if(qntPecas > 80){
        return salario += (30 * 0.5) + ((qntPecas - 80) * 0.75);
    }
}

void mostraFinal(int qntPecas, float salario){
    printf("\tResultado das operacoes:\n");
    printf("Quantidade de pecas produzidas: %d\n", qntPecas);
    printf("Salario final: R$%.2f", salario);
}

int main(){
    char index = 'r';

    while(index != 'q' || index != 'Q'){
    int qntPecas = validaQuantidade();
    float salario = calculaSalario(qntPecas);

    mostraFinal(qntPecas, salario);
    printf("\nDigite q para sair ou r para reiniciar");
    scanf("%c", &index);
    if(index != 'r' || index != 'R' || index != 'q' || index != 'Q')
        printf("Erro, fechando programa");
    }
}