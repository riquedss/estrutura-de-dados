#include "Tpilha.h"

void busca(TPilha *no){
    if(no){
        printf("%d\n", no->value);
        busca(no->prox);
    }
}

void Tlibera(TPilha *inicio){
    if(inicio){
        Tlibera(inicio->prox);
        free(inicio);
    }
}

TPilha *cria(int value){
    TPilha *no = (TPilha*) malloc(sizeof(TPilha));
    no->value = value;
    no->prox = NULL;
    return no;
}

TPilha *push(TPilha *inicio, int value){
    TPilha *aux = inicio;
    inicio = cria(value);
    inicio->prox = aux;
    return inicio;
} 

TPilha *pop(TPilha *inicio){
    TPilha *aux = inicio;
    if(inicio){
        inicio = inicio->prox;
        free(aux);
        return inicio;
    }
}