#include <stdio.h>

int main(){
    int var;
    int val_final = 0;
    printf("Insira um valor: \n");
    scanf("%d", &var);

    for (int i = 1; i <= var; i++){
        val_final += i;
    }
    printf("O total da soma é %d.\n", val_final);
    return 0;    
}