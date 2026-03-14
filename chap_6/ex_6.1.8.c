#include <stdio.h>
#include <string.h>
#include <ctype.h>

void contar(){
    char a[100];
    printf("Introduza uma string: ");
    fgets(a, 100, stdin);
    char *str1 = a;
    char *str2 = a;
    while (*str2 != '\0'){
        if (!isspace(*str2)){
            *str1 = *str2;
            str1++;
        }
        str2++;
    }
    *str1 = '\0';
    printf("A frase fica: %s\n", a);
}

int main(){
    contar();
}