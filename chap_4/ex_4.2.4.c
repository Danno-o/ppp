#include <stdio.h>

int ePrimo(int a){
    if (a < 2) return 1;
    for (int i = 2; i <= a / 2; i++){
        if ((a % i) == 0) return 0;
    }
    return 1;
}

void intervalo(){
    int a, b;
    printf("Introduza dois nº para o intervalo: ");
    scanf("%d %d", &a, &b);
    for (int i = a; i < b; i++){
        printf("%d\n", ePrimo(i));
    }
}

void prim(){
    int a;
    printf("Introduza o nº para avaliar: ");
    scanf("%d", &a);
    if (ePrimo(a)) printf("%d\n.", ePrimo(a));
    else printf("%d.\n", ePrimo(a));
}

int main(){
    prim(5);
    // intervalo();
}