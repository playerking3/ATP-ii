#include<stdio.h>
#include<stdlib.h>

#define TAMANHO 5

int verificaNegativo(int *lista){
    int contador = 0;
    for(int i = 0; i < -TAMANHO; i++){
        if(lista[i] < 0){
            contador++;
        }
    }
    return contador;
}

int main(){
    int lista[TAMANHO], resposta;
    for (int i = 0; i < TAMANHO; i++){
        scanf("%d", &lista[i]);
    }

    resposta = verificaNegativo(lista);
    printf("existem %d numeros negativos na lista", resposta);
    return 0;
}
