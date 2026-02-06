#ifndef __LISTA_H_T_
    #define __LISTA_H__

    #include<stdio.h>
    #include<stdlib.h>

    //#define
    //struct
    //typedef

    struct lista;
    

    /*TAD: Lista de inteiros*/

    typedef struct lista Lista;

    Lista* lst_cria (void);

    //assinaturas das funções
    #include"LISTA.C"
#endif