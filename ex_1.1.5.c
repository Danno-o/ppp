#include <stdio.h>

int main(){
    float euro, dol;
    printf("Conversor de euros em dólares!\n");
    printf("Introduza a quantia em euros: ");
    scanf("%f", &euro);
    dol = euro * 1.1783;
    printf("%.2f em dólares dá %.2f!\n", euro, dol);
    return 0;
}