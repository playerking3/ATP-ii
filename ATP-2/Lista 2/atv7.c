#include<stdio.h>
#include<stdlib.h>

//PARA FUNCIONAR A MATRIZ DEVE SER QUADRADA
#define LADO 3


int verificaSimetria(int **m1){
    for(int i = 0; i < LADO; i++){
        for(int j = 0; j < LADO;j++){
            if(m1[i][j]!= m1[j][i]){
                return 0;
            }
        }
    }
    return 1;
}

int main(){
    int **matriz1;

    matriz1 = malloc(LADO * sizeof(int*));
    for(int i = 0; i < LADO; i++){
        matriz1[i] = malloc(LADO * sizeof(int));
        for(int j = 0; j < LADO; j++){
            scanf("%d", &matriz1[i][j]);
        }
    }

    if(verificaSimetria(matriz1) == 0){
        printf("nao eh simetrica");
    }else{
        printf("eh simetrica");
    }

    for(int i = 0; i < LADO; i++){
        free(matriz1[i]);

    }
    free(matriz1);
}

