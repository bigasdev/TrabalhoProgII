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
   {true, "Patio da fatec", tags0  , NULL , NULL, "O patio esta calmo e vazio", "Voce ve", "Bem vindo a FATEC", NULL, 9999},
   {true,"Vaga da direita", tags1   , patio , vagaDireita, "Uma vaga livre na direita", "Voce ve", "Indo para a vaga da direita..", NULL, 9999},
   {true,"Vaga da esquerda", tags2   , patio , vagaEsquerda, "Uma vaga livre na esquerda", "Voce ve", "Indo para a vaga da esquerda..", NULL, 9999},
   {true,"Corredor para a cantina", tags3  , vagaDireita , cantina, "Corredor que leva para a cantina", "Voce ve", "Indo para a cantina..", NULL, 9999},
   {true,"Corredor para o laboratorio", tags4   , vagaEsquerda , laboratorio, "Corredor que leva para o laboratorio", "Voce ve", "Indo para o laboratorio..", NULL, 9999},
   {true,"Voce mesmo", tags5  , patio , NULL, "Voce mesmo, um estudante", "Voce tem:", NULL, NULL, 20},
   {true,"Um guardinha", tags6   , patio , NULL, "Guarda da FATEC", "Ele tem:", NULL, NULL, 20},
   {true,"Saida da vaga", tags7   , vagaDireita , patio, NULL, NULL, "Indo para o patio..", NULL, 9999},
   {true,"Saida da vaga", tags8   , vagaEsquerda , patio, NULL, NULL, "Indo para o patio..", NULL, 9999},
   {true,"Cantina", tags9   , NULL , "Voce ve", "A cantina da FATEC, sera que ela esta aberta hoje?", NULL, NULL, NULL, 9999},
   {true,"Laboratorio", tags10   , NULL , "Voce ve", "Laboratorio", NULL, NULL, NULL, 9999}
};