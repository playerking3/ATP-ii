#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TAMANHO_STR 256
#define TAMANHO_LIST 3

//deve existir maneiras mais otimizadas de ordenar essa lista, porem esse é o modelo mais facil de se pensar para mim.
void ordenaStrS(char **lista){
    for(int i = 0; i < TAMANHO_LIST; i++){
        char *aux;
        for(int j = i+1; j < TAMANHO_LIST; j++){
            if(strcmp(lista[i], lista[j]) > 0){
                aux = lista[i];
                lista[i] = lista[j];
                lista[j] = aux;
            }
        }
    }
}

int main(){
    char *lista[TAMANHO_LIST];

    for(int i = 0; i < TAMANHO_LIST; i++){
        lista[i] = malloc(TAMANHO_STR*sizeof(char));
        gets(lista[i]);
    }

    ordenaStrS(lista);

    for(int i = 0; i < TAMANHO_LIST; i++){
        printf("%s\n",lista[i]);
        free(lista[i]);
    }
}
