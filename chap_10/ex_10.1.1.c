#include <stdio.h>
#include <stdlib.h>

int inteiros(int *mem, int size){
    if (mem == NULL){
        printf("Memória indisponível.");
        return 1;
    }
    
    printf("Introduza os números do vetor: \n");
    for (int i = 0; i < size; i++){
        scanf("%d", &mem[i]);
    }
    return 0;
}
void maior(int *mem, int size, int k){
    int maior = mem[size - k];
    for (int i = size - k; i < size; i++){
        if (mem[i] > maior) maior = mem[i];
    }
    printf("O maior nº é %d.", maior);
    printf("\n");
}

int main(){
    int size, k;
    printf("Introduza o tamanho do vetor: ");
    scanf("%d", &size);
    int *mem = malloc(sizeof(int) * size);

    printf("Introduza um nº para avaliar entre os últimos k elementos: ");
    scanf("%d", &k);
    inteiros(mem, size);
    maior(mem, size, k);
    
}