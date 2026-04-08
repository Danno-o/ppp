#include <stdio.h>

struct Data{
    int d, m, y;
};

int comparar_datas(Data data1, Data data2){
    if (data1.y < data2.y) return -1;
    else if (data1.y > data2.y) return 1;
    if (data1.m < data2.m) return -1;
    else if (data1.m > data2.m) return 1;
    if (data1.d < data2.d) return -1;
    else if (data1.d > data2.d) return 1;
    return 0;
}

struct Data ordenar(struct Data vet_datas[]){

}


int main(){
    struct Data dat1, dat2;
    dat1.y = 2025;
    dat1.m = 1;
    dat1.d = 25;
    dat2.y = 2000;
    dat2.m = 1;
    dat2.d = 23;    

    struct Data vet_datas[] = {dat1, dat2, {3, 4, 2025}};
}