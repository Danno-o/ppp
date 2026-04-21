#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *loadChar(){
    int i = 0;
    int c = 0;
    char *str = NULL;
    while ((c = getchar()) != '\n'){
        char *temp = realloc(str, (i + 1) * sizeof(char));
        if (temp == NULL){
            free(str);
            exit(1);
        }
        str = temp;
        str[i++] = c;
    }
    str = realloc(str, (i + 1) * sizeof(char));
    str[i] = '\0';
    // printf("String final (%d chars): %s\n", i, str);
    return str;
}

int encontrarChar(char *s, char *w){
    char *p = strstr(s, w);
    return (int)(p - s);
}

int main(){
    char *s, *w;
    printf("Digite a string inicial: ");
    s = loadChar();
    printf("Digite a string que quer encontrar: ");
    w = loadChar();
    int indice = encontrarChar(s, w);
    if (indice >= 0) printf("Pos.: %d\n", indice);
    else printf("Palavra não encontrada\n");
    return 0;
}