#include <stdio.h>

void contar(char *x){
    int contador = 0;
    for (int i = 0; i < x[contador]; i++){
        contador++;
    }
    printf("O número de caracteres é %d.\n", contador);
}

int main(){
    char *a = "Hello world!";
    contar(a);
}