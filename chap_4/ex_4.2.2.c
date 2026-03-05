#include <stdio.h>

long long int permut(int a, int b){
    long long int c;
    c = 1;
    for (int i = 0; i < b; i++){
        c *= (a - i);
    }
    return c;
}

int main(){
    int num1;
    printf("Introduza o número: ");
    scanf("%d", &num1);
    for (int j = 1; j < num1 -1; j++){
        printf("p(%d,%d) = %lld\n", num1, num1 - j, permut(num1, num1 - j));
    }
}