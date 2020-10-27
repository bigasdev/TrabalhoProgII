#include <stdio.h>
#include "objetos.h"

static const char* tags0[] = { "patio da fatec", NULL };
static const char* tags1[] = { "direita", "vaga da direita", "vaga", NULL };
static const char* tags2[] = { "esquerda", "vaga da esquerda", "vaga", NULL };
static const char* tags3[] = { "cantina", "corredor", "corredor da cantina", NULL };
static const char* tags4[] = { "laboratorio", "corredor", "corredor do laboratorio", NULL };
static const char* tags5[] = { "player", NULL };
static const char* tags6[] = { "guarda", "guardinha", NULL };
static const char* tags7[] = { "saida", "voltar", "patio", NULL };
static const char* tags8[] = { "saida", "voltar", "patio", NULL };
static const char* tags9[] = {NULL};
static const char* tags10[] = {NULL};

OBJETO objs[] = {
   {"Patio da fatec", tags0  , NULL , NULL, "O patio esta calmo e vazio", NULL, NULL, NULL, 9999},
   {"Vaga da direita", tags1   , patio , vagaDireita, "a caverna e fria e vazia, cheia de goblins", NULL, NULL, NULL, 9999},
   {"Vaga da esquerda", tags2   , patio , vagaEsquerda, "a caverna e fria e vazia, cheia de goblins", NULL, NULL, NULL, 9999},
   {"Corredor para a cantina", tags3  , vagaDireita , cantina, "O patio esta calmo e vazio", NULL, NULL, NULL, 9999},
   {"Corredor para o laboratorio", tags4   , vagaEsquerda , laboratorio, "a caverna e fria e vazia, cheia de goblins", NULL, NULL, NULL, 9999},
   {"Voce mesmo", tags5  , patio , NULL, "a caverna e fria e vazia, cheia de goblins", "Voce tem:", NULL, NULL, 20},
   {"Um guardinha", tags6   , patio , NULL, "a caverna e fria e vazia, cheia de goblins", "Ele tem:", NULL, NULL, 20},
   {"Saida da vaga", tags7   , vagaDireita , patio, "a caverna e fria e vazia, cheia de goblins", NULL, NULL, NULL, 9999},
   {"Saida da vaga", tags8   , vagaEsquerda , patio, "a caverna e fria e vazia, cheia de goblins", NULL, NULL, NULL, 9999},
   {"Cantina", tags9   , NULL , NULL, "a caverna e fria e vazia, cheia de goblins", NULL, NULL, NULL, 9999},
   {"Laboratorio", tags10   , NULL , NULL, "a caverna e fria e vazia, cheia de goblins", NULL, NULL, NULL, 9999}
};