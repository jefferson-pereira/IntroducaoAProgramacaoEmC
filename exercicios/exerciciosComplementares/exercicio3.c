#include<stdlib.h>
#include<stdio.h>

int main (){
    int numero;
    int i;
    int multiplicacao;
    
    scanf("%d", &numero);

    for ( i = 1; i <= 10; i++){
        multiplicacao = numero * i;
        printf("%d X %d = %d\n", numero, i, multiplicacao );
    }
    
}