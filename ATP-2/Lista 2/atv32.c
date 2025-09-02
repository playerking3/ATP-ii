#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define COLS 2
#define LINS 2

int calculaDet(int **m1){
    int total =  m1[0][0]*m1[1][1] - m1[0][1]*m1[1][0];
    return total;
}

void transpMatriz(int **m1, int **transposta){
    for(int i = 0; i < COLS; i++){
        for(int j = 0; j < LINS; j++){
            transposta[j][i] = m1[i][j];
        }
    }
}

int verificaIdentidade(int **m1){
    for(int i = 0; i < COLS; i++){
        for(int j = 0; j < LINS; j++){
            if(m1[i][j] != 0 && i != j){
                return 0;
            }else if(m1[i][j] != 1 && i == j){
                return 0;
            }
        }
    }
    return 1;
}

void multMatriz(int **m1,int **m2,int **result){
    for(int i = 0; i < LINS; i++){
        for(int j = 0; j < LINS; j++){
            result[i][j]=0;
            for(int k = 0; k < COLS; k++){
                result[i][j] += m1[i][k]*m2[k][j];
            }
        }
    }
}

int main(){
    int **matriz1, **transposta, **multiplicada;
    matriz1 = malloc(COLS * sizeof(int*));
    transposta = malloc(COLS * sizeof(int*));
    multiplicada = malloc(COLS * sizeof(int*));


    for(int i = 0; i < COLS; i++){
        matriz1[i] = malloc(LINS * sizeof(int));
        transposta[i] = malloc(LINS * sizeof(int));
        multiplicada[i] = malloc(LINS * sizeof(int));
        for(int j = 0; j < LINS; j++){
            scanf("%d", &matriz1[i][j]);
        }
    }

    transpMatriz(matriz1, transposta);
    multMatriz(matriz1, transposta, multiplicada);
    if(calculaDet(matriz1) == -1 && verificaIdentidade(multiplicada)==1){
        printf("eh reflexao");
    }else{
        printf("nao eh reflexao");
    }


    for(int i = 0; i < COLS; i++){
        free(matriz1[i]);
        free(transposta[i]);
        free(multiplicada[i]);
    }
    free(matriz1);
    free(transposta);
    free(multiplicada);
    return 0;
}
