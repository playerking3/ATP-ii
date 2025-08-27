#include<stdio.h>
#include<stdlib.h>

#define COLS 4
#define LINS 3

void somaCols(int **m1){
    for(int i = 0; i < LINS; i++){
        int soma = 0;
        for(int j = 0; j < COLS; j++){
            soma += m1[j][i];
        }
        printf("Soma da coluna %d: %d\n", i, soma);
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


    somaCols(matriz1);

    for(int i = 0; i < COLS; i++){
        free(matriz1[i]);
    }
    free(matriz1);
    return 0;
}
