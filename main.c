#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include "pegarComandos.h"

static char input[100] = "olhar aqui";


static bool getFromFP(FILE* fp)
{
    bool ok = fgets(input, sizeof input, fp) != NULL;
    if (ok) input[strcspn(input, "\n")] = '\0';
    return ok;
}
static bool getInput(const char* filename)
{
    static FILE* fp = NULL;
    bool ok;
    if (fp == NULL)
    {
        if (filename != NULL) fp = fopen(filename, "rt");
        if (fp == NULL) fp = stdin;
    }
    else if (fp == stdin && filename != NULL)
    {
        FILE* out = fopen(filename, "at");
        if (out != NULL)
        {
            fprintf(out, "%s\n", input);
            fclose(out);
        }
    }
    printf("\n--> ");
    ok = getFromFP(fp);
    if (fp != stdin)
    {
        if (ok)
        {
            printf("%s\n", input);
        }
        else
        {
            fclose(fp);
            ok = getFromFP(fp = stdin);
        }
    }
    return ok;
}

int main()
{
    printf("\n");
    printf("FATECANO e um jogo de aventura por texto, nele temos o mapa da FATEC livre\n");
    printf("para ser explorado com itens e pessoas para interagir.\n");
    printf("O objetivo do jogo e coletar objetos e explorar a Fatec.\n");
    printf("\n");
    printf("Lista de comandos:\n");
    printf("\n'ir' + 'lugar' para se mover para o local.\n");
    printf("\n'olhar' + 'lugar/objeto/pessoa' para observar.\n");
    printf("\n'pegar' + 'objeto' para pegar tal coisa.\n");
    printf("\n'dropar' + 'objeto' para jogar fora.\n");
    printf("\n'dar' + 'objeto' para dar o objeto para a pessoa que estiver no local.\n");
    printf("\n'pedir' + 'objeto' para pedir o objeto para a pessoa que estiver no local.\n");
    printf("\n'mochila' para ver sua mochila.\n");
    printf("\n'sair' para fechar o jogo.\n");
    printf("\n");
    while (comandoExecutar(input) && getInput("Save.txt"));
    printf("\nAte mais tarde!\n");
    return 0;
}