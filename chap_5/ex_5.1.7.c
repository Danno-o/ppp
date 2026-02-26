#include <stdio.h>

#define linhas 3
#define colunas 3
void transposta(int a[linhas][colunas], int b[colunas][linhas]){
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
                b[i][j] = a[j][i];
        }
    }

}
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
    int mat_trans[colunas][linhas];
    
    transposta(mat, mat_trans);
    matriz(mat_trans);
    return 0;
}