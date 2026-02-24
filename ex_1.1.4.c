#include <stdio.h>
#include <math.h>

int main(){
    float cat1, cat2, hyp;
    printf("Introduza o 1º cateto: ");
    scanf("%f", &cat1);
    printf("Introduza o 2º cateto: ");
    scanf("%f", &cat2);
    hyp = pow(cat1, 2) + pow(cat2, 2);
    printf("A hipotenusa é %.2f.\n", hyp);
    return 0;
}