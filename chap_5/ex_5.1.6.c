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
    int mat[linhas][colunas] = {{1,2,3},    //1ª coluna
                                {4,5,6},    //2ª coluna
                                {7,8,9}};   //3ª coluna
    matriz(mat);
    return 0;
}