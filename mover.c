#include <stdio.h>
#include "objetos.h"

void moverObjeto(OBJETO* obj, OBJETO* to)
{
    if (obj == NULL)
    {
        // ja foi lidado
    }
    else if (to == NULL)
    {
        printf("Nao tem ninguem para dar isso.\n");
    }
    else if (obj->lugar == NULL)
    {
        printf("Isso ta pesado demais.\n");
    }
    else
    {
        if (to == player->lugar)
        {
            printf("Voce jogou %s fora.\n", obj->descricao);
        }
        else if (to != player)
        {
            printf(to == guarda ? "Voce entregou %s para %s.\n"
                : "Voce colocou %s no %s.\n",
                obj->descricao, to->descricao);
        }
        else if (obj->lugar == player->lugar)
        {
            printf("Voce pegou %s.\n", obj->descricao);
        }
        else
        {
            printf("Voce conseguiu %s de %s.\n", obj->descricao,
                obj->lugar->descricao);
        }
        obj->lugar = to;
    }
}