#include <stdio.h>
#include "objetos.h"

static const char* tags0[] = { "pasto", NULL };
static const char* tags1[] = { "caverna", NULL };
static const char* tags2[] = { "prata", "moeda", "moeda de prata", NULL };
static const char* tags3[] = { "ouro", "moeda", "moeda de ouro", NULL };
static const char* tags4[] = { "guarda", "guarda corrupto", NULL };
static const char* tags5[] = { "player", NULL };
static const char* tags6[] = { "leste", "entrada", NULL };
static const char* tags7[] = { "oeste", "saida", NULL };
static const char* tags8[] = { "oeste", "norte", "sul", "floresta", NULL };
static const char* tags9[] = { "leste", "norte", "sul", "pedra", NULL };

OBJETO objs[] = {
   {"pasto de lumbridge", tags0  , NULL , NULL, "o pasto e um lugar calmo e tranquilo", NULL, NULL, NULL, 9999, NULL },
   {"caverna de goblins", tags1   , NULL , NULL, "a caverna e fria e vazia, cheia de goblins", NULL, NULL, NULL, 9999, NULL},
   {"uma moeda de prata", tags2  , pasto , NULL, "uma moeda simples de prata", NULL, NULL, 1, NULL, NULL },
   {"um ouro"  , tags3   , caverna , NULL, "uma moeda simples de ouro", NULL, NULL, 1, NULL, NULL },
   {"um guarda corrupto", tags4  , pasto , NULL, "um guarda corrupto e preguicoso", "ele tem", NULL, NULL, 20, 100 },
   {"voce mesmo"     , tags5, pasto , NULL, "voce precisaria de um espelho pra olhar a si mesmo", "voce tem", NULL, NULL, 20, 100 },
   {"entrada de uma caverna ao leste", tags6, pasto , caverna, "a entrada esta coberta por arbustos", NULL, "o guarda nao deixa voce prosseguir", NULL, NULL, NULL },
   {"saida da caverna ao oeste", tags7, caverna, pasto, "tem raio de sol por toda saida", NULL, "voce sai da caverna", NULL, NULL, NULL },
   {"floresta densa em todo lugar"    , tags8, pasto, NULL , "a floresta e gigante e cheia de arvores", NULL, "floresta densa esta bloqueando sua passagem", NULL, NULL, NULL  },
   {"pedra por todo lado"      , tags9, caverna , NULL , "esta escrito nas pedras a senha 'abccb'", NULL, "as pedras estao bloqueando seu caminho", NULL, NULL, NULL  }
};