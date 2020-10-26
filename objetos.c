#include <stdio.h>
#include "objetos.h"

OBJETO objs[] = {
   {"pasto de lumbridge", "pasto"   , NULL  },
   {"caverna de goblins", "caverna"    , NULL  },
   {"uma prata", "prata"  , pasto },
   {"um ouro"  , "ouro"    , caverna },
   {"um guarda corrupto", "guarda"   , pasto },
   {"voce mesmo"     , "player", pasto }
};