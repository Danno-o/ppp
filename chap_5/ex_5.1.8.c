#include <stdio.h>

#define linhas 6
#define colunas 6

// void calcular_dist(int a[linhas][colunas]){

// }

void matriz(int a[linhas][colunas]){
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            printf("%4d  \t", a[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int cid1, cid2;
    int mat[linhas][colunas] =  {   {1, 0, 20, 30, 40, 50},
                                    {2, 20, 0, 20, 30, 40},
                                    {3, 30, 20, 0, 20, 30},
                                    {4, 40, 30, 20, 0, 20},
                                    {5, 50, 40, 30, 20, 0}};
    printf("Cidades \t1\t2\t3\t4\t5\n");
    matriz(mat);
    printf("Introduza o nº das duas cidades para comparar: ");
    scanf("%d %d", &cid1, &cid2);
}