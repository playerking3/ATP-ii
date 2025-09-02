#include<stdio.h>
#include<stdlib.h>

#define COLS 3
#define LINS 3

void rotacionaMatriz(int **m1,int **result){
    for(int i = 0; i < COLS; i++){
        for(int j = 0; j < LINS; j++){
            result[COLS -1 -j][i] = m1[i][j];
        }
    }
}

int main(){
    int **matriz1, **matriz2;

    matriz1 = malloc(COLS * sizeof(int*));
    matriz2 = malloc(COLS * sizeof(int*));

    for(int i = 0; i < COLS; i++){
        matriz1[i] = malloc(LINS * sizeof(int));
        matriz2[i] = malloc(LINS * sizeof(int));
        for(int j = 0; j < LINS; j++){
            scanf("%d", &matriz1[i][j]);
        }
    }
    rotacionaMatriz(matriz1, matriz2);
    for(int i = 0; i < COLS; i++){
        for(int j = 0; j < LINS; j++){
            printf(" %d ", matriz2[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < COLS; i++){
        free(matriz1[i]);
        free(matriz2[i]);
    }
    free(matriz1);
    free(matriz2);
    return 0;
}
