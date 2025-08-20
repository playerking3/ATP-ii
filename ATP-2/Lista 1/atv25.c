#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TAMANHO 256
#define TAM_LINHA 40

int buscaPalavras(char *texto){
    int palavras = 1;
    for(int i = 0; i < strlen(texto); i++){
        if(texto[i] == ' '){
            palavras +=1;
        }
    }
    return palavras;
}

int main(){
    char texto[TAMANHO];
    int letras = 0, palavras = 0, linhas = 0;
    fgets(texto, TAMANHO, stdin);
    palavras = buscaPalavras(texto);
    letras = strlen(texto) - palavras; // para tirar os espaços da contagem de letras
    linhas = (letras/TAM_LINHA)+1;
    printf("Letras: %d\nPalavras: %d\nLinhas: %d\n", letras, palavras, linhas);
    return 0;
}
