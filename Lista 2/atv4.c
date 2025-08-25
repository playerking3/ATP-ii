#include<stdio.h>
#include<stdlib.h>

#define COLS 3
#define LINS 3

void multMatriz(int **m1,int **m2,int **result){
    for(int i = 0; i < LINS; i++){
        for(int j = 0; j < LINS; j++){
            result[i][j]=0;
            for(int k = 0; k < COLS; k++){
                result[i][j] += m1[i][k]*m2[k][j];
            }
        }
    }
}

int main(){
    int **matriz1, **matriz2, **result;

    matriz1 = malloc(COLS * sizeof(int*));
    matriz2 = malloc(COLS * sizeof(int*));
    result = malloc(COLS * sizeof(int*));

    for(int i = 0; i < COLS; i++){
        matriz1[i] = malloc(LINS * sizeof(int));
        matriz2[i] = malloc(LINS * sizeof(int));
        result[i] = malloc(LINS * sizeof(int));
        for(int j = 0; j < LINS; j++){
            scanf("%d %d", &matriz1[i][j], &matriz2[i][j]);
        }
    }

    multMatriz(matriz1, matriz2, result);

    for(int i = 0; i < COLS; i++){
        for(int j = 0; j < LINS; j++){
            printf(" %d ", result[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < COLS; i++){
        free(matriz1[i]);
        free(matriz2[i]);
        free(result[i]);
    }
    free(matriz1);
    free(matriz2);
    free(result);
    return 0;
}
