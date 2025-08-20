#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TAMANHO 256

int buscaPalindromo(char *texto){
    int strFinal = strlen(texto);
    for(int i = 0; i < strFinal-1; i++){
        if(texto[i]!= texto[strFinal-1-i]){
            return 0;
        }
    }
    return 1;
}

int main(){
    char texto[TAMANHO];
    int resultado;
    gets(texto);

    resultado = buscaPalindromo(texto);
    if (resultado == 0){
        printf("Nao eh palindromo.");
    }else{
        printf("Eh palindromo");
    }
    return 0;
}
