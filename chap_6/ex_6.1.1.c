#include <stdio.h>

int contar_char_vet(char *x){
    int contador = 0;
    for (int i = 0; i < x[contador]; i++){
        contador++;
    }
    return contador;
}

int main(){
    char *a = "Hello world!";
    int b = contar_char_vet(a);
    printf("Tem %d caracteres.\n", b);
}