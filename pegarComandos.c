#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "lugares.h"
#include "inventario.h"

bool comandoExecutar(char* input)
{
    char* verbo = strtok(input, " \n");
    char* add = strtok(NULL, " \n");

    if (verbo != NULL)
    {
        if (strcmp(verbo, "sair") == 0)
        {
            return false;
        }
        else if (strcmp(verbo, "olhar") == 0)
        {
            comandoOlhar(add);
        }
        else if (strcmp(verbo, "ir") == 0)
        {
            comandoIr(add);
        }
        else if (strcmp(verbo, "pegar") == 0)
        {
            comandoPegar(add);
        }
        else if (strcmp(verbo, "dropar") == 0)
        {
            executarDrop(add);
        }
        else if (strcmp(verbo, "dar") == 0)
        {
            executarDar(add);
        }
        else if (strcmp(verbo, "pedir") == 0)
        {
            executarPedir(add);
        }
        else if (strcmp(verbo, "mochila") == 0)
        {
            executarInventario();
        }
        else
        {
            printf("Eu nao sei '%s'.\n", verbo);
        }
    }
    return true;
}