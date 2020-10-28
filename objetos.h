#pragma once
#include <stdbool.h>

typedef struct objeto {
    bool         (*condition)(void);
    const char* descricao;
    const char** tag;
    struct objeto* lugar;
    struct objeto* destino;
    const char* detalhes;
    const char* conteudo;
    const char* textoIda;
    int            peso;
    int            capacidade;
} OBJETO;

extern OBJETO objs[];

#define patio      (objs + 0)
#define vagaDireita    (objs + 1)
#define vagaEsquerda    (objs + 2)
#define corredorRefeitorio     (objs + 3)
#define corredorLaboratorio       (objs + 4)
#define player (objs + 5)
#define guarda (objs + 6)
#define saidaDireita     (objs + 7)
#define saidaEsquerda       (objs + 8)
#define cantina (objs + 9)
#define laboratorio (objs +10)


#define fimDosObjs  (objs + 11)

#define objetoValido(obj)	((obj) != NULL && (*(obj)->condition)())
#define praCadaObjeto(obj)	for (obj = objs; obj < fimDosObjs; obj++) if (objetoValido(obj))
