#include<stdio.h>
#define TAMANHO 10

int somador(int lista[]){
    int soma = 0;
    for(int i = 0; i < TAMANHO; i++){
        soma += lista[i];
    }
    return soma;
}

int main(){
    int lista[TAMANHO];
    for(int i = 0; i < TAMANHO; i++){
        int user;
        scanf("%d", &user);
        lista[i] = user;
    }

    printf("%d", somador(lista));
    return 0;
}
