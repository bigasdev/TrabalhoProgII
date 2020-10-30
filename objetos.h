#pragma once

typedef struct objeto {
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
#define biblioteca (objs + 9)
#define laboratorio (objs +10)
#define saidaBiblioteca   (objs + 11)
#define saidaLaboratorio       (objs + 12)
#define corredorCantina (objs + 13)
#define corredorBlocoA (objs + 14)
#define cantina (objs + 15)
#define blocoA (objs + 16)
#define corredorBlocoaCantina (objs + 17)
#define corredorTextil (objs + 18)
#define corredorCantinaA (objs + 19)
#define saidaPraBiblioteca (objs + 20)
#define saidaProLaboratorio (objs + 21)
#define laboratorioTextil (objs + 22)
#define saidaTextil (objs + 23)
#define cachorro (objs + 24)
#define alunoBanco (objs + 25)
#define livro (objs + 26)
#define bolinho (objs + 27)
#define lixeira (objs + 28)

#define fimDosObjs  (objs + 29)

