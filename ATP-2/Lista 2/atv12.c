#include<stdio.h>
#include<stdlib.h>

#define COLS 2
#define LINS 4

float calcMedia(int **m1){
    int soma = 0;
    float media;
    for(int i = 0; i < COLS; i++){
        for(int j = 0; j < LINS; j++){
            soma += m1[i][j];
        }
    }
    media = (float) soma/(COLS*LINS);
    return media;
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

    printf("%f", calcMedia(matriz1));

    for(int i = 0; i < COLS; i++){
        free(matriz1[i]);
    }
    free(matriz1);
    return 0;
}



