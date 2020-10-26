#include <stdio.h>
#include <string.h>
#include "objetos.h"
#include "etc.h"
#include "add.h"


void comandoOlhar(const char* add)
{
    if (add != NULL && strcmp(add, "aqui") == 0)
    {
        printf("Voce esta na/o %s.\n", player->lugar->descricao);
        listaObjetosNoLugar(player->lugar);
    }
    else
    {
        printf("Eu nao entendo o que voce quer olhar.\n");
    }
}
void comandoIr(const char* add)
{
    OBJETO *obj = estaVisivel("onde voce quer ir", add);
    if (obj == NULL)
    {
        // ja foi lidado pelo estaVisivel
    }
    else if (obj->lugar == NULL && obj != player->lugar)
    {
        printf("OK.\n");
        player->lugar = obj;
        comandoOlhar("aqui");
    }
    else
    {
        printf("Voce ja esta aqui.\n");
    }
}