#include <stdio.h>
#include <stdlib.h>

struct node{
    double elem;
    struct node *next;
};

struct fila{
    struct node *start;
    struct node *end;
};

int criarFila(struct fila *fila){
    (*fila).start = NULL;
    (*fila).end = NULL;
}

int inserirFila(struct fila *queue, double x){
    struct node *new = malloc(sizeof(struct node));
    (*new).elem = x;
    if ((*queue).start == NULL) (*queue).start = new;
    else (*queue).end->next = new;
    (*queue).end = new;
}

int removerDaFila(struct fila *queue){
    struct node *temp = (*queue).start;
    
}



int main(){
    struct fila *queue;
    printf("Insira os elementos");
    criarFila(queue);
}