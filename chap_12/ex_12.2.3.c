#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
    char letra;
    struct node *next;
};

struct pilha{
    struct node *top;
};

int vaziaPilha(struct pilha *stack){
    if ((*stack).top == NULL) return 1;
    else return 0;
}

void criarStack(struct pilha *stack){
    (*stack).top = NULL;
}

void inserirStack(struct pilha *stack, char c){
    struct node *new = malloc(sizeof(struct node));
    new->letra = c;
    (*new).next = (*stack).top;
    (*stack).top = new;
}

void imprimirStack(struct pilha *stack){
    struct node *temp = (*stack).top;
    if (vaziaPilha(stack)){
        printf("A fila está vazia");
        exit(1);
    }
    printf("Palavra invertida: ");
    while (temp != NULL){
        printf("%c", temp->letra);
        temp = temp->next;
    }
    printf("\n");
    
}

int main(){
    struct pilha *stack = malloc(sizeof(struct pilha));
    criarStack(stack);
    char palavra[50];
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    int size = strlen(palavra);
    for (int i = 0; i < size; i++){
        inserirStack(stack, palavra[i]);
    }
    imprimirStack(stack);
    
}