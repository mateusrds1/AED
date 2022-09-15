#include <stdlib.h>
#include <stdio.h>

struct no {
    int val;
    struct no* prox;
};

struct linkedlist {
    struct no* cabeca;
    int qtdade;
};

struct linkedlist* inicializar() {
    struct linkedlist* lista = (struct linkedlist*)malloc(sizeof(struct linkedlist));
    lista->cabeca = (int*)calloc(capacidade, sizeof(int));
    lista->qtdade = 0;
    return lista;
}

struct no* alocarNovoNo(int valor) {
    //TODO
}

void inserirElementoNoFim(struct linkedlist* lista, int valor) {
    //TODO
}

void inserirElementoNoInicio(struct linkedlist* lista, int valor) {
    if(!malloc(sizeof(struct linkedlist))){
        struct linkedlist* lista = (struct linkedlist*)malloc(sizeof(struct linkedlist));
    }
    struct linkedlist* aux = lista;
    lista = novoNo;
    novoNo->prox = aux;
    free(aux);
}

void inserirElementoEmPosicao(struct linkedlist* lista, int valor, int posicao) {
    //TODO
}

int obterElementoEmPosicao(struct linkedlist* lista, int posicao) {
    //TODO
}

void removerElementoEmPosicao(struct linkedlist* lista, int posicao) {
    if(posicao >= lista[0] && posicao <= lista->qtdade){
    cont;
    elementoremoção;
    aux;
    novosotado;
    free(aux);
    }
}

void imprimirLista(struct linkedlist* lista) {
    //usamos o aux para percorrer a lista
    if (lista->cabeca != NULL) {
        struct no* aux = lista->cabeca;
        //navega partindo da cabeça até chegar NULL
        printf("[");
        do {
            printf("%d", aux->val);
            aux = aux->prox;
            if (aux != NULL) {
                printf(", ");
            }
        } while (aux != NULL);
        printf("]");
    }
    else {
        printf("A lista está vazia!");
    }
}
