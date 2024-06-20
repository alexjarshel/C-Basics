#include <stdio.h>
#include <stdlib.h>

int main()
{

    typedef struct NO{
        int dado;
        struct NO* prox;
    }NO;

    typedef struct PILHA{
        NO* topo;
    }PILHA;

    void empilha(){
        NO* ptr = (NO *) malloc(sizeof(NO));
        ptr->dado = rand()%100;
        ptr->prox = ptr->topo;
        p->topo = ptr; 
    }

    PILHA *p;

    printf("fala fio bao  %d \n" , *p);
    return 0;
}
