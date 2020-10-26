#pragma once

typedef struct objeto {
    const char* descricao;
    const char* tag;
    struct objeto* lugar;
} OBJETO;

extern OBJETO objs[];

#define pasto      (objs + 0)
#define caverna    (objs + 1)
#define prata     (objs + 2)
#define ouro       (objs + 3)
#define guarda      (objs + 4)
#define player     (objs + 5)
#define fimDosObjs  (objs + 6)

