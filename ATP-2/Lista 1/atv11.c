#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 15

int findMaior(int lista[]){
    int maior = lista[0];
    for (int i = 1; i < TAMANHO; i++){
        if(maior<lista[i]){
            maior = lista[i];
        }
    }
    return maior;
}

int main(){
    int lista[TAMANHO];
    srand(time(0));

    for(int i=0 ; i < TAMANHO ; i++){
        lista[i] = rand()%51;
    }

    printf("%d", findMaior(lista));
    return 0;
}
