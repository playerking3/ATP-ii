#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 20

int main(void)
{
    int lista[TAMANHO];
    srand(time(0));

    for(int i=0 ; i < TAMANHO ; i++){
        // limita de 0 a 99 + 1 para incluir 1 e 100
        lista[i] = (rand()%100) + 1;
    }

    for(int i = 0; i < TAMANHO; i++){
        printf("%d\n", lista[i]);
    }
    return 0;

}
