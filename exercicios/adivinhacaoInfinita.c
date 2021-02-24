#include<stdio.h>
int main(){
//Tela de boas vindas ao game
    printf("*-----------------------------------*\n");
    printf("* Bem Vindo ao Jogo de Adivinhacao! *\n");
    printf("*-----------------------------------*\n");

//Declarar variaveis
    int numSecreto, tentativas=1, chute, acertou=0;
    numSecreto = 25;
    while (!acertou){
        printf("\nQual e o seu %do chute?\n", tentativas);
        scanf("%d", &chute);
        printf("\nVoce chutou o numero %d\n", chute);

//Tratamento de numeros negativos
        if (chute < 0){
            printf("\nnão pode usar numeros negativos\n");
            continue;
        }

//Verificando numeros 
        int certo, maior;
        certo = chute == numSecreto;
        maior = chute > numSecreto;
        if (certo){
            printf("\nVOCE ACERTOU!!!!!!!!/n voce utilizou %d tentativas\n", tentativas);
            acertou = 1;
        }else if (maior){
            printf("\n):  Voce errou  :(\nO numero %d, e maior que o numero secreto\nTente Novamente\n", chute);
        }else{
            printf("\n):  Voce errou  :(\nO numero %d, e menor que o numero secreto\nTente Novamente\n", chute);
        }
    tentativas++;
    }

    printf("\n\n**                 Fim de jogo                **\n** Obrigado por jogar o meu primeiro jogo !!! **\n\n");
}