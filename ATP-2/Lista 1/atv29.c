#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TAMANHO_STR 256
#define TAMANHO_LIST 5

int main(){
    char *lista[TAMANHO_LIST];

    for(int i = 0; i < TAMANHO_LIST; i++){
        lista[i] = malloc(TAMANHO_STR*sizeof(char));
        gets(lista[i]);
    }

    for(int i = 0; i < TAMANHO_LIST; i++){
        printf("%s\n",lista[i]);
        free(lista[i]);
    }
    return 0;
}
