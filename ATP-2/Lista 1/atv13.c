#include <stdio.h>

#define TAMANHO 5

int main(){
    int lista[TAMANHO], *ponteiro;

    for(int i = 0; i< TAMANHO; i++){
        scanf("%d", &lista[i]);
    }

    ponteiro = &lista;

    for(int i = 0; i < TAMANHO; i++){
        printf("%d", *(ponteiro+i));
    }

    return 0;
}
