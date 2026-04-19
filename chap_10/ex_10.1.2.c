#include <stdio.h>
#include <stdlib.h>
#define N 3



void valsMatriz(int *matriz){
    printf("Matriz do tipo %dX%d.\n", N, N);
    printf("Digite os valores da matriz: \n");
    for (int i = 0; i < N*N; i++){
        scanf("%d", &matriz[i]);
    }
}

void matrizConstr(int *matriz){    
    int posAtual = 0;
    printf("A matriz é: \n");
    for (int i = 0; i < N; i++){
        for (int k = posAtual; k < posAtual + N; k++){
            printf("%d\t", matriz[k]);
        }
        printf("\n");
        posAtual += N;
    }
}

int main(){
    int *matriz = malloc((N*N) * sizeof(int));
    valsMatriz(matriz);
    matrizConstr(matriz);
}