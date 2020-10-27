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
    switch (pegarDistancia(player, obj))
    {
    case distAli:
        printf("OK.\n");
        player->lugar = obj;
        comandoOlhar("aqui");
        break;
    case distNaoAqui:
        printf("Voce nao ve nenhum %s aqui.\n", add);
        break;
    case distObjetoDesconhecido:
        // ja foi lidado pelo pegarInvisvel
        break;
    default:
    if (obj->destino != NULL)
    {
    printf("OK.\n");
    player->lugar = obj->destino;
    comandoOlhar("aqui");
    }
    else
    {
    printf("Voce ja esta aqui.\n");
    }
    }
}