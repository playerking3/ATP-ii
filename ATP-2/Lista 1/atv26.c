#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TAMANHO 256

int main(){
    char texto[TAMANHO], concat[TAMANHO];
    gets(texto);
    gets(concat);

    //usando a biblioteca string.h
    strcat(texto, concat);

    printf("%s", texto);
    return 0;
}
