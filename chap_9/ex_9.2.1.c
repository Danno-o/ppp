#include <stdio.h>
#include <string.h>
#define STR_SIZE 4

char maior_palavra(char *str1, char **palavra){
    char *token;
    size_t tamanhoMaior = 0;

    token = strtok(str1, " ");
    while (token != NULL){
        if (strlen(token) > tamanhoMaior){
            tamanhoMaior = strlen(token);
            *palavra = token;
        }
        token = strtok(NULL, " ");
    }
    return 0;
}

int main(){
    char str[] = "Boas maltinha como estamossss";
    char *palavra_max = NULL;

    maior_palavra(str, &palavra_max);
    printf("%s\n", palavra_max);
}