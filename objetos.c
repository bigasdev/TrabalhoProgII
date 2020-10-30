#include <stdio.h>
#include "objetos.h"

static const char* tags0[] = { "estacionamento","estacionamento da fatec", NULL };
static const char* tags1[] = { "direita", "vaga da direita", NULL };
static const char* tags2[] = { "esquerda", "vaga da esquerda", NULL };
static const char* tags3[] = { "biblioteca", "corredor", "corredor da biblioteca", NULL };
static const char* tags4[] = { "laboratorio", "corredor", "corredor do laboratorio", NULL };
static const char* tags5[] = { "player", NULL };
static const char* tags6[] = { "guarda", "guardinha", NULL };
static const char* tags7[] = { "saida", "voltar", "patio", NULL };
static const char* tags8[] = { "saida", "voltar", "patio", NULL };
static const char* tags9[] = {"biblioteca da fatec", NULL};
static const char* tags10[] = {"laboratorio da fatec", NULL};
static const char* tags11[] = { "saida", "saida da biblioteca", NULL };
static const char* tags12[] = { "saida","saida do laboratorio", NULL };
static const char* tags13[] = { "cantina", "corredor","corredor para a cantina", NULL };
static const char* tags14[] = { "bloco a", "corredor","corredor para o bloco a", NULL };
static const char* tags15[] = { "chegar", "corredor para o bloco a","bloco a", NULL };
static const char* tags16[] = { "corredor", "laboratorio","corredor para o laboratorio de textil", NULL };
static const char* tags17[] = { "cantina", "corredor","corredor para a cantina", NULL };
static const char* tags18[] = { "saida", "voltar",NULL };
static const char* tags19[] = { "saida", "voltar",NULL };
static const char* tags20[] = { "saida", "voltar",NULL };
static const char* tags21[] = { "alex", "cachorro",NULL };
static const char* tags22[] = { "aluno", "estudante",NULL };
static const char* tags23[] = { "livro", "livro jogado no chao",NULL };
static const char* tags24[] = { "bolinho", "bolinho jogado no chao",NULL };
static const char* tags25[] = { "lixeira", NULL };
static const char* tags26[] = { "aluno", "estudante",NULL };

OBJETO objs[] = {
   {" Estacionamento da fatec", tags0  , NULL , NULL, "O estacionamento esta vazio e calmo", "\n Voce ve", "Bem vindo a FATEC", NULL, 9999},
   {" \n Direita", tags1   , patio , vagaDireita, "Uma vaga livre na direita", "\n Voce ve", "Indo para a vaga da direita..", NULL, 9999},
   {" Esquerda", tags2   , patio , vagaEsquerda, "Uma vaga livre na esquerda", "\n Voce ve", "Indo para a vaga da esquerda..", NULL, 9999},
   {" \n Corredor para a biblioteca", tags3  , vagaDireita , biblioteca, "Corredor que leva para a biblioteca", "\n Voce ve", "Indo para a biblioteca..", NULL, 9999},
   {" \n Corredor para o laboratorio", tags4   , vagaEsquerda , laboratorio, "Corredor que leva para o laboratorio", "\n Voce ve", "Indo para o laboratorio..", NULL, 9999},
   {" Voce mesmo", tags5  , patio , NULL, "Voce mesmo, um estudante", " Voce tem", NULL, NULL, 20},
   {"\n Um guardinha", tags6   , patio , NULL, "\nGuarda da FATEC", " \nEle tem", NULL, NULL, 20},
   {" Saida da vaga", tags7   , vagaDireita , patio, NULL, NULL, "Indo para o estacionamento..", NULL, 9999},
   {" Saida da vaga", tags8   , vagaEsquerda , patio, NULL, NULL, "Indo para o estacionamento..", NULL, 9999},
   {" Biblioteca", tags9   , NULL, NULL, "Biblioteca da FATEC, os computadores estão livres", "\n Voce ve" , NULL, NULL, 9999},
   {" Laboratorio", tags10   , NULL , NULL, "Laboratorio da FATEC, um grupo de estudantes esta jogando Magic logo ali", "\n Voce ve", NULL, NULL, 9999},
   {" \n Saida da biblioteca", tags11   , biblioteca, vagaDireita, NULL, NULL, "Voltando para a vaga..", NULL, 9999},
   {" Saida do laboratorio", tags12   , laboratorio , vagaEsquerda, NULL, NULL, "Voltando para a vaga..", NULL, 9999},
   {" Corredor para a cantina", tags13  , biblioteca , cantina, "Corredor que leva para a cantina", "\n Voce ve", "Indo para a cantina..", NULL, 9999},
   {" Corredor para o bloco a", tags14   , laboratorio , blocoA, "Corredor que leva para o bloco a", "\n Voce ve", "Indo para o bloco A..", NULL, 9999},
   {" Cantina", tags9   , NULL, NULL, "Cantina da FATEC, sera que ela esta aberta?", "\n Voce ve" , NULL, NULL, 9999},
   {" Bloco A", tags10   , NULL , NULL, "Bloco A da FATEC, que professores estão aqui?", "\n Voce ve", NULL, NULL, 9999},
   {" \n Chegar no bloco A", tags15  , cantina , blocoA, "Corredor que leva para o bloco A", "\n Voce ve", "Indo para o bloco A..", NULL, 9999},
   {" Corredor para o laboratorio de textil", tags16   , cantina , laboratorioTextil, "Corredor que leva para o laboratorio de textil", "\nVoce ve", "Indo para o laboratorio de textil..", NULL, 9999},
   {" Corredor para a cantina", tags17  , blocoA , cantina, "Corredor que leva para a cantina", "\n Voce ve", "Indo para a cantina..", NULL, 9999},
   {" Saida da cantina", tags18   , cantina, biblioteca, NULL, NULL, "Voltando para a biblioteca..", NULL, 9999},
   {" Saida do bloco A", tags19   , blocoA , laboratorio, NULL, NULL, "Voltando para o laboratorio..", NULL, 9999},
   {" Laboratorio Textil", tags9   , NULL, NULL, "Laboratorio de Textil, o que voce vai costurar hoje?", "\n Voce ve" , NULL, NULL, 9999},
   {" Saida do laboratorio", tags20   , laboratorioTextil, cantina, NULL, NULL, "Voltando para a cantina..", NULL, 9999},
   {" Alex, o cachorro", tags21   , patio , NULL, "\n O fiel companheiro da FATEC\n", "Ele tem", NULL, NULL, 20},
   {" \n Aluno sentado no banco", tags22   , vagaDireita , NULL, "\n Um estudante surtando no banco.\n", "Ele tem", NULL, NULL, 20},
   {" \n Livro jogado no chao", tags23   , biblioteca , NULL, "\n Alguem nao gostou desse livro.\n", "Ele tem", NULL, NULL, 20},
   {" \n Bolinho jogado no chao", tags24   , cantina , NULL, "\n Alguem nao tem bons modos.\n", "Ele tem", NULL, NULL, 20},
   {" Lixeira", tags25   , cantina , NULL, "\n Para os conscientes dessa faculdade..\n", "Ele tem", NULL, NULL, 20}
};