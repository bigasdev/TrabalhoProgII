#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include "objetos.h"
#include "etc.h"

static bool objetoTag(OBJETO* obj, const char* add)
{
    if (add != NULL && *add != '\0')
    {
        const char** tag;
        for (tag = obj->tag; *tag != NULL; tag++)
        {
            if (strcmp(*tag, add) == 0) return true;
        }
    }
    return false;
}

static OBJETO addDesconhecido;

static OBJETO* pegarObjeto(const char* add, OBJETO *de, DISTANCIA *distanciaMax)
{
    OBJETO* obj, * res = NULL;
    praCadaObjeto(obj)
    {
        if (objetoTag(obj, add) && pegarDistancia(de, obj) <= distanciaMax)
        {
            res = res == NULL ? obj : &addDesconhecido;
        }
    }
    return res;
}
OBJETO *estaVisivel(const char* intencao, const char* add)
{
    OBJETO* obj = pegarObjeto(add, player, distAli);
    if (obj == NULL)
    {
        if (pegarObjeto(add, player, distNaoAqui) == NULL)
        {
            printf("Eu nao entendo %s.\n", intencao);
        }
        else
        {
            printf("Voce nao ve nenhum %s aqui.\n", add);
        }
    }
    else if (obj == &addDesconhecido)
    {
        printf("Seja mais especifico sobre qual %s voce precisa.\n", add);
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
    else if ((obj = pegarObjeto(add, de, distSegurandoInventario)) == NULL)
    {
        if (pegarObjeto(add, player, distNaoAqui) == NULL)
        {
            printf("Eu nao sei o que voce quer com %s.\n", verbo);
        }
        else if (de == player)
        {
            printf("Voce nao esta segurando nenhum %s.\n", add);
        }
        else
        {
            printf("Parece que nao tem nenhum %s que voce possa pegar de %s.\n",
                add, de->descricao);
        }
    }
    else if (obj == &addDesconhecido)
    {
        printf("Seja mais especifico sobre qual %s voce quer %s.\n",
            add, verbo);
        obj = NULL;
    }
    else if (obj == de)
    {
        printf("Voce nao deveria fazer isso com %s.\n", obj->descricao);
        obj = NULL;
    }
    return obj;
}