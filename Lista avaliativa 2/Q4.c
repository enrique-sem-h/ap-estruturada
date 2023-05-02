/*Com a proposta para ampliação da terceirização da mão de obra, o Ministério da Fazenda está empenhado em elaborar uma análise sobre o recebimento de salário regular através do registro em carteira profissional dos funcionários no país. Assim, elabore um algoritmo que obtenha, para cada assalariado, com carteira profissional assinada, o seu sexo M(masculino) e F(feminino) e o valor de seu salário, devendo este salário ser maior que um real (R$1,00). Seu algoritmo deverá analisar e classificar este assalariado em Acima, Igual ou Abaixo do salário mínimo. Sabe-se que o salário mínimo nacional é de R$ 1400,00. Após a leitura dos dados de cada assalariado cadastrado pelo ministério deverá ser apresentado o seu salário em reais, a classificação por extenso em relação ao salário mínimo e o sexo por extenso (Masculino ou Feminino).
A classificação em relação ao salário mínimo nacional deverá ser feita pelo sub-algoritmo classificaSalario e os resultados solicitados para cada assalariado deverão ser apresentados pelo sub-algoritmo denominado mostraClassifica. 
Você deverá fazer a entrada de dados para todos os assalariados que foram pesquisados pelo ministério, lembrando de fazer sempre a validação de todos os dados informados em sub-algoritmos específicos.   
Na solução deste problema os resultados finais de cada assalariado que participou desta pesquisa deverão ser apresentados.
Após a leitura dos dados de todos os assalariados pesquisados o seu algoritmo deverá apresentar a quantidade de assalariados com salário abaixo do salário mínimo e a quantidade assalariados com salário acima do salário mínimo
*/
#include <stdio.h>

// Sub-algoritmo que valida o sexo do assalariado
char validaSexo(){
    char sexo;
    do{
        printf("Informe o sexo do assalariado (M ou F): ");
        scanf(" %c", &sexo);
        if(sexo != 'M' && sexo != 'F'){
            printf("Sexo informado invalido! Tente novamente.\n");
        }
    }while(sexo != 'M' && sexo != 'F');
    return sexo;
}

// Sub-algoritmo que valida o salário do assalariado
float validaSalario(){
    float salario;
    do{
        printf("Informe o salario do assalariado: ");
        scanf("%f", &salario);
        if(salario <= 1.0){
            printf("Valor informado invalido! O salario deve ser maior que R$1,00. Tente novamente.\n");
        }
    }while(salario <= 1.0);
    return salario;
}

// Sub-algoritmo que classifica o salário do assalariado em relação ao salário mínimo
char* classificaSalario(float salario){
    if(salario > 1400.0){
        return "Acima do salario minimo";
    }else if(salario == 1400.0){
        return "Igual ao salario minimo";
    }else{
        return "Abaixo do salario minimo";
    }
}

// Sub-algoritmo que mostra os dados do assalariado
void mostraClassifica(char sexo, float salario, char* classificacao){
    printf("Sexo: %s\n", sexo == 'M' ? "Masculino" : "Feminino");
    printf("Salario: R$ %.2f\n", salario);
    printf("Classificacao em relacao ao salario minimo: %s\n", classificacao);
}

int main(){
    int n, abaixo = 0, acima = 0;
    char sexo;
    float salario;
    char* classificacao;

    // Leitura do número de assalariados a serem pesquisados
    printf("Informe o numero de assalariados a serem pesquisados: ");
    scanf("%d", &n);

    // Leitura dos dados de cada assalariado e apresentação dos resultados
    for(int i = 1; i <= n; i++){
        printf("\nInforme os dados do assalariado %d:\n", i);
        sexo = validaSexo();
        salario = validaSalario();
        classificacao = classificaSalario(salario);
        mostraClassifica(sexo, salario, classificacao);

        // Contagem dos assalariados acima e abaixo do salário mínimo
        if(salario > 1400.0){
            acima++;
        }else{
            abaixo++;
        }
    }

    // Apresentação do total de assalariados abaixo e acima do salário mínimo
    printf("\nTotal de assalariados abaixo do salario minimo: %d\n", abaixo);
    printf("Total de assalariados acima do salario minimo: %d\n", acima);
}
