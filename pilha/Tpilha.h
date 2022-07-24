#include <stdio.h>
#include <stdlib.h>

typedef struct pilha{
    int value;
    struct pilha *prox;
} TPilha;

void busca(TPilha *no);
void Tlibera(TPilha *inicio);
TPilha *cria(int value);
TPilha *push(TPilha *inicio, int value);
TPilha *pop(TPilha *inicio);