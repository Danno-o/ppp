#include <stdio.h>
int calc_mdc(int a, int b){
    int resto;
    while (b != 0){
        resto = a % b; 
        a = b;
        b = resto;
    }
    return a;
}

int main(){
    int num1, num2, mdc;
    printf("Introduza 2 números para encontrar o m.d.c.: ");
    scanf("%d %d", &num1, &num2);
    
    mdc = calc_mdc(num1, num2);

    printf("Mdc(%d;%d) = %d.\n", num1, num2, mdc);
    return 0;
}