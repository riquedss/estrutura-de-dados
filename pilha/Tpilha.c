#include "Tpilha.h"

Tpilha *createNo(int value){
    Tpilha *no = (Tpilha*) malloc(sizeof(Tpilha));
    no->value = value;
    no->prox = NULL;
    return no;
}



int main(){
    Tpilha *lista = initialize();
    Tpilha *no = createNo(10);
    printf("%d\n", no->value);

    return 0;
}