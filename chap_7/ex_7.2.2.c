#include <stdio.h>
#define NUM_EQUIPAS 4
#define NUM_JOGOS 5


struct Equipa{
    char *equipa;
    int g, p, j;
};

struct Jogo{
    char *equipa1, *equipa2;
    int golo_equipa1, golo_equipa2;
};

int main(){
    struct Equipa equipa[] = 
    {
        {"Benfica", 0, 0, 0},
        {"FC Porto", 0, 0, 0},
        {"Sporting", 0, 0, 0},
        {"Ronaldo", 0, 0, 0},
    };
}