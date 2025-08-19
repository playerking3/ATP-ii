#include<stdio.h>
#include<stdlib.h>

#define TAMANHO 8

float calcMedia(float *lista){
    float *ponteiro = lista, soma = 0;

    for (int i = 0; i<TAMANHO; i++){
            soma += *(ponteiro+i);
    }
    return (soma/TAMANHO);
}

int main(){
    float lista[TAMANHO];

    for (int i = 0; i<TAMANHO; i++){
        scanf("%f", &lista[i]);
    }

    printf("%f",calcMedia(lista));
}
