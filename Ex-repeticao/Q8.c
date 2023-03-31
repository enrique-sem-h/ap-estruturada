/*Uma pesquisa sobre algumas características físicas da população de uma determinada região coletou os seguintes 
dados, referentes a cada habitante:
a) sexo (m e f);
b) cor dos olhos (a (azuis), v (verdes), c (castanhos), p (pretos));
c) cor dos cabelos (l (loiros), c (castanhos), p (pretos), r (ruivos)); d) idade em anos.
d) idade em anos.
e) valor do salário.
Para o cadastro, todos os campos deve ser validados, ou seja, para sexo, serão aceitos somente as opções ‘m’ e ‘f’; para cor de olhos, apenas as opções ‘a’, ‘v’, ‘c’ e ‘p’; para cor dos cabelos, apenas as opções ‘l’, ‘c’, ‘p’ e ‘r’; para idade, apenas valores entre 10 e 100 anos, inclusive estes e para o salário, não aceitar valores negativos.
Para indicar fim dos habitantes pesquisados, o usuário fornecerá um habitante fictício com idade igual a –1.
Ao final, o algoritmo deve determinar a porcentagem de indivíduos do sexo feminino, com idade entre 18 e 35 anos e que tenham olhos castanhos e cabelos castanhos.*/
#include <stdio.h>

int main(){
    char sexo, corOlhos, corCabelos, retorno;
    int idade, salario, validacao;
    float probab, cont, calcCont;

    retorno = 'r';
    probab = 0;
    cont = 0;
    validacao = 0;

    while(retorno == 'r' || retorno == 'R'){
        printf("Digite o sexo(M ou F): ");
        scanf(" %c", &sexo);
        printf("Digite a cor dos olhos:\nA. Azuis\nV. Verdes\nC. Castanhos\nP. Pretos\n");
        scanf(" %c", &corOlhos);
        printf("Digite a cor dos cabelos:\nL. Loiros\nC. Castanhos\nP. Pretos\nR. Ruivos\n");
        scanf(" %c", &corCabelos);
        printf("Digite a idade(entre 10 e 100): ");
        scanf("%d", &idade);
        printf("Digite o valor do salario: ");
        scanf("%d", &salario);

            if(sexo == 'f' || sexo == 'F' || sexo == 'M' || sexo == 'm')
                validacao++;
            if(corOlhos == 'A' || corOlhos == 'a' || corOlhos == 'V' || corOlhos == 'v' || corOlhos == 'C' || corOlhos == 'c' || corOlhos == 'P' || corOlhos == 'p')
                validacao++;
            if(corCabelos == 'L' || corCabelos == 'l' || corCabelos == 'C' || corCabelos == 'c' || corCabelos == 'P' || corCabelos == 'p' || corCabelos == 'R' || corCabelos == 'r')
                validacao++;
            if(idade >= 10 && idade <= 100)
                validacao++;
            if(salario >= 0)
                validacao++;
            
            if(idade == -1){
                printf("Encerrando programa...\n");
                return 0;
            }
            
            if(validacao == 5){
                validacao = 0;
                cont++;
                if((sexo == 'F' || sexo == 'f') && (idade >= 18 && idade <=35) && (corOlhos == 'c' || corOlhos == 'C') && (corCabelos == 'c' || corCabelos == 'C')){
                    probab++;
                }
                calcCont = ((probab/cont) * 100);

                printf("Porcentagem de mulheres entre 18 e 35 anos com olhos e cabelos castanhos: %.1f%%", calcCont);

                printf("\nDigite E para adicionar mais pessoas ou P para parar!\n");
                scanf(" %c", &retorno);
                if(retorno == 'E' || retorno == 'e')
                    retorno = 'r';
            } else{
                validacao = 0;
                printf("Erro!\n");
                printf("Digite R para reiniciar!\n");
                scanf(" %c", &retorno);
            }
    }
}