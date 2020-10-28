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
    printf("Utilize verbos como 'ir' ou 'olhar' para se aventurar por onde e como quiser.\n");
    while (comandoExecutar(input) && getInput("Save.txt"));
    printf("\nAte mais tarde!\n");
    return 0;
}