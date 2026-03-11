#include <stdio.h>

void transformar(){
    int vet[5];
    int i;
    for (i = 0; i < 5; i++){
        printf("Introduza os valores do vet de cada vez: \n");
        scanf("%d", &vet[i]);
    }
    printf("O vetor alterado é: ");
    for(i = 0; i < 5; i++){
        if (vet[i] % 2 == 1){
            vet[i] = vet[i] * 2;
        }
        printf("%d ", vet[i]);
    }
    printf("\n");

}

int main(){
    transformar();
}