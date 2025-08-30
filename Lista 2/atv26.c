#include<stdio.h>
#include<stdlib.h>

#define COLS 3
#define LINS 3

int verificaEsparsa(int **m1){
    int contador = 0;
    for(int i = 0; i < COLS; i++){
        for(int j = 0; j < LINS; j++){
            if(m1[i][j] == 0){
                contador+=1;
            }
        }
    }
    // verifica se a maioria(mais da metade) é zero
    if(contador > (LINS*COLS)/2){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int **matriz1;

    matriz1 = malloc(COLS * sizeof(int*));

    for(int i = 0; i < COLS; i++){
        matriz1[i] = malloc(LINS * sizeof(int));;
        for(int j = 0; j < LINS; j++){
            scanf("%d", &matriz1[i][j]);
        }
    }

    if(verificaEsparsa(matriz1)== 1){
        printf("eh esparsa");
    }else{
        printf("nao eh esparsa");
    }

    for(int i = 0; i < COLS; i++){
        free(matriz1[i]);
    }
    free(matriz1);
    return 0;
}

