#include "head.h"
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

int fatorial(int a){
    int b;
    b = 1;
    for (int i = a; i > 0; i--){
        b = b * i;
    }
    return b;
}
