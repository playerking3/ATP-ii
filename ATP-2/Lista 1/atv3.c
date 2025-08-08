#include<stdio.h>
#include<math.h>

#define TAMANHO 7


// eu sei que tem uma forma bem mais otimizada de gerar numeros primos, porem prefiro não queimar tantos neuronios na terceira atividade da lista...
int geraPrimo(ordem){
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
