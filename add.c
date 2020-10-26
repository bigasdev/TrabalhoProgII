#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include "objetos.h"

static bool objetoTag(OBJETO* obj, const char* add)
{
    return add != NULL && *add != '\0' && strcmp(add, obj->tag) == 0;
}

static OBJETO* pegarObjeto(const char* add)
{
    OBJETO* obj, * res = NULL;
    for (obj = objs; obj < fimDosObjs; obj++)
    {
        if (objetoTag(obj, add))
        {
            res = obj;
        }
    }
    return res;
}
OBJETO *estaVisivel(const char* intencao, const char* add)
{
    OBJETO* obj = pegarObjeto(add);
    if (obj == NULL)
    {
        printf("Eu nao sei %s.\n", intencao);
    }
    else if (!(obj == player ||
        obj == player->lugar ||
        obj->lugar == player ||
        obj->lugar == player->lugar ||
        obj->lugar == NULL ||
        obj->lugar->lugar == player ||
        obj->lugar->lugar == player->lugar))
    {
        printf("Voce nao ve %s aqui.\n", add);
        obj = NULL;
    }
    return obj;
}

OBJETO* verObjetos(OBJETO* de, const char* verbo, const char* add)
{
    OBJETO* obj = NULL;
    if (de == NULL)
    {
        printf("Eu nao entendo o que voce quer %s.\n", verbo);
    }
    else if ((obj = pegarObjeto(add)) == NULL)
    {
        printf("Eu nao entendo o que voce quer %s.\n", verbo);
    }
    else if (obj == de)
    {
        printf("Voce nao deveria fazer isso com %s.\n", obj->descricao);
        obj = NULL;
    }
    else if (obj->lugar != de)
    {
        if (de == player)
        {
            printf("Voce nao esta segurando nenhum %s.\n", add);
        }
        else
        {
            printf("Parece que nao tem nenhum %s no %s.\n",
                add, de->descricao);
        }
        obj = NULL;
    }
    return obj;
}