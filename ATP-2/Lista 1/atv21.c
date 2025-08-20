#include<stdio.h>
#include<stdlib.h>

#define TAMANHO 10

int achaMaior(int *lista){
    int maior = lista[0];

    for (int i = 1; i < TAMANHO; i++){
        if(lista[i] > maior){
            maior =lista[i];
        }
    }
    return maior;
}

int achaMenor(int *lista){
    int menor = lista[0];

    for (int i = 1; i < TAMANHO; i++){
        if(lista[i]<menor){
            menor = lista[i];
        }
    }
    return menor;
}

int main(){
    int lista[TAMANHO];
    for (int i = 0; i < TAMANHO; i++){
        scanf("%d", &lista[i]);
    }

    printf("Maior: %d\nMenor: %d\n", achaMaior(lista), achaMenor(lista));
    return 0;
}
