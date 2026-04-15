#include "head.h"
#include <stdio.h>

struct Data{
    int d, m, y;
};

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

int contar_char_vet(char *x){
    int contador = 0;
    for (int i = 0; i < x[contador]; i++){
        contador++;
    }
    return contador;
}

int comparar_datas(struct Data data1, struct Data data2){
    if (data1.y < data2.y) return -1;
    else if (data1.y > data2.y) return 1;
    if (data1.m < data2.m) return -1;
    else if (data1.m > data2.m) return 1;
    if (data1.d < data2.d) return -1;
    else if (data1.d > data2.d) return 1;
    return 0;
}
