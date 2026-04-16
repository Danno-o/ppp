#include <stdio.h>
#define MAX_SIZE 10

int func_ponteiros(int *vet, int *min, int *max){
    *min = vet[0];
    *max = vet[0];
    for (int i = 0; i < MAX_SIZE; i++){
        if (vet[i] < *min) *min = vet[i];
        if (vet[i] > *max) *max = vet[i];
    }
    return 0;
}

int func_min(int *vet){
    int min = vet[0];
    for (int i = 0; i < MAX_SIZE; i++){
        if (vet[i] < min) min = vet[i];
    }
    return min;
}

int func_max(int *vet){
    int max = vet[0];
    for (int i = 0; i < MAX_SIZE; i++){
        if (vet[i] > max) max = vet[i];
    }
    return max;
}

int main(){
    int vet[10];
    int min = 0;
    int max = 0;
    int min_normal, max_normal;
    printf("Introduza 10 números para o vetor: \n");
    for (int i = 0; i < MAX_SIZE; i++){
        scanf("%d", &vet[i]);
    }
    func_ponteiros(vet, &min, &max);
    printf("Através dos ponteiros...\n");
    printf("O valor mínimo é: %d\n", min);
    printf("O valor máximo é: %d\n", max);
    printf("\n");
    
    min_normal = func_min(vet);
    max_normal = func_max(vet);
    printf("Através da maneira normal...\n");
    printf("O valor mínimo é: %d\n", min_normal);
    printf("O valor máximo é: %d\n", max_normal);
    
    
}