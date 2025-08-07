#include<stdio.h>
#include<math.h>

#define TAMANHO 7


// eu sei que tem uma forma bem mais otimizada de gerar numeros primos, porem prefiro não queimar tantos neuronios na terceira atividade da lista...
int geraPrimo(ordem){
    int primo = 0;
    for(int i = 0; i <ordem; i++){
        int contador = 0;
        int multiplo = 1;
        for(int j = primo+1; j <=10; j++){

            if(j%multiplo == 0){
                contador++;
            }
            if(contador == 2 && j == multiplo){
                primo = j;
                break;
            }
            printf("%d - %d\n", j,multiplo);
            multiplo += 1;
        }

    }
    return primo;
}

void lerLista(int lista[]){
    for(int i = 0; i < TAMANHO; i++){
        printf("%d\n", lista[i]);
    }
}

int main(){
    int lista[TAMANHO];

    //inicialização da lsita
    for(int i = 0; i < TAMANHO; i++){
        lista[i] = geraPrimo(i+1);
    }

    lerLista(lista);
    return 0;
}
