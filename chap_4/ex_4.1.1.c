#include <stdio.h>

int fatorial(int a){
    int b;
    b = 1;
    for (int i = a; i > 0; i--){
        b = b * i;
    }
    return b;
}

int main(){
    int num, fat;
    printf("Introduza um número para calcular o seu fatorial: ");
    scanf("%d", &num);
    fat = fatorial(num);
    printf("O resultado é %d.\n", fat);
}