#include <stdio.h>

#define colunas 3
#define linhas 3 

void matriz(int a[linhas][colunas]){
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int mat[linhas][colunas] = {{1,2,3}, {4,5,6}, {7,8,9}};
    matriz(mat);
    return 0;
}