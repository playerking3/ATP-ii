#include<stdio.h>
#include<stdlib.h>

//PARA FUNCIONAR A MATRIZ DEVE SER QUADRADA
#define LADO 5


int calcDiagonal(int **m1){
    int result = 0;
    for(int i = 0; i < LADO; i++){
        result += m1[i][i];
    }
    return result;
}

int main(){
    int **matriz1;

    matriz1 = malloc(LADO * sizeof(int*));
    for(int i = 0; i < LADO; i++){
        matriz1[i] = malloc(LADO * sizeof(int));
        for(int j = 0; j < LADO; j++){
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("%d", calcDiagonal(matriz1));

    for(int i = 0; i < LADO; i++){
        free(matriz1[i]);

    }
    free(matriz1);
}
