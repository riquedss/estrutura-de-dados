#include "Tpilha.h"

int main(){
    //teste das operações
    TPilha *lista = NULL;
    lista = push(lista, 4);
    lista = push(lista, 2);
    lista = pop(lista);
    lista = push(lista, 1);
    lista = push(lista, 0);
    busca(lista);
    Tlibera(lista);
    return 0;
}