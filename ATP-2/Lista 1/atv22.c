#include<stdio.h>
#include<stdlib.h>

#define TAMANHO 20

int findPar(int *lista){
    int contador = 0;
    for(int i = 0; i < TAMANHO; i++){
        if (lista[i]%2 == 0){
            contador++;
        }
    }
    return contador;
}

int main(){
    int lista[TAMANHO], par, impar;
    for (int i = 0; i < TAMANHO; i++){
        scanf("%d", &lista[i]);
    }
    par = findPar(lista);
    impar = TAMANHO - par; // n�o tem o porque criar outra fun��o que acha impar se o numero que n�o � par automaticamente � impar.

    printf("Pares: %d\nImpares: %d\n", par, impar);
    return 0;
}
