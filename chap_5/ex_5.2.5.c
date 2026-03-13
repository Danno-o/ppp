#include <stdio.h>

#define linhas 3
#define colunas 3

void matriz(int a[linhas][colunas]){
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
}

void multiplicar(int a[linhas][colunas], int b[linhas][colunas]){
    int res[linhas][colunas] = {};
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < linhas; j++){
            for (int k = 0; k < colunas; k++){
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    matriz(res);
}

int main(){
    int matriz1[linhas][colunas] =  {{1, 2, 3}, 
                                     {4, 5, 6},
                                     {7, 8, 9}};

    int matriz2[linhas][colunas] =  {{2, 0, 0}, 
                                     {0, 2, 0},
                                     {0, 0, 2}};
    multiplicar(matriz1, matriz2);
}