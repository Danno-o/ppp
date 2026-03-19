#include <stdio.h>

typedef struct{
    int d, m, y;   
}Data;

int abs(int num){
    if (num < 0) num = -num;
    return num;
}

int comparar_datas(Data data1, Data data2){
    if (data1.y < data2.y) return -1;
    else if (data1.y > data2.y) return 1;
    if (data1.m < data2.m) return -1;
    else if (data1.m > data2.m) return 1;
    if (data1.d < data2.d) return -1;
    else if (data1.d > data2.d) return 1;
    return 0;
}

Data diferenca(Data data1, Data data2){
    Data data3;
    data3.y = abs(data1.y - data2.y);
    data3.m = abs(data1.m - data2.m);
    data3.d = abs(data1.d - data2.d);
    return data3;
}

int seculo(Data data){
    int ano = data.y;
    if (ano % 100 == 0) ano += 100;
    ano = ano / 100;
    return ano; 
}

int main(){
    Data dat1, dat2, dat3;
    dat1.y = 2025;
    dat1.m = 1;
    dat1.d = 25;
    dat2.y = 2000;
    dat2.m = 1;
    dat2.d = 23;
    dat3 = diferenca(dat1, dat2);

    printf("%d\n", comparar_datas(dat1, dat2));
    printf("Dias de dif.: %d, Meses de dif.: %d, Anos de dif.: %d\n", dat3.d, dat3.m, dat3.d);
    printf("%d\n", seculo(dat1));
    printf("%d\n", seculo(dat2));
}
