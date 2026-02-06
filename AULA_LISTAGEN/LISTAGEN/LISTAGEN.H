#ifndef __LISTAGEN_H__
    #define __LISTAGEN_H__

    typedef struct listagen{
        void *info;
        struct listagen* prox;
    }LISTAGEN;

LISTAGEN* LGEN_INSERE(LISTAGEN* l, void* info);
void LGEN_PERCORRE(LISTAGEN* l, void (*cb)(void*));

    #include "LISTAGEN.C"
#endif