#include <stdio.h>
#include <stdlib.h>

struct node{
    int num;
    struct node *next;
};
struct pilha{
    struct node *top;
};

int vazia(struct pilha *stack){
    if ((*stack).top == NULL) return 1;
    else return 0;
}

void criarStack(struct pilha *stack){
    (*stack).top = NULL;
}

void inserirStack(struct pilha *stack, int x){
    struct node *new = malloc(sizeof(struct node));
    (*new).num = x;
    (*new).next = (*stack).top;
    (*stack).top = new;
}

void imprimirStack(struct pilha *stack){
    struct node *temp = (*stack).top;
    if (vazia(stack)){
        printf("A pilha está vazia!");
        return;
    }
    
    printf("Pilha: ");
    while (temp != NULL){
        printf("%d -> ", (*temp).num);
        temp = (*temp).next;
    }
    printf("NULL\n");
}

int main(){
    struct pilha *stack = malloc(sizeof(struct pilha));
    criarStack(stack);
    int n, x;
    printf("Indique nº de valores: ");
    scanf("%d", &n);
    printf("Indique os valores:\n");
    for (int i = 0; i < n; i++){
        scanf("%d", &x);
        inserirStack(stack, x);
    }
    imprimirStack(stack);
}