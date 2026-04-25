#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct strig{
    char palavra[35];
};

struct node{
    struct strig str;
    struct node *next;
};

struct fila{
    struct node *start;
    struct node *end;
};


void criarFila(struct fila *queue){
    (*queue).start = NULL;
    (*queue).end = NULL;
}

int filaVazia(struct fila *queue){
    if ((*queue).start == NULL) return 1;
    else return 0;
}

void inserirFila(struct fila *queue, char *string){
    struct node *new = malloc(sizeof(struct node));
    strcpy((*new).str.palavra, string);
    if (filaVazia(queue)) (*queue).start = new;
    else (*(*queue).end).next = new;
    (*queue).end = new;
}

void imprimirFila(struct fila *queue){
    struct node *temp = (*queue).start;
    if (filaVazia(queue)){
        printf("A fila está vazia!");
        return;
    }

    printf("Fila: ");
    while (temp != NULL){
        printf("%s -> ", (*temp).str.palavra);
        temp = (*temp).next;
    }
    printf("NULL\n");
    
}

int main(){
    struct fila *queue = malloc(sizeof(struct fila));
    int n;
    printf("Insira o nº de strings: \n");
    scanf("%d", &n);
    char string[100];
    criarFila(queue);
    printf("Insira as suas strings: \n");
    for (int i = 0; i < n; i++){
        scanf("%s", string);
        inserirFila(queue, string);
    }
    imprimirFila(queue);
}