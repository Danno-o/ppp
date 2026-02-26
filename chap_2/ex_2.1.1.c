#include <stdio.h>

int main(){
    int var = 0;
    printf("Insira um nº inteiro: \n");
    scanf("%d", &var);
    printf("Tou a ler %d!\n", var);
    if (var % 2 == 0){
        printf("O seu nº é par\n");
    }
    else{
        printf("O seu nº é ÍMpar\n");
    }
    return 0;
}