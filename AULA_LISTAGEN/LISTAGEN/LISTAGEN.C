#include<stdio.h>
#include<stdlib.h>
#include "LISTAGEN.H"

LISTAGEN* LGEN_INSERE(LISTAGEN* l, void* info){
    LISTAGEN *novo=(LISTAGEN*)malloc(sizeof(LISTAGEN));
    novo->info=info;
    novo->prox=l;

    return novo;
}

void LGEN_PERCORRE(LISTAGEN* l, void (*cb)(void*)){
    for(LISTAGEN* p=l; p!=NULL; p=p->prox){
        cb(p->info);
        }
}
        