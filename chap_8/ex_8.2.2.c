#include <stdio.h>
#define MAX_SIZE 10

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

struct Data menor_data(struct Data *vet_data, struct Data *min){
    struct Data *p;
    p = vet_data;
    *min = vet_data[0];
    for (int i = 1; i < MAX_SIZE; i++){
        if ((p->y < min->y)){
            *min = *p;
            p++;
        }
        else if ((p->y == min->y && p->m < min->m)) *min = *p;
        else if ((p->y == min->y && p->m == min->m && p->d < min->d)) *min = *p;

        else p++;
    }
    return *min;
}

int main(){
    struct Data data_min;
    struct Data vet_datas[MAX_SIZE] = {{31, 11, 2025}, {11, 4, 2025}, 
                                       {1, 1, 2025}, {25, 9, 2025}, 
                                       {13, 12, 2025}, {25, 3, 2025}, 
                                       {16, 11, 2024}, {9, 5, 2025}, 
                                       {26, 11, 2025}, {18, 7, 2025}};
    
    menor_data(vet_datas, &data_min);
    printf("%02d/%02d/%04d\n", data_min.d, data_min.m, data_min.y);
}