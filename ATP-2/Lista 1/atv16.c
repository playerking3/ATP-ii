#include <stdio.h>

#define TAMANHO 10

int main(){
    char lista[TAMANHO];
    int qtd = 0, *ptrQtd;

    for(int i = 0; i< TAMANHO; i++){
        scanf("%c", &lista[i]);
        fflush(stdin);
    }

    ptrQtd = &qtd;

    for(int i = 0; i< TAMANHO; i++){
        if(lista[i] < 97){
            *ptrQtd += 1;
        }
    }

    printf("%d", *ptrQtd);
    return 0;
}


