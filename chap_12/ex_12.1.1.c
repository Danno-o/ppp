#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
    char palavra[50];
    struct node *next;
};
struct pilha{
    struct node *top;
};

void vazia(struct pilha *stack){
    if ((*stack).top == NULL) return 1;
    else return 0;
}


void criarStack(struct pilha *stack){
    (*stack).top = NULL;
}