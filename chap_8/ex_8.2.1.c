#include <stdio.h>
#include <math.h>
#define MAX_SIZE

int linha(int *vet){
    int *p;
    float comp_temp = 0;
    float comp = 0;
    p = vet;
    for (int i = 0; i < MAX_SIZE - 1; i++){
        comp_temp = sqrt(pow(p->x - (p+1)->y, 2) + pow(p->x - (p+1)->y, 2));
        comp += comp_temp;
        p++;
    }
    return comp;
}

typedef struct 
{
    int x; 
    int y;
} ponto;

main(){
    ponto vet[MAX_SIZE] = {{1,2}, {3,1}, {4,3}, {5,5}, {6,7}, {2,3}, {8,9}, {1,6}, {9,0}, {0,7}};
    float comp;
    comp = linha(vet);
    printf("O comp é %.02f", comp);
    printf("\n");
}