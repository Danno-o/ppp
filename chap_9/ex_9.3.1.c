#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void isbn(char *isbn){
    int s1 = 0;
    int s2 = 0;
    char s1Char[20];
    
    printf("SOMAS PARCIAIS s1: ");
    for (int i = 0; isbn[i] != '\0'; i++){
        if (isdigit(isbn[i])){
            s1 += (isbn[i] - 48);
            printf("%d ", s1);
            s1Char[i] = s1;
        }
    }
    printf("\n");
    printf("SOMAS TOTAIS s2: ");
    for (int i = 0; isbn[i] != '\0'; i++){
        if (isdigit(isbn[i])){
            s2 += (s1Char[i]);
            printf("%d ", s2);
        }
    }
    printf("\n");
    if (s2 % 11 == 0) printf("O ISBN É VÁLIDO");
    else printf("O ISBN É INVÁLIDO");
    printf("\n");

}

int main(){
    char isbnOriginal[] = "0 8 9 2 3 7 0 1 0 6";
    isbn(isbnOriginal);
}