#include <stdio.h>
#include <stdlib.h>

struct node{
    int elem;
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

int vazia(struct fila *queue){
    if ((*queue).start == NULL) return 1;
    else return 0;
}

void inserirFila(struct fila *queue, int vet[], int size){
    for (int i = 0; i < size; i++){
        struct node *new = malloc(sizeof(struct node));
        (*new).elem = vet[i];
        if (vazia(queue)) (*queue).start = new;
        else (*(*queue).end).next = new;
        (*queue).end = new;
    }
}

void imprimirFila(struct fila *queue){
    struct node *temp = (*queue).start;

    if (vazia(queue)){
        printf("A fila está vazia!\n");
        return;
    }
    
    printf("Fila: ");
    while (temp != NULL){
        printf("%d -> ", (*temp).elem);
        temp = (*temp).next;
    }
    printf("NULL\n");
}

int main(){
    struct fila *queue = malloc(sizeof(struct fila));
    criarFila(queue);
    int n;
    printf("Indique o tamanho do vetor: ");
    scanf("%d", &n);
    int vet[n];
    printf("Indique os elementos do vetor:\n");
    for (int i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }
    inserirFila(queue, vet, n);
    imprimirFila(queue);
}