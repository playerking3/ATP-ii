#include<stdio.h>

#define TAMANHO 5

void lerInverso(int lista[]){
    for(int i = 1; i <= TAMANHO; i++){
        printf("%d\n", lista[TAMANHO-i]);
    }
}

int main(){
    int lista[TAMANHO], user;
    for(int i = 0; i < TAMANHO; i++){
        scanf("%d", &user);
        lista[i] = user;
    }

    lerInverso(lista);

    return 0;
}

