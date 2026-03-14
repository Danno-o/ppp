#include <stdio.h>
#include <string.h>
#include <ctype.h>

void contar(char *x){
    int contador = 1;
    for (int i = 0; i < x[i]; i++){
        if (isspace(x[i]) || ispunct(x[i]) == 1) contador++;
    }
    if (strlen(x) == 0) contador = 0;
    printf("O nº de palavras é %d\n", contador);
}

int main(){
    char a[60] = "Boas pessoal, como estão";
    contar(a);
}