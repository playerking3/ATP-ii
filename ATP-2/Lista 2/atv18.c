#include<stdio.h>
#include<stdlib.h>

#define COLS 3
#define LINS 3

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

int main(){
    int **matriz1;

    matriz1 = malloc(COLS * sizeof(int*));

    for(int i = 0; i < COLS; i++){
        matriz1[i] = malloc(LINS * sizeof(int));;
        for(int j = 0; j < LINS; j++){
            scanf("%d", &matriz1[i][j]);
        }
    }

    if(verificaIdentidade(matriz1)== 1){
        printf("eh identidade");
    }else{
        printf("nao eh identidade");
    }

    for(int i = 0; i < COLS; i++){
        free(matriz1[i]);
    }
    free(matriz1);
    return 0;
}
