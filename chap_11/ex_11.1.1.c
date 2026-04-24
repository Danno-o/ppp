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

void criarFila(struct fila *fila){
    (*fila).start = NULL;
    (*fila).end = NULL;
}

void inserirFila(struct fila *queue, double x){
    struct node *new = malloc(sizeof(struct node));
    (*new).elem = x;
    if ((*queue).start == NULL) (*queue).start = new;
    else (*(*queue).end).next = new;
    (*queue).end = new;
}

void imprimirFila(struct fila *queue){
    struct node *temp = (*queue).start;

    if (temp == NULL){
        printf("Fila vazia!\n");
        return;
    }
    
    printf("Fila: ");
    while (temp != NULL){
        printf("%.2f -> ", (*temp).elem);
        temp = (*temp).next;
    }
    printf("NULL\n");
    
}

void removerDaFila(struct fila *queue){
    struct node *atual = (*queue).start;
    struct node *anterior = NULL;
    int i = 1, pos;
    printf("Indique a posição que quer remover: ");
    scanf("%d", &pos);
    if (atual == NULL){
        printf("Fila vazia!");
        return;
    }
    while (atual != NULL && i < pos){
        anterior = atual;
        atual = (*atual).next;
        i++;
    }
    if (atual != NULL){
        if (anterior == NULL){
            (*queue).start = (*atual).next;
        }
        else{
            (*anterior).next = (*atual).next;
        }
        if (atual == (*queue).end){
            (*queue).end = anterior;
        }
        free(atual);
        printf("Fila atualizada!\n");
        imprimirFila(queue);
    }
    else{
        printf("Posição inválida!\n");
    }
    
}

int main(){
    struct fila *queue = malloc(sizeof(struct fila));
    criarFila(queue);
    int n = 0;
    float x;
    printf("O nº de doubles: ");
    scanf("%d", &n);
    printf("Insira os elementos: \n");
    for (int i = 0; i < n; i++){
        scanf("%f", &x);
        inserirFila(queue, x);
    }
    imprimirFila(queue);
    removerDaFila(queue);
    
    return 0;
}