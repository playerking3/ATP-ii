#include<stdio.h>
#include<stdlib.h>

#define COLS 3
#define LINS 2

void transpMatriz(int **m1, int **transposta){
    for(int i = 0; i < COLS; i++){
        for(int j = 0; j < LINS; j++){
            transposta[j][i] = m1[i][j];
        }
    }
}

int main(){
    int **matriz1, **matriz2;

    matriz1 = malloc(COLS * sizeof(int*));
    matriz2 = malloc(LINS * sizeof(int*));

    for(int i = 0; i < COLS; i++){
        matriz1[i] = malloc(LINS * sizeof(int));
        for(int j = 0; j < LINS; j++){
            scanf("%d", &matriz1[i][j]);
        }
    }
    for(int i = 0; i < LINS; i++){
        matriz2[i] = malloc(COLS * sizeof(int));
    }

    transpMatriz(matriz1, matriz2);
    for(int i = 0; i < LINS; i++){
        for(int j = 0; j < COLS; j++){
            printf(" %d ", matriz2[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < COLS; i++){
        free(matriz1[i]);

    }
    for(int i = 0; i < LINS; i++){
            free(matriz2[i]);
    }
    free(matriz1);
    free(matriz2);
    return 0;
}
