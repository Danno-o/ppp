#include <stdio.h>
#include <string.h>
#include <ctype.h>

void encriptar(char a[]){
    char x[26] = "DEIABCFGHJKLZYXWVUTSRQPONM";
    int index;

    for(int i = 0; a[i] != '\0'; i++){
        a[i] = (char)toupper(a[i]);
    }
    for(int j = 0; j < a[j]; j++){
        if (isalpha(a[j])){
            index = a[j] - 'A';
            a[j] = x[index];
        }
    }
    printf("%s\n", a);
}

void desencriptar(char a[]){
    char y[26] = "DEIABCFGHJKLZYXWVUTSRQPONM";
    char inv[26];   
    int index;
    int pos;

    for(int i = 0; a[i] != '\0'; i++){
        a[i] = (char)toupper(a[i]);
    }
    for (int l = 0; l < 26; l++){
        pos = y[l] - 'A';
        inv[pos] = 'A' + l;
    }
    for(int j = 0; j < y[j]; j++){
        if (isalpha(a[j])){
            index = a[j] - 'A';
            a[j] = inv[index];
        }
    }
    printf("%s\n", a);
}

int main(){
    char string[50] = "Boas malta";
    char string2[50] = "DEIABCFGHJKLZYXWVUTSRQPONM";
    encriptar(string);
    desencriptar(string2);
}