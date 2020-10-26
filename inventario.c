#include <stdio.h>
#include "objetos.h"
#include "add.h"
#include "etc.h"
#include "mover.h"

void comandoPegar(const char* add)
{
	OBJETO* obj = estaVisivel("o que voce quer pegar", add);
	if (obj == NULL)
	{
		//ja foi lidado pelo estaVisivel
	}
	else if (obj == player)
	{
		printf("Voce nao deveria fazer isso com %s.\n", obj->descricao);
	}
	else if (obj->lugar == player)
	{
		printf("Voce ja tem %s.\n", obj->descricao);
	}
	else if (obj->lugar == guarda)
	{
		printf("Voce deveria pedir ao %s educadamente.\n", obj->lugar->descricao);
	}
	else
	{
		moverObjeto(obj, player);
	}
}

void executarDrop(const char* add)
{
	moverObjeto(verObjetos(player, "dropar", add), player->lugar);
}
void executarPedir(const char* add)
{
	moverObjeto(verObjetos(autorAqui(), "pedir", add), player);
}
void executarDar(const char* add)
{
	moverObjeto(verObjetos(player, "dar", add), autorAqui());
}
void executarInventario(void)
{
	if (listaObjetosNoLugar(player) == 0)
	{
		printf("Voce nao tem nada.\n");
	}
}