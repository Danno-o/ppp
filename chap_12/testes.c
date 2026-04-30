#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Pessoa{
    char nome[64];
    int idade;
    struct Pessoa *filho;
} Pessoa;

typedef struct NoFila{
    Pessoa *pessoa;
    struct NoFila *prox;
} NoFila;

typedef struct Fila{
    NoFila *frente;
    NoFila *tras;
    size_t tamanho;
} Fila;

void filaStart(Fila *f){
    f->frente = NULL;
    f->tras = NULL;
    f->tamanho = 0;
}

Pessoa *pessoaCriar(const char *nome, int idade, Pessoa *filho){
    Pessoa *temp = malloc(sizeof(Pessoa));
    strcpy(temp->nome, nome);
    temp->idade = idade;
    temp->filho = filho;
    return temp;
}

Pessoa *filaProcurar(const Fila *f, const char *nome){
    NoFila *temp = f->frente;
    if (temp == NULL) exit(1);
    while (temp != NULL){
        if (strcmp(temp->pessoa->nome, nome) == 0){
            return temp->pessoa;
        }
        temp = temp->prox;
    }
    return NULL;
}

void inserirFila(Fila *f, Pessoa *p) {
    NoFila *novo = malloc(sizeof(NoFila));
    novo->pessoa = p;
    novo->prox = NULL;
    if (f->tras == NULL) f->frente = novo;
    else f->tras->prox = novo;
    f->tras = novo;
    f->tamanho++;
}

int main(){
    Fila *queue = malloc(sizeof(Fila));
    filaStart(queue);
    Pessoa *daniel = pessoaCriar("Daniel", 18, NULL);
    inserirFila(queue, daniel);
    Pessoa *p1 = filaProcurar(queue, "Daniel");
    printf("%s\n", p1->nome);
}