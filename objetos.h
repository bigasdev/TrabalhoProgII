#pragma once

typedef struct objeto {
    const char* descricao;
    const char** tag;
    struct objeto* lugar;
    struct objeto* destino;
    const char* details;
    const char* contents;
    const char* textGo;
    int            weight;
    int            capacity;
    int            health;
} OBJETO;

extern OBJETO objs[];

#define pasto      (objs + 0)
#define caverna    (objs + 1)
#define prata     (objs + 2)
#define ouro       (objs + 3)
#define guarda      (objs + 4)
#define player     (objs + 5)
#define entradaCaverna  (objs + 6)
#define saidaCaverna  (objs + 7)
#define paredePasto  (objs + 8)
#define paredeCaverna   (objs + 9)

#define fimDosObjs  (objs + 10)

