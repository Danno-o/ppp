#include <stdio.h>

int main(){
    int num;
    int soma = 0;
    printf("Introduza um limite: ");
    scanf("%d", &num);
    for (int i = 0; soma < num; i++){
        soma = soma + i;
    }
    printf("A soma é %d.\n", soma);
    return 0;
}