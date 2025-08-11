#include<stdio.h>
#define TAMANHO 6

float calculaMedia(float lista[]){
    float soma, result;
    for(int i = 0; i < TAMANHO; i++){
        soma += lista[i];
    }
    result = soma/TAMANHO;
}

int main(){
    float lista[TAMANHO];
    for(int i = 0; i < TAMANHO; i++){
        float user;
        scanf("%f", &user);
        lista[i] = user;
    }

    printf("%f", calculaMedia(lista));
    return 0;
}
