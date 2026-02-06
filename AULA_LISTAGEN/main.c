#include "LISTAGEN/LISTAGEN.H"

typedef struct ponto{
    float x,y
}Ponto;

Ponto* pto_cria(float x, float y);
void pto_imprime(void* pto);

int main(void){
    LISTAGEN* Lista=NULL;
    Lista=LGEN_INSERE(Lista, pto_cria(10,20));
    Lista= LGEN_INSERE(Lista, pto_cria(30,40));
    LGEN_PERCORRE(Lista, pto_imprime);
    return 0;
}

    Ponto* pto_cria(float x, float y){
        Ponto* p=(Ponto*)malloc(sizeof(Ponto));
        p->x=x;
        p->y=y;
        return p;
    }

    void pto_imprime(void* pto){
        Ponto* p=(Ponto*)pto;
        printf("(%2.f,%2.f)\n", p->x,p->y);
    }
