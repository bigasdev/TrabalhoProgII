typedef enum {
    distSi,
    distSegurando,
    distSegurandoInventario,
    distLugar,
    distAqui,
    distAquiInventario,
    distAli,
    distNaoAqui,
    distObjetoDesconhecido
} DISTANCIA;

extern DISTANCIA pegarDistancia(OBJETO* de, OBJETO* para);
extern OBJETO* pegarPassagem(OBJETO* de, OBJETO* para);
extern OBJETO* autorAqui(void);
extern int listaObjetosNoLugar(OBJETO* lugar);
extern int pesoDosObjetos(OBJETO* container);