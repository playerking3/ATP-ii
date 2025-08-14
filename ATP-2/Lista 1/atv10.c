#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 10

float calculaMedia(int lista[]){
    int soma = 0;
    float result;
    for(int i = 0; i < TAMANHO; i++){
        soma += lista[i];
    }
    result = soma/TAMANHO;
    return result;
}

int main(void)
{
    int lista[TAMANHO];
    srand(time(0));

    for(int i=0 ; i < TAMANHO ; i++){
        // limita de 0 a 100 + 50 para ficar entre 50 e 150
        lista[i] = (rand()%101) + 50;
    }

    printf("%f", calculaMedia(lista));
    return 0;

}

