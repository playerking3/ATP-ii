    #include<stdio.h>
    #include<stdlib.h>

    #define COLS 3
    #define LINS 3


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
        int **matriz1, **matriz2, **transp, **mult;

        matriz1 = malloc(COLS * sizeof(int*));
        matriz2 = malloc(COLS * sizeof(int*));
        transp = malloc(COLS * sizeof(int*));
        mult = malloc(COLS * sizeof(int*));

        for(int i = 0; i < COLS; i++){
            matriz1[i] = malloc(LINS * sizeof(int));
            matriz2[i] = malloc(LINS * sizeof(int));
            transp[i] = malloc(LINS * sizeof(int));
            mult[i] = malloc(LINS * sizeof(int));
            for(int j = 0; j < LINS; j++){
                printf("Matriz 1[%d][%d]: ", i,j);
                scanf("%d", &matriz1[i][j]);
            }
            for(int j = 0; j < LINS; j++){
                printf("Matriz 2[%d][%d]: ", i,j);
                scanf("%d", &matriz2[i][j]);
            }
        }



        transpMatriz(matriz1, transp);
        multMatriz(matriz1, transp, mult);
        if(verificaIdentidade(mult)) {
            printf("Matriz 1 eh ortogonal\n");
        } else {
            printf("Matriz 1 nao eh ortogonal\n");
        }

        transpMatriz(matriz2, transp);
        multMatriz(matriz2, transp, mult);
        if(verificaIdentidade(mult)) {
            printf("Matriz 2 eh ortogonal\n");
        } else {
            printf("Matriz 2 nao eh ortogonal\n");
        }

        for(int i = 0; i < COLS; i++){
            free(matriz1[i]);
            free(matriz2[i]);
            free(transp[i]);
            free(mult[i]);
        }
        free(matriz1);
        free(matriz2);
        free(transp);
        free(mult);
        return 0;
    }

