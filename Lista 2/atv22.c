#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define COLS 4
#define LINS 4

void ordenaMatiz(int **m1){
    for(int i = 0; i < LINS; i++){
        for(int j = 0; j < COLS-1; j++){
            int menor = m1[i][j], aux = i;
            for(int k = j+1; k < COLS; k++){
                if(m1[i][aux] > m1[i][k]){
                    aux = k;
                }
            }
            m1[i][j] = m1[i][aux];
            m1[i][aux] = menor;
        }
    }

}

int main(){
    int **matriz1;
    srand(time(0));
    matriz1 = malloc(COLS * sizeof(int*));

    for(int i = 0; i < COLS; i++){
        matriz1[i] = malloc(LINS * sizeof(int));;
        for(int j = 0; j < LINS; j++){
            //limitei os aleatórios de 0 a 99 pra ficar mais legivel
            matriz1[i][j] = rand()%100;
        }
    }

    ordenaMatiz(matriz1);

    for(int i = 0; i < LINS; i++){
        for(int j = 0; j < COLS; j++){
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
