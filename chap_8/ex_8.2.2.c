#include <stdio.h>
#define MAX_SIZE 3

struct Data{
    int d, m, y;
};

int comparar_datas(struct Data data1, struct Data data2){
    if (data1.y < data2.y) return -1;
    else if (data1.y > data2.y) return 1;
    if (data1.m < data2.m) return -1;
    else if (data1.m > data2.m) return 1;
    if (data1.d < data2.d) return -1;
    else if (data1.d > data2.d) return 1;
    return 0;
}

struct Data menor_data(struct Data *vet_data){
    struct Data *p;
    p = vet_data;
    struct Data min = vet_data[0];
    for (int i = 0; i < MAX_SIZE; i++){
        if (comparar_datas(vet_data[i], min) < 0){
            min = vet_data[i];
        }
    }
    return min;
}

int main(){
    struct Data data_min;   
    struct Data vet_datas[MAX_SIZE] = {{31, 11, 2025}, {11, 11, 2025}, {25, 11, 2025}};
    
    data_min = menor_data(vet_datas);
    printf("%02d/%02d/%03d\n", data_min.d, data_min.m, data_min.y);
}