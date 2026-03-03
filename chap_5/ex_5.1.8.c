#include <stdio.h>

#define linhas 5
#define colunas 6

// void calcular_dist(int a[linhas][colunas]){

// }

void matriz(int a[linhas][colunas]){
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            printf("%2d \t", a[i][j]);
            if (j == 0){
                printf("\t");
            }
        }
        printf("\n");
    }
}

int main(){
    int cid1, cid2, dist;
    int mat[linhas][colunas] =  {   {1, 0, 20, 30, 40, 50},
                                    {2, 20, 0, 20, 30, 40},
                                    {3, 30, 20, 0, 20, 30},
                                    {4, 40, 30, 20, 0, 20},
                                    {5, 50, 40, 30, 20, 0}};
    printf("Cidades \t 1\t 2\t 3\t 4\t 5\n");
    matriz(mat);
    printf("Introduza o nº das duas cidades para comparar: ");
    scanf("%d %d", &cid1, &cid2);
    dist = mat[cid1 - 1][cid2];
    printf("A distância entre as cidades é %d.\n", dist);
    if (dist == 0){
        printf("Escolha duas cidades diferentes!\n");
    }
    
    
}