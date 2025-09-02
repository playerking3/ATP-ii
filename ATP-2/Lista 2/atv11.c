#include<stdio.h>
#include<stdlib.h>

#define COLS 3
#define LINS 3

int contaPar(int **m1){
    int contagem = 0;
    for(int i = 0; i < COLS; i++){
        for(int j = 0; j < LINS; j++){
            if(m1[i][j]%2 == 0){
                contagem +=1;
            }
        }
    }
    return contagem;
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

    printf("%d", contaPar(matriz1));

    for(int i = 0; i < COLS; i++){
        free(matriz1[i]);
    }
    free(matriz1);
    return 0;
}


