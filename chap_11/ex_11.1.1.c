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

int filaVazia(struct fila *queue){                          // extra
    if ((*queue).start == NULL) return 1;
    else return 0;
}

void inserirFila(struct fila *queue, double x){
    struct node *new = malloc(sizeof(struct node));
    (*new).elem = x;
    if (filaVazia(queue)) (*queue).start = new;
    else (*(*queue).end).next = new;
    (*queue).end = new;
}

void imprimirFila(struct fila *queue){
    struct node *temp = (*queue).start;
    
    if (filaVazia(queue)){
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


void removerDaLista(struct fila *queue){                    // extra
    struct node *atual = (*queue).start;
    struct node *anterior = NULL;
    int i = 1, pos;
    printf("Indique a posição que quer remover: ");
    scanf("%d", &pos);
    if (filaVazia(queue)){
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

void removerDaFila(struct fila *queue){                     // extra
    struct node *atual = (*queue).start;
    struct node *temp = NULL;
    
    if (filaVazia(queue)){
        printf("A fila está vazia!");
        return;
    }
    
    temp = (*atual).next;
    (*queue).start = temp;
    free(atual);            // tenho e fazer "queue->end = NULL" ??
    imprimirFila(queue);
    
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
    // removerDaLista(queue);
    // removerDaFila(queue);
    
    return 0;
}