#include <stdio.h>
#include "objetos.h"
#include "etc.h"

void moverObjeto(OBJETO* obj, OBJETO* para)
{
    if (obj == NULL)
    {
        // ja foi lidado
    }
    else if (para == NULL)
    {
        printf("Nao tem ninguem para dar isso.\n");
    }
    else if (obj->peso > para->capacidade)
    {
        printf("Isso e muito pesado.\n");
    }
    else if (obj->peso + pesoDosObjetos(para) > para->capacidade)
    {
        printf("Iria ficar pesado demais.\n");
    }
    else
    {
        if (para == player->lugar)
        {
            printf("Voce jogou %s fora.\n", obj->descricao);
        }
        else if (para != player)
        {
            printf(para == guarda ? "Voce entregou %s para %s.\n"
                : "Voce colocou %s no %s.\n",
                obj->descricao, para->descricao);
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
        obj->lugar = para;
    }
}