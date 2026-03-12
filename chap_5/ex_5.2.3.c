#include <stdio.h>

// {5, 2, 4, 1, 3}
void sort(int v[], int n){
   int i, j, temp;
    for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - i - 1; j++){
            if (v[j] > v[j + 1]){
                temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}

int main(){
    int i, size1, size2;
    
    printf("Introduza o tamanho do array: \n");
    scanf("%d", &size1);
    int vet1[size1];
    
    for (i = 0; i < size1; i++){
        printf("Introduza os valores do vet de cada vez: \n");
        scanf("%d", &vet1[i]);
    }
    
    printf("Introduza o tamanho do array: \n");
    scanf("%d", &size2);
    int vet2[size2];
    
    for (i = 0; i < size2; i++){
        printf("Introduza os valores do vet de cada vez: \n");
        scanf("%d", &vet2[i]);
    }
    sort(vet1, size1);
    sort(vet2, size2);
    
    int size_f = size1 + size2;
    int vet_f[size_f];
    for (i = 0; i < size1; i++){
        vet_f[i] = vet1[i];
    }
    for (i = 0; i < size_f; i++){
        vet_f[i + 5] = vet2[i];
    }

    sort(vet_f, size_f);
    for (i = 0; i < size_f; i++){
        printf("%d ", vet_f[i]);
    }
    printf("\n");
}
