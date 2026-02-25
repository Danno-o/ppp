#include <stdio.h>

int main(){
    float num1, num2, num3;
    printf("Insira 3 números: ");
    scanf("%f %f %f", &num1, &num2, &num3);
    if (num1 > num2 && num1 > num3){
        printf("%.2f é o maior número!", num1);
    }
    if (num2 > num1 && num2 > num3){
        printf("%.2f é o maior número!", num2);
    }
    if (num3 > num1 && num3 > num2){
        printf("%.2f é o maior número!\n", num3);
    }
    return 0;
}