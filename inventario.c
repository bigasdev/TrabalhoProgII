#include <stdio.h>
#include <stdbool.h>
#include "objetos.h"
#include "add.h"
#include "etc.h"
#include "mover.h"
#include "match.h"

bool comandoPegar(void)
{
	OBJETO* obj = estaVisivel("o que voce quer pegar", params[0]);
	switch (pegarDistancia(player, obj))
	{
	case distSi:
		printf("Voce nao deveria fazer isso com %s.\n", obj->descricao);
		break;
	case distSegurando:
		printf("Voce ja tem %s.\n", obj->descricao);
		break;
	case distAli:
		printf("Muito longe, chegue mais perto.\n");
		break;
	case distObjetoDesconhecido:
		// ja foi lidado
		break;
	default:
	if (obj->lugar == guarda)
	{
	printf("Voce deveria pedir ao %s educadamente.\n", obj->lugar->descricao);
	}
	else
	{
	moverObjeto(obj, player);
	}
	}
	return true;
}

bool executarDrop(void)
{
	moverObjeto(verObjetos(player, "dropar", params[0]), player->lugar);
	return true;
}
bool executarPedir(void)
{
	moverObjeto(verObjetos(autorAqui(), "pedir", params[0]), player);
	return true;
}
bool executarDar(void)
{
	moverObjeto(verObjetos(player, "dar", params[0]), autorAqui());
	return true;
}
bool executarInventario(void)
{
	if (listaObjetosNoLugar(player) == 0)
	{
		printf("Voce nao tem nada.\n");
	}
	return true;
}