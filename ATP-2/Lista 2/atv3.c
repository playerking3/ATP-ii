#include<stdio.h>
#include<stdlib.h>

#define COLS 2
#define LINS 2

int comparaMatriz(int **m1,int **m2){
    for(int i = 0; i < COLS; i++){
        for(int j = 0; j < LINS; j++){
            if(m1[i][j]!= m2[i][j]){
                return 0;
            }
        }
    }
    return 1;
}

int main(){
    int **matriz1, **matriz2;

    matriz1 = malloc(COLS * sizeof(int*));
    matriz2 = malloc(COLS * sizeof(int*));

    for(int i = 0; i < COLS; i++){
        matriz1[i] = malloc(LINS * sizeof(int));
        matriz2[i] = malloc(LINS * sizeof(int));
        for(int j = 0; j < LINS; j++){
            scanf("%d %d", &matriz1[i][j], &matriz2[i][j]);
        }
    }

    if(comparaMatriz(matriz1,matriz2)== 1){
        printf("sao iguais");
    }else{
        printf("sao diferentes");
    }

    for(int i = 0; i < COLS; i++){
        free(matriz1[i]);
        free(matriz2[i]);
    }
    free(matriz1);
    free(matriz2);
    return 0;
}
