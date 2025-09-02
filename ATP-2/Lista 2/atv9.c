#include<stdio.h>
#include<stdlib.h>

#define COLS 3
#define LINS 3

int findMaior(int **m1){
    int maior = m1[0][0];
    for(int i = 0; i < COLS; i++){
        for(int j = 0; j < LINS; j++){
            if(m1[i][j] > maior){
                maior = m1[i][j];
            }
        }
    }
    return maior;
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

    printf("%d", findMaior(matriz1));

    for(int i = 0; i < COLS; i++){
        free(matriz1[i]);
    }
    free(matriz1);
    return 0;
}
