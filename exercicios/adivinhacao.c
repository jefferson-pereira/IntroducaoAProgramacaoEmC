#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define numTentativa 3

int main(){
//Tela de boas vindas ao game
    printf("*-----------------------------------*\n");
    printf("* Bem Vindo ao Jogo de Adivinhacao! *\n");
    printf("*-----------------------------------*\n");

//variaveis globais
    int numSecreto;
    int chute, i;
    double pontos = 1000;
    double pontosPerdidos;

//Indicando o numero a ser adivinhado
    srand(time(0));
    numSecreto = rand() % 50;

   for (i = 1; i <= numTentativa; i++){
//pegando os valores de chute
        printf("Qual e o seu %do chute?\n", i);
        scanf("%d", &chute);
        printf("Esse e o seu chute %d!\n", chute);

//tratamento para numeros negativos
        if(chute < 0){
            printf("nao pode usar numeros negativos\n");
            i--;
            continue;
        }
        
//executando os testes
        int acertou = chute == numSecreto;
        int maior = chute > numSecreto;
        if(acertou){
            printf("voce acertou parabens!!!!!!!\nEis a sua pontuação %.2f", pontos);
            break;
        }else if(maior){
            printf("Tente denovo!\nSeu chute foi maior que o numero secreto\n\n");    
        }else{
            printf("Tente denovo!\nSeu chute foi menor que o numero secreto\n\n");   
        }

//Calculando a quantidade de pontos a ser contabilizado
        pontosPerdidos = abs(chute - numSecreto)/2.0;
        pontos = pontos - pontosPerdidos;  
        if(i == 3){
            printf("\n\nO Número secreto é %d\n\n", numSecreto);
        }
    }
    printf("\n\n**                 Fim de jogo                **\n** Obrigado por jogar o meu primeiro jogo !!! **\n\n");
}