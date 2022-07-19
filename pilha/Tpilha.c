#include "Tpilha.h"

Tlista *createNo(int value){
    Tlista *no = (Tlista*) malloc(sizeof(Tlista));
    no->value = value;
    no->prox = NULL;
    return no;
}



int main(){
    Tlista *lista = initialize();
    Tlista *no = createNo(10);
    printf("%d\n", no->value);

    return 0;
}