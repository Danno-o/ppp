#include <stdio.h>
#define MAX_SIZE 12

float media(int *vet){
    int *p;
    float val = 0;
    p = vet;
    for (int i = 0; i < MAX_SIZE; i++){
        val += *p;
        p++;
    }
    val = val / MAX_SIZE;
    return val;
}

int main(){
    int vet[MAX_SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    float med;
    med = media(vet);
    printf("A média é %.02f", med);
    printf("\n");
}