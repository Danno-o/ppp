#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX_SIZE 10

char *loadChar(){
    int i = 0;
    int c = 0;
    char *str = NULL;
    while ((c = getchar()) != '\n' && i < 10){
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
    printf("String final (%d chars): %s\n", i, str);
    return str;
}

int seqNums(char *str){
    int i = 0;
    int atualStart = 0 /*ponteiro*/, atualSize = 0 /*inteiro*/, melhorStart = 0 /*ponteiro*/, melhorSize = 0 /*inteiro*/;
    while (str[i] != '\0'){
        if (isdigit(str[i])){
            if (atualSize == 0) atualStart = i;
            atualSize++;
        }
        else {
            if (atualSize > melhorSize){
                melhorSize = atualSize;
                melhorStart = atualStart;
            }
            atualSize = 0;
        }
        i++;
    }

    if (atualSize > melhorSize){
        melhorSize = atualSize;
        melhorStart = atualStart;
    }
    char *strFinal = malloc((melhorSize + 1) * sizeof(char));
    if (strFinal == NULL){
            free(strFinal);
            exit(1);
    }

    int j = 0;
    while (j < melhorSize){
        strFinal[j] = str[melhorStart + j];
        j++;
    }
    strFinal[j] = '\0';
    int a = atoi(strFinal);
    free(strFinal);

    return a;
}

int main(){
    char *string;
    string = loadChar();
    int a = seqNums(string);
    printf("Ficará: %d.\n", a);
    
}