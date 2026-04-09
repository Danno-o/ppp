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

void ordenar(struct Data vet_data[]){
    for (int i = 0; i < MAX_SIZE - 1; i++){
        for (int j = 0; j < MAX_SIZE - i - 1; j++){
            if (comparar_datas(vet_data[j], vet_data[j + 1]) > 0){
                struct Data temp = vet_data[j];
                vet_data[j] = vet_data[j + 1];
                vet_data[j + 1] = temp;
            }
        }
    }
}

struct Data menor_data(struct Data vet_data[]){
    struct Data min = vet_data[0];
    for (int i = 0; i < MAX_SIZE; i++){
        if (comparar_datas(vet_data[i], min) < 0){
            min = vet_data[i];
        }
    }
    return min;
}

int ano_esp(struct Data vet_data[], struct Data vet_new[], int ano){
    int contador = 0;
    for (int i = 0; i < MAX_SIZE; i++){
        if (vet_data[i].y == ano){
            vet_new[contador] = vet_data[i];
            contador++;
        }
    }
    return contador;
}

int main(){
    int ano, cont;
    struct Data data_min;   
    struct Data vet_new[MAX_SIZE];
    struct Data vet_datas[MAX_SIZE] = {{3, 4, 2025}, {11, 9, 2001}, {25, 11, 2025}};
    ordenar(vet_datas);
    for (int k = 0; k < MAX_SIZE; k++){
        printf("%02d/%02d/%02d\n", vet_datas[k].d, vet_datas[k].m, vet_datas[k].y);
    }
    printf("\n");
    
    data_min = menor_data(vet_datas);
    printf("%02d/%02d/%02d\n", data_min.d, data_min.m, data_min.y);
    printf("Introduza um ano como parâmetro: ");
    scanf("%d", &ano);
    cont = ano_esp(vet_datas, vet_new, ano);
    for (int k = 0; k < cont; k++){
        printf("%02d/%02d/%02d\n", vet_new[k].d, vet_new[k].m, vet_new[k].y);
    }
}