#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAX_SIZE 100    

void int3(int *x){
    int cont = 0;
    int val = 0;
    int c;
    char string[MAX_SIZE];
    printf("Digite uma string alfanumérica: ");
    while (cont < MAX_SIZE - 1){
        c = getchar();
        if (c == '\n' || c == EOF){
            break;
        }
        string[cont] = c;
        cont++;
    }
    string[cont] = '\0';

    for (int i = 0; string[i] != '\0'; i++){
        if (isdigit(string[i])) val = (val * 10) + (string[i] - '0');
    }
    
    *x = val;
}

int main(){
    int num = 0;
    int3(&num);
    printf("%d\n", num);
}