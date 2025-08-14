#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 12

int contaNegativo(int lista[]){
    int contador = 0;
    for(int i = 0; i < TAMANHO; i++){
        if(lista[i]<0){
            contador++;
        }
    }
    return contador;
}

int main(){
    int lista[TAMANHO];
    srand(time(0));

    for(int i=0 ; i < TAMANHO ; i++){
        lista[i] = (rand()%41) -20;
    }

    printf("%d", contaNegativo(lista));
    return 0;
}
