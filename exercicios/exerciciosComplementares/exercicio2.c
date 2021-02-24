#include<stdio.h>
#include<stdlib.h>

int main(){
    int numero = 1; 
    int i;

    for ( i = 0; i != 100; i++){
        numero = numero + i;
        printf("%d, ", numero);
    }
    
}