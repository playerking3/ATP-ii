#include <stdio.h>
#include <math.h>

#define TAMANHO 3

int geraSubconjuntos(int *lista, int elementos) {

    //caso base de 0 elementos
    if(elementos == 0){
        return 0;
    }

    //outros casos (faz iteração das possibilidades dos elementos)
    for(int i = 0; i < TAMANHO; i++){
        if(elementos<=1){
            printf("%d", lista[i]);
        }else{
          if(i != TAMANHO-1){
            printf("%d", lista[i]);
            for(int j = i+1; i <= elementos; i++){
                printf("%d", lista[j]);
            }
          }
        }
    }

    printf("\n");
    return geraSubconjuntos(lista, elementos-1);
}

int main() {
    int lista[TAMANHO];
    for (int i = 0; i < TAMANHO; i++) {
        scanf("%d", &lista[i]);
    }
    geraSubconjuntos(lista, TAMANHO);
}
