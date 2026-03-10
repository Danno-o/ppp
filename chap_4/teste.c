#include <stdio.h>

typedef struct{
    int numi;
    char nome[20];
    int idade;
} Empregado;

int main(){
    Empregado e;
    // Empregado.e[100];
    e.idade = 21;

    printf("A idade é %d.\n", e.idade);
}