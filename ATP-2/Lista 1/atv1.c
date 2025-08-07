#include <stdio.h>
#define TAMANHO 10

void lerLista(int lista[]){
    for(int i = 0; i < TAMANHO; i++){
        printf("%d\n", lista[i]);
    }
}

int main(){
    int lista[TAMANHO];

    //inicialização da lista
    for(int i = 0; i < TAMANHO; i++){
        lista[i] = i;
    }

    lerLista(lista);
    return 0;
}
