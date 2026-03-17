#include <stdio.h>
#include <string.h>
#include <ctype.h>

void comprimir(char a[]){
    int cont = 1;
    char res[200];
    int w = 0;
    for(int i = 0; a[i] != '\0'; i++){
        if(a[i] == a[i + 1]){
            cont++;
        }
        if(a[i] != a[i + 1]){
            if(cont > 4){
                res[w++] = 'c';
                res[w++] = a[i];
                res[w++] = '0' + cont;
                res[w++] = 'f';
            }
            else {
                for(int k = 0; k < cont; k++) {
                    res[w++] = a[i];
                }
            }
        cont = 1;
        }
    }
    res[w] = '\0';
    strcpy(a, res);
    printf("%s\n", a);
}


int main(){
    int size;
    printf("Introduza o tamanho da string: ");
    scanf("%d", &size);
    char a[size];

    while (getchar() != '\n');
    printf("Introduza uma string para ser comprimida: ");
    fgets(a, size, stdin);

    comprimir(a);
}