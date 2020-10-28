#include <stdio.h>
#include "objetos.h"
#include "etc.h"

OBJETO* pegarPassagem(OBJETO* de, OBJETO* para)
{
    OBJETO* obj;
    praCadaObjeto(obj)
    {
        if (obj->lugar == de)
        {
            return obj;
        }
    }
    return NULL;
}

DISTANCIA pegarDistancia(OBJETO* de, OBJETO* para)
{
    return !objetoValido(para) ? distObjetoDesconhecido :
        para == de ? distSi :
        para->lugar == de ? distSegurando :
        para == de->lugar ? distLugar :
        para->lugar == de->lugar ? distAqui :
        pegarPassagem(de->lugar, para) != NULL ? distAli :
        !objetoValido(para->lugar)  ? distNaoAqui :
        para->lugar->lugar == de ? distSegurandoInventario :
        para->lugar->lugar == de->lugar ? distAquiInventario :
        distNaoAqui;
}

OBJETO* autorAqui(void)
{
    OBJETO* obj;
    praCadaObjeto(obj)
    {
        if (pegarDistancia(player, obj) == distAqui)
        {
            return obj;
        }
    }
    return NULL;
}

int listaObjetosNoLugar(OBJETO* lugar)
{
    int contador = 0;
    OBJETO* obj;
    praCadaObjeto(obj)
    {
        if (obj != player && obj->lugar == lugar)
        {
            if (contador++ == 0)
            {
                printf("%s:\n", lugar->conteudo);
            }
            printf("%s\n", obj->descricao);
        }
    }
    return contador;
}

int pesoDosObjetos(OBJETO* container)
{
    int sum = 0;
    OBJETO* obj;
    praCadaObjeto(obj)
    {
        if (obj->lugar == container) sum += obj->peso;
    }
    return sum;
}