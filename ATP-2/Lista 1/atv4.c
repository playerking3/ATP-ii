#include<stdio.h>

#define TAMANHO 8

int buscaFib(int numero){
    int fib = 0;
    //caso base
    if(numero <= 0){
        return 0;
    }else if(numero == 1){
        return 1;
    }else{
        fib = buscaFib(numero-1) + buscaFib(numero-2);
        return fib;
    }
}

void lerLista(float lista[]){
    for(int i = 0; i < TAMANHO; i++){
        printf("%f\n", lista[i]);
    }
}

int main(){
    float lista[TAMANHO];

    for(int i = 0; i < TAMANHO; i++){
        lista[i] = (float)buscaFib(i);
    }

    lerLista(lista);
    return 0;
}
