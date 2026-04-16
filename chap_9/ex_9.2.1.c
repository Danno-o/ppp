#include <stdio.h>
#include <string.h>
#define STR_SIZE 4

char maior_palavra(char str1, char *palavra){
    char *token;
    palavra = *str1[0];
    token = strtok(str1, ",");
    while (token != NULL){

        token = strtok(NULL, ",");
    }
    printf("\n");
    return 0;
}

int main(){
    char *str = "Boas maltinha como estamos";
    char *palavra_max = str[0];
    maior_palavra(str, palavra_max);
}