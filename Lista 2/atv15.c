#include<stdio.h>
#include<stdlib.h>

#define COLS 3
#define LINS 3

void inverteLinhas(int **m1){
    int linhaAux[LINS];
    for(int i = 0; i < COLS/2; i++){
        for(int j = 0; j < LINS; j++){
            linhaAux[j] = m1[i][j];
            m1[i][j] = m1[COLS-1-i][j];
            m1[COLS-1-i][j] = linhaAux[j];
        }
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

    inverteLinhas(matriz1);

    for(int i = 0; i < COLS; i++){
        for(int j = 0; j < LINS; j++){
            printf("%d", matriz1[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < COLS; i++){
        free(matriz1[i]);
    }
    free(matriz1);
    return 0;
}



