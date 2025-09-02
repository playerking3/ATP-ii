#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define COLS 3
#define LINS 3

void vandermonde(int **m1,int *listaElementos){
    for(int i = 0; i < COLS; i++){
        for(int j = 0; j < LINS; j++){
            m1[i][j] = (int) pow(listaElementos[i], j);
        }
    }
}

int main(){
    int **matriz1, *listaElementos;

    matriz1 = malloc(COLS * sizeof(int*));
    listaElementos = malloc(COLS*sizeof(int));
    for(int i = 0; i < COLS; i++){
        matriz1[i] = malloc(LINS * sizeof(int));
        scanf("%d", &listaElementos[i]);
    }

    vandermonde(matriz1, listaElementos);

    for(int i = 0; i < COLS; i++){
        for(int j = 0; j < LINS; j++){
            printf(" %d ", matriz1[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < COLS; i++){
        free(matriz1[i]);
    }
    free(matriz1);
    return 0;
}
