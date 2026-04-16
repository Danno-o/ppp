#include <stdio.h>
#include <math.h>
#define MAX_SIZE 10

typedef struct {
    float x, y;
} ponto;


float linha(ponto *vet, float *comp){
    ponto *p;
    p = vet;
    for (int i = 0; i < MAX_SIZE - 1; i++){
        *comp += sqrt(pow(p->x - (p+1)->x, 2) + pow(p->y - (p+1)->y, 2));
        p++;
    }
    return 0;
}

int main(){
    ponto vet[MAX_SIZE] = {{1,2}, {3,1}, {4,5}, {5,5}, {6,7}, {5,3}, {8,9}, {1,6}, {9,0}, {0,7}};
    float comp = 0;
    linha(vet, &comp);
    printf("O comp é %.02f", comp);
    printf("\n");
}