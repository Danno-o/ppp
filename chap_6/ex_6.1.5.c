#include <stdio.h>
#include <string.h>
#include <ctype.h>

void contar(char *x){
    int valor = 0;
    for (int i = 0; i < x[i]; i++){
        if (isdigit(x[i])){
            valor = (valor * 10) + (x[i] - '0');
        }
    }
    printf("%d\n", valor);
}

int main(){
    char *a = "Boas pessoal253";
    contar(a);
}