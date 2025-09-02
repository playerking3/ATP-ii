#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define COLS 3
#define LINS 3

int calculaDet(int **m1){
    int total =  m1[0][0]*m1[1][1]*m1[2][2]
         + m1[0][1]*m1[1][2]*m1[2][0]
         + m1[0][2]*m1[1][0]*m1[2][1]
         - m1[0][2]*m1[1][1]*m1[2][0]
         - m1[0][0]*m1[1][2]*m1[2][1]
         - m1[0][1]*m1[1][0]*m1[2][2];
         // pode não ser a forma mais bonita, porem por usar a regra de sarrus, é a mais otimizada por não depender de for's ou if's
    return total;
}

int main(){
    int **matriz1;
    srand(time(0));
    matriz1 = malloc(COLS * sizeof(int*));

    for(int i = 0; i < COLS; i++){
        matriz1[i] = malloc(LINS * sizeof(int));;
        for(int j = 0; j < LINS; j++){
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("%d",calculaDet(matriz1));


    for(int i = 0; i < COLS; i++){
        free(matriz1[i]);
    }
    free(matriz1);
    return 0;
}

