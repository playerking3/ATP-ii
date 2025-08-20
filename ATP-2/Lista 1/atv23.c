#include<stdio.h>
#include<stdlib.h>

#define TAMANHO 10

int buscaPalindromo(int *lista){
    for(int i = 0; i < (TAMANHO/2); i++){
        if(lista[i] != lista[TAMANHO-1-i]){
            return 0;
        }
    }
    return 1;
}

int main(){
    int lista[TAMANHO], resposta;
    for (int i = 0; i < TAMANHO; i++){
        scanf("%d", &lista[i]);
    }
    resposta = buscaPalindromo(lista);
    if (resposta == 0){
        printf("Nao eh palindromo.");
    }else{
        printf("Eh palindromo");
    }
    return 0;
}
