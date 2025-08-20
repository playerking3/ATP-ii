#include<stdio.h>
#include<stdlib.h>

int main(){
    int nLinhas, nColunas, **matriz, **transposta;

    scanf("%d %d", &nColunas, &nLinhas);

    matriz = malloc(nColunas * sizeof(int*));

    for (int i = 0; i < nColunas; i++){
        matriz[i] = malloc(nLinhas * sizeof(int));
    }

    transposta = malloc(nLinhas * sizeof(int*));

    for (int i = 0; i < nLinhas; i++){
        transposta[i] = malloc(nColunas * sizeof(int));
    }

    for (int i = 0; i < nColunas; i++){
        for(int j = 0; j < nLinhas; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < nColunas; i++){
        for(int j = 0; j < nLinhas; j++){
            printf("%d,", matriz[i][j]);
            transposta[j][i] = matriz[i][j];
        }
        printf("\n");
    }

    for (int i = 0; i < nLinhas; i++){
        for(int j = 0; j < nColunas; j++){
            printf("%d,", transposta[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < nColunas; i++){
        free(matriz[i]);
    }

    for (int i = 0; i < nColunas; i++){
        free(transposta[i]);
    }

    free(matriz);
    free(transposta);

    return 0;
}
