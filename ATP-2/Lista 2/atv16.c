#include<stdio.h>
#include<stdlib.h>

#define COLS 5
#define LINS 5

// codigo emprestado da lista 1 atv3
int geraPrimo(int ordem){
    int index = 0 ,primo = 2, multiplo = 2;
    while(index < ordem){
        if(primo%multiplo == 0 && primo > multiplo){
            primo +=1;
            multiplo = 2;
        }else if(primo%multiplo == 0 && primo == multiplo){
            index +=1;
            primo +=1;
            multiplo = 2;
        }else{
            multiplo +=1;
        }
    }
    return primo-1;
}

int main(){
    int **matriz1, index = 1;

    matriz1 = malloc(COLS * sizeof(int*));

    for(int i = 0; i < COLS; i++){
        matriz1[i] = malloc(LINS * sizeof(int));;
        for(int j = 0; j < LINS; j++){
            matriz1[i][j] = geraPrimo(index);
            index++;
        }
    }



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




