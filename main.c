#include <stdio.h>
#include <stdlib.h>

/*
==================================================================================

                            CALCULADOR DE MEDIA PONDERADA

==================================================================================
Empresa: Guizinho's LTDA.
Equipe de Programadores:
               Gabriel Barbosa de Arruda
               Vinícius Santana Azambuja
               ----sem integrante-------
               ----sem integrante-------
Curso: Tecnologia de Análise e desenvolvimento de sistemas
Data de início do projeto: 19/08/2022
----------------------------------------------------------------------------------
Descrição do Programa:
		Programa feito para ajudar professores com as notas e medias de seus alunos.
		Esse programa faz cálculos de média ponderada e deixa o professor definir as
		médias minimas e maximas para os alunos atingirem
Versão do programa: 1.0
Melhorias da versão:Primeira versão
Data de lançamento da versão: 01/09/2022
==================================================================================
*/
int main()
{
    //declarando variaveis e vetores
    float notas[4], pesos[4], med, medpas, medex;
    int i, cont;
    char nome[40];
//contador
    cont=1;
//apresentação
printf("--------------------------------------------------------------------------");
printf("\n------------------------------BEM VINDO-----------------------------------");
printf("\n--------------------PROGRAMA: CALCULADOR DE MEDIA PONDERADA---------------");
printf("\n--------------------------------------------------------------------------");

//PEDINDO NOME DO ALUNO
printf("\nDigite o nome do aluno: ");
gets(nome);


//estrutura para o professor colocar a media que quiser
for(i = 0; i<1; i++){
    printf("Escreva a media para o aluno ser aprovado: ");
    scanf("%f", &medpas);

    //estrutura para parar o programa se a media for inválida
     if (0>=medpas||medpas>10){
        printf("Valor da media invalido\nPorfavor colocar numeros maiores que zero e menores que dez\n-------------------------------------\n");
        break;
     }


    printf("Escreva a media minima para o aluno ficar de exame: ");
    scanf("%f", &medex);

    //estrutura para parar o programa se a media for inválida
     if (0>=medex||medex>10){
        printf("Valor da media invalido\nPorfavor colocar numeros maiores que zero e menores que dez\n-------------------------------------\n");
        break;

    }
    printf("-------------------------------------\n");
    //Estrutura para colocar as notas
    for(i = 0; i<4; i++){
    printf("Informe o valor da %dª nota: ", cont);
    scanf("%f", &notas[i]);


//estrutura if para parar o programa se a nota for inválida
    if (notas[i]>=11||notas[i]<0){
            printf("Valor de nota digitado invalido\nPorfavor colocar notas entre 0 e 10\n");
            break;

        }
//estrutura para colocar os pesos
    printf("Informe o valor do %dº peso: ", cont);
    scanf("%f", &pesos[i]);
    printf("-------------------------------------\n");

//estruturas if para parar o programa se o peso for invalido
        if (pesos[i]<0){
            printf("Valor de peso da nota digitado invalido\nPorfavor colocar notas entre 0 e 10\n");
            break;
        }
//contador somando +1 a cada uso
    cont++;


    }
}

//fazendo a média ponderada
med=((notas[0]*pesos[0])+(notas[1]*pesos[1])+(notas[2]*pesos[2])+(notas[3]*pesos[3]))/(pesos[0]+pesos[1]+pesos[2]+pesos[3]);


//mostrando a média
printf("\n\n------------- MEDIA -------------------");
printf("\n\nA media do(a) aluno(a) %s foi de: %f", nome, med);


//ESTRUTURA PARA ALUNOS APROVADOS, DE EXAME E REPROVADOS
if(med>=medex && med>=medpas){
        printf("\n\n-----------ALUNO APROVADO--------------");
}
else{
    if(med>=medex && med<medpas){
        printf("\n\n-----------ALUNO DE EXAME--------------");
       }
    else{
        if(med<medex && med<medpas){
        printf("\n\n-----------ALUNO REPROVADO--------------");
        }
    }
}

    return 0;
    }

