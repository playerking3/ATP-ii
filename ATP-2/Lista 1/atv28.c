#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TAMANHO 256

void substituiChar(char *texto,char sub,char alvo){
    for(int i = 0; i < strlen(texto); i++){
        if(texto[i]==alvo){
            texto[i]=sub;
        }
    }
}

int main(){
    char texto[TAMANHO], sub, alvo;
    gets(texto);
    scanf("%c %c", &alvo, &sub);
    substituiChar(texto, sub, alvo);
    printf("%s", texto);
}
