#include <stdio.h>
#include <string.h>

void contar(char *x, char *y){
    char *c = strstr(x, y);

    if (c != 0){
        printf("A string é: %ld\n", c - x);
    } 
    else{
        printf("Não encontrado.\n");
    }
}

int main(){
    char *a = "Sabes? Hello world!";
    char *b = "Hello world!";
    contar(a, b);
}