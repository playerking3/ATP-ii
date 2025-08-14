#include <stdio.h>

#define TAMANHO 10

int main(){
    int lista[TAMANHO], *ponteiro, soma, *ptrSoma;

    for(int i = 0; i< TAMANHO; i++){
        scanf("%d", &lista[i]);
    }

    ponteiro = &lista;
    ptrSoma = &soma;

    for(int i = 0; i < TAMANHO; i++){
        *ptrSoma += *(ponteiro+i);
    }

    printf("%d", *ptrSoma);

    return 0;
}


