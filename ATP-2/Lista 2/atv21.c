#include<stdio.h>
#include<stdlib.h>

#define COLS 3
#define LINS 3

int verifyPermutacao(int **m1){
    for(int i = 0; i < LINS; i++){
        int somaCol = 0, somaLin = 0;
        for(int j = 0; j < COLS; j++){
            somaCol += m1[j][i];
            somaLin += m1[i][j];
        }
        if(somaCol != 1 && somaLin != 1){
            return 0;
        }
    }
    return 1;
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


    if(verifyPermutacao(matriz1)== 0){
        printf("nao eh permutacao");
    }else{
        printf("eh permutacao");
    }

    for(int i = 0; i < COLS; i++){
        free(matriz1[i]);
    }
    free(matriz1);
    return 0;
}
