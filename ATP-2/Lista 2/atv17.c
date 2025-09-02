#include<stdio.h>
#include<stdlib.h>

#define COLS 3
#define LINS 3

//OBS: eu sei que o método mais otimizado seria ordenar a matriz e usar busca binária, porem não está especificado o método de busca e ainda tem mais 40 atividades pra serem feitas.
void findPosicao(int **m1, int ref){
    for(int i = 0; i < COLS; i++){
        for(int j = 0; j < LINS; j++){
            if(m1[i][j] == ref){
                printf("Coluna: %d\nLinha: %d\n",i,j);
            }
        }
    }
}

int main(){
    int **matriz1, item;

    matriz1 = malloc(COLS * sizeof(int*));

    for(int i = 0; i < COLS; i++){
        matriz1[i] = malloc(LINS * sizeof(int));;
        for(int j = 0; j < LINS; j++){
            scanf("%d", &matriz1[i][j]);
        }
    }
    scanf("%d", &item);

    findPosicao(matriz1, item);

    for(int i = 0; i < COLS; i++){
        free(matriz1[i]);
    }
    free(matriz1);
    return 0;
}





