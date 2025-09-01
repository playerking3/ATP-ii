#include<stdio.h>
#include<stdlib.h>

#define COLS 4
#define LINS 4

void buscaBinaria(int **m1,int item){
    int menor = 0, maior = COLS * LINS - 1, encontrou;
    while(menor <= maior){
        int meio = (menor + maior) / 2;
        int i = meio / COLS;
        int j = meio % COLS;
        int valor = *(*(m1 + i) + j);
        if (valor == item) {
            printf("[%d][%d]", i, j);
            break;
        } else if (valor < item) {
            menor = meio + 1;
        } else {
            maior = meio - 1;
        }
    }

}

int main(){
    int **matriz1, item;

    matriz1 = malloc(COLS * sizeof(int*));

    for(int i = 0; i < COLS; i++){
        matriz1[i] = malloc(LINS * sizeof(int));;
        for(int j = 0; j < LINS; j++){
            scanf("%d", &matriz1[i][j]);
        }
    }
    scanf("%d",&item);

    buscaBinaria(matriz1, item);

    for(int i = 0; i < COLS; i++){
        free(matriz1[i]);
    }
    free(matriz1);
    return 0;
}


