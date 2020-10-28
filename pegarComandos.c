#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>
#include "objetos.h"
#include "etc.h"
#include "lugares.h"
#include "inventario.h"
#include "match.h"

typedef struct
{
    const char* padrao;
    bool (*function)(void);
} COMANDO;

static bool executarSair(void)
{
    return false;
}
static bool executarMatch(void)
{
    const char* src = *params;
    if (*src != '\0')
    {
        printf("Eu nao sei '");
        while (*src != '\0' && !isspace(*src)) putchar(*src++);
        printf("'.\n");
    }
    return true;
}


bool comandoExecutar(char* input)
{
        static const COMANDO commands[] =
        {
           { "sair"                , executarSair      },
           { "olhar"                , comandoOlharAqui  },
           { "olhar aqui"         , comandoOlharAqui  },
           { "olhar no A"           , comandoOlhar      },
           { "olhar A"              , comandoOlhar      },
           { "examinar A"           , comandoOlhar      },
           { "ir pra A"             , comandoIr       },
           { "ir A"                , comandoIr          },
           { "pegar A"               , comandoPegar        },
           { "dropar A"              , executarDrop     },
           { "pedir A"               , executarPedir       },
           { "dar A"              , executarDar      },
           { "mochilar"           , executarInventario  },
           { "A"                   , executarMatch }
        };
        const COMANDO* cmd;
        for (cmd = commands; !matchComando(input, cmd->padrao); cmd++);
        return (*cmd->function)();
}