#include <stdio.h>
#include <stdbool.h>
#include "pegarComandos.h"

static char input[100] = "olhar aqui";

static bool pegarInput(void)
{
    printf("\n--> ");
    return fgets(input, sizeof input, stdin) != NULL;
}
int main()
{
    printf("Bem vindo a Gielinor.\n");
    printf("Voce e totalmente livre para explorar este vasto mundo.\n");
    printf("Utilize verbos como 'ir' ou 'olhar' para se aventurar por onde e como quiser.\n");
    printf("\n");
    while (comandoExecutar(input) && pegarInput());
    printf("\nAte mais tarde!\n");
    return 0;
}