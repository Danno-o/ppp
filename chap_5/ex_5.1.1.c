#include <stdio.h>

void transformar(){
    int i, size;
    
    printf("Introduza o tamanho do array: \n");
    scanf("%d", &size);
    int vet[size];

    for (i = 0; i < size; i++){
        printf("Introduza os valores do vet de cada vez: \n");
        scanf("%d", &vet[i]);
    }
    printf("O vetor alterado é: ");
    for(i = 0; i < size; i++){
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