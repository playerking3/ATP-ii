#include<stdio.h>
#include<stdlib.h>

#define COLS 4
#define LINS 4

int findMenor(int **m1){
    int menor = m1[0][0];
    for(int i = 0; i < COLS; i++){
        for(int j = 0; j < LINS; j++){
            if(m1[i][j] < menor){
                menor = m1[i][j];
            }
        }
    }
    return menor;
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

    printf("%d", findMenor(matriz1));

    for(int i = 0; i < COLS; i++){
        free(matriz1[i]);
    }
    free(matriz1);
    return 0;
}

