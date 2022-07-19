#include "Tlista.h"
Tlista *createNo(int value){
    Tlista *no = (Tlista*) malloc(sizeof(Tlista));
    no->value = value;
    no->prox = NULL;
    return no;
}