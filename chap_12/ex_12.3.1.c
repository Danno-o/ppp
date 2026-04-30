#include <stdio.h>
#include <stdlib.h>

struct node{
    int num;
    struct node *next;
};

struct fila{
    struct node *start;
    struct node *end;
};

struct pilha{
    struct node *top;
};

int vaziaFila(struct fila *queue){
    if ((*queue).start == NULL) return 1;
    else return 0;
}

int vaziaPilha(struct pilha *stack){
    if ((*stack).top == NULL) return 1;
    else return 0;    
}

void criarFila(struct fila *queue){
    (*queue).start = NULL;
    (*queue).end = NULL;
}

void criarStack(struct pilha *stack){
    (*stack).top = NULL;
}

void inserirFila(struct fila *queue, int x){
    struct node *new = malloc(sizeof(struct node));
    (*new).num = x;
    if (vaziaFila(queue)) (*queue).start = new;
    else (*(*queue).end).next = new;
    (*queue).end = new;
}

void inserirStack(struct pilha *stack, struct fila *queue, int size){
    struct node *atual = (*queue).start;
    for (int i = 0; i < size; i++){
        struct node *new = malloc(sizeof(struct node));
        (*new).num = (*atual).num;
        (*new).next = (*stack).top;
        (*stack).top = new;
        atual = atual->next;
    }
}

void imprimirFila(struct fila *queue){
    struct node *temp = (*queue).start;
    if (vaziaFila(queue)){
        printf("A fila está vazia");
        return;
    }
    printf("Fila: ");
    while (temp != NULL){
        printf("%d -> ", temp->num);
        temp = temp->next;
    }
    printf("NULL\n");
}

void imprimirStack(struct pilha *stack){
    struct node *temp = (*stack).top;
    if (vaziaPilha(stack)){
        printf("A fila está vazia");
        return;
    }

    printf("Pilha: ");
    while (temp != NULL){
        printf("%d -> ", temp->num);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main(){
    struct fila *queue = malloc(sizeof(struct fila));
    struct pilha *stack = malloc(sizeof(struct pilha));
    criarFila(queue);
    criarStack(stack);
    int n, x;
    printf("Indique o nº de valores: ");
    scanf("%d", &n);
    printf("Indique os valores:\n");
    for (int i = 0; i < n; i++){
        scanf("%d", &x);
        inserirFila(queue, x);
    }
    inserirStack(stack, queue, n);
    imprimirFila(queue);
    imprimirStack(stack);
    free(queue);
    free(stack);
}