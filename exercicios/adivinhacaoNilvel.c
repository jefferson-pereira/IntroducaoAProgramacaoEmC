#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define pontuacaoMaxima 1000
#define facil 20
#define normal 10
#define dificil 3

int main(){
//Tela de boas vindas ao game
printf("\n\n");
printf("                    / \\                                               \n");
printf("                 P /___\\ P                                            \n");
printf("                /_\\_|_|_/_\\     *-----------------------------------*\n");
printf("            n_n | ||. .|| | n_n * Bem Vindo ao Jogo de Adivinhacao! *  \n");
printf("            |_|_|nnnn nnnn|_|_| *-----------------------------------*  \n");
printf("            |\\'\\' ||___|| \\'\\'|                                    \n");
printf("            |_____|'___'|_____|                                        \n");
printf("                 \\__|_|__/                                            \n");
printf("\n\n");
    //printf("*-----------------------------------*\n");
    //printf("* Bem Vindo ao Jogo de Adivinhacao! *\n");
    //printf("*-----------------------------------*\n");

//variaveis globais
    int numTentativa;
    int numSecreto;
    int chute, i;
    int nivel;
    int numeroMaximo;
    double pontos;
    double pontosPerdidos;
    
//Niveis de dificuldade
    printf("\nDefina qual é o numero maximo que irá adivinhar");
    scanf("%d", &numeroMaximo);
    printf("\nEscolha 1 dos níveis de dificuldade!!!\n     Digite (1) para nivel fácil     \n     Digite (2) para nivel Normal     \n     Digite (3) para nivel dificil    \n\n");
    scanf("%d", &nivel);

    switch (nivel){
    case 1:
        numTentativa = facil;
        break;
    case 2:
        numTentativa = normal;
        break;
    default:
        numTentativa = dificil;
        break;
    }  
     
//Indicando o numero a ser adivinhado
    srand(time(0));
    numSecreto = rand() % numeroMaximo;

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
        printf("             OOOOOOOOOOO               \n");
        printf("         OOOOOOOOOOOOOOOOOOO           \n");
        printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
        printf("    OOOOOO      OOOOO      OOOOOO      \n");
        printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
        printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
        printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
        printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
        printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
        printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
        printf("         OOOOOO         OOOOOO         \n");
        printf("             OOOOOOOOOOOO              \n");
        printf("voce acertou parabens!!!!!!!\nEis a sua pontuação %.2f", pontos);

            break;
        }else if(maior){
            printf("Tente denovo!\nSeu chute foi maior que o numero secreto\n\n");    
        }else{
            printf("Tente denovo!\nSeu chute foi menor que o numero secreto\n\n");   
        }

//Calculando a quantidade de pontos a ser contabilizado
        pontosPerdidos = abs(chute - numSecreto)/2.0;
        pontos = pontuacaoMaxima - pontosPerdidos;  
        if(i == numTentativa){
            printf("       \\|/ ____ \\|/    \n");   
            printf("        @~/ ,. \\~@      \n");   
            printf("       /_( \\__/ )_\\    \n");   
            printf("          \\__U_/        \n");
            printf("\nVocê perdeu! Tente novamente!\n");
            printf("O Número secreto é %d\n\n", numSecreto);
        }
    }
    printf("\n\n**                 Fim de jogo                **\n** Obrigado por jogar o meu primeiro jogo !!! **\n\n");
}