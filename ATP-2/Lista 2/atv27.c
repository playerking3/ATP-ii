#include<stdio.h>
#include<stdlib.h>

#define COLS 3
#define LINS 3

void multiplicaEscalar(int **m1,int escalar){
    for(int i = 0; i < COLS; i++){
        for(int j = 0; j < LINS; j++){
            m1[i][j] = m1[i][j] * escalar;
        }
    }

}

int main(){
    int **matriz1, escalar;

    matriz1 = malloc(COLS * sizeof(int*));

    for(int i = 0; i < COLS; i++){
        matriz1[i] = malloc(LINS * sizeof(int));;
        for(int j = 0; j < LINS; j++){
            scanf("%d", &matriz1[i][j]);
        }
    }
    scanf("%d",&escalar);

    multiplicaEscalar(matriz1, escalar);

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

