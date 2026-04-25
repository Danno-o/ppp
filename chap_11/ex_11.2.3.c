#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[13];
    int num, nota1, nota2, nota3, media;
} alunos;

struct node{
    alunos info;
    struct node *next;
};

struct fila{
    struct node *start;
    struct node *end;
};

int vazia(struct fila *queue){
    if ((*queue).start == NULL) return 1;
    else return 0;
}

void criarFila(struct fila *queue){
    (*queue).start = NULL;
    (*queue).end = NULL;
}

void inserirFila(struct fila *queue, alunos temp){
    struct node *new = malloc(sizeof(struct node));
    if (new == NULL) return;
    (*new).info = temp;
    if (vazia(queue)) (*queue).start = new;
    else (*(*queue).end).next = new;
    (*queue).end = new;
}

void melhorMedia(struct fila *queue){
    struct node *temp = (*queue).start;
    int atualAverage, bestAverage;
    char bestName[13];
    strcpy(bestName, (*temp).info.nome);
    if (vazia(queue)){
        printf("A fila está vazia!");
        return;
    }
    while (temp != NULL){
        atualAverage = (*temp).info.media;
        if (atualAverage > bestAverage){
            bestAverage = atualAverage;
            strcpy(bestName, (*temp).info.nome);
        }
        temp = (*temp).next;
    }
    printf("A melhor média é %d do aluno %s.\n", bestAverage, bestName);
}


int main(){
    int n;
    struct fila *queue = malloc(sizeof(struct node));
    criarFila(queue);
    
    alunos temp;

    printf("Quantos alunos tem a turma: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        printf("Aluno %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", temp.nome);
        printf("Indique as 3 notas: ");
        scanf("%d %d %d", &temp.nota1, &temp.nota2, &temp.nota3);

        temp.media = (temp.nota1 + temp.nota2 + temp.nota3) / 3;

        inserirFila(queue, temp);
    }
    melhorMedia(queue);
}
