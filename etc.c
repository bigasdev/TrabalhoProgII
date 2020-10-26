#include <stdio.h>
#include "objetos.h"

OBJETO* autorAqui(void)
{
    OBJETO* obj;
    for (obj = objs; obj < fimDosObjs; obj++)
    {
        if (obj->lugar == player->lugar && obj == guarda)
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
    for (obj = objs; obj < fimDosObjs; obj++)
    {
        if (obj != player && obj->lugar == lugar)
        {
            if (contador++ == 0)
            {
                printf("Voce ve:\n");
            }
            printf("%s\n", obj->descricao);
        }
    }
    return contador;
}