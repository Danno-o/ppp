#include <stdio.h>

void inverter_ordem(){
    int i;
    int vet[10];

    for (i = 0; i < 10; i++){
        printf("Introduza os valores do vet de cada vez: \n");
        scanf("%d", &vet[i]);
    }
    
    printf("O vetor alterado é: ");
    for (i = 9; i > -1; i--){           
        printf("%d ", vet[i]);
    }
    printf("\n");
}

int main(){
    inverter_ordem();
}