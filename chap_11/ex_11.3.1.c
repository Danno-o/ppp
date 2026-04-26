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
        (*new).num = vet[i];
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
        printf("%d -> ", (*temp).num);
        temp = (*temp).next;
    }
    printf("NULL\n");
}

void ocorFila(struct fila *queue){
    struct node *atual = (*queue).start;
    while (atual != NULL){
        int jaVisto = 0;
        struct node *anterior = (*queue).start;
        while(anterior != atual){
            if (anterior->num == atual->num){
                jaVisto = 1;
                break;
            }
            anterior = (*anterior).next;
        }

        if (!jaVisto){
            int cont = 0;
            struct node *temp = (*queue).start;
            while (temp != NULL){
                if ((*temp).num == (*atual).num){
                    cont++;
                }
                temp = (*temp).next;
            }
            printf("--O nº %d apareceu %d vezes.\n", (*atual).num, cont);
        }
        atual = (*atual).next;
    }  
}

int main(){
    struct fila *queue = malloc(sizeof(struct fila));
    int size;
    criarFila(queue);
    printf("Indique o tamanho do vetor: ");
    scanf("%d", &size);
    int vet[size];
    printf("Indique os elementos do vetor:\n");
    for (int i = 0; i < size; i++){
        scanf("%d", &vet[i]);
    }
    inserirFila(queue, vet, size);
    imprimirFila(queue);
    ocorFila(queue);
    
}