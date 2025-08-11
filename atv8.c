#include<stdio.h>

#define TAMANHO 8

int achaVogal(char lista[]){
    int contador = 0;
    for (int i = 0; i<TAMANHO; i++){
        if(lista[i] == 'a'||lista[i] == 'e'||lista[i] == 'i'||lista[i] == 'o'||lista[i] == 'u'){
            contador++;
        }
   }
   return contador;
}

int main(){
   char lista[TAMANHO];
   for (int i = 0; i<TAMANHO; i++){
        scanf("%c", &lista[i]);
        fflush(stdin);
   }

   printf("%d", achaVogal(lista));
}
