#include<stdio.h>
#define TAMANHO 5

void lerLista(char lista[]){
    for(int i = 0; i < TAMANHO; i++){
        printf("%c", lista[i]);
    }
}

int main(){
    char lista[TAMANHO];

    //inicialização da lista
    for(int i = 0; i < TAMANHO; i++){
        lista[i] =  97 + i;
    }

    lerLista(lista);
    return 0;
}
