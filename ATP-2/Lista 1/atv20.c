#include<stdio.h>
#include<stdlib.h>

#define TAMANHO 12

void inversor(char *lista){
    char *ponteiro = lista, aux;
    // ao referenciar a ultima casa da lista, é preciso usar o TAMANHO-1 visto que o ultimo index da lista de 12 espaços é 11.
    for(int i = 0; i <= TAMANHO/2; i++){
        aux = *(ponteiro + (TAMANHO -1 - i));
        *(ponteiro + (TAMANHO -1 - i)) = *(ponteiro+i);
        *(ponteiro+i) = aux;
    }
}

int main(){
    char lista[TAMANHO];

    for (int i = 0; i<TAMANHO; i++){
        scanf(" %c", &lista[i]);
    }

    inversor(lista);

    for (int i = 0; i<TAMANHO; i++){
        printf("%c", lista[i]);
    }
}

