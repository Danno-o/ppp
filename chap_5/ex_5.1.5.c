#include <stdio.h>

void primos(){
    int n;

    printf("Introduza o nº de nºs primos: ");
    scanf("%d", &n);
    int vet[n];
    int contador = 0;
    int num_teste = 2;

    while(contador < n){
        int flag = 1;
        for (int i = 2; i <= num_teste / 2; i ++){
            if (num_teste % i == 0) flag = 0;
            break;
        }
        if (flag){
            vet[contador] = num_teste;
            contador++;
        }
        num_teste++;
    }

    for (int i = 0; i < n; i++){           
        printf("%d ", vet[i]);
    }
    printf("\n");

}

int main(){
    primos();
}