#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "objetos.h"
#include "etc.h"
#include "add.h"
#include "match.h"

bool comandoOlharAqui(void)
{
    printf("Voce esta no/a %s.\n", player->lugar->descricao);
    listaObjetosNoLugar(player->lugar);
    return true;
}


bool comandoOlhar(void)
{
        OBJETO* obj = estaVisivel("o que voce quer olhar", params[0]);
        switch (pegarDistancia(player, obj))
        {
        case distAquiInventario:
            printf("Dificil de ver, tente pegar isso primeiro.\n");
            break;
        case distAli:
            printf("Muito longe, tente chegar mais perto.\n");
            break;
        case distNaoAqui:
            printf("Voce nao ve nenhum %s aqui.\n", params[0]);
            break;
        case distObjetoDesconhecido:
            // ja lidado
            break;
        default:
            printf("%s", obj->detalhes);
            listaObjetosNoLugar(obj);
        }   
        return true;
}

static void moverPlayer(OBJETO* passagem)
{
    printf("%s", passagem->textoIda);
    if (passagem->destino != NULL)
    {
        player->lugar = passagem->destino;
        printf("\n");
        comandoOlharAqui();
    }
}

bool comandoIr(void)
{
    OBJETO *obj = estaVisivel("onde voce quer ir", params[0]);
    switch (pegarDistancia(player, obj))
    {
    case distAli:
        moverPlayer(pegarPassagem(player->lugar, obj));
        break;
    case distNaoAqui:
        printf("Voce nao ve nenhum %s aqui.\n", params[0]);
        break;
    case distObjetoDesconhecido:
        // ja foi lidado pelo pegarInvisvel
        break;
    default:
        moverPlayer(obj);
    }
    return true;
}