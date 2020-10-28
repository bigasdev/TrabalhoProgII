#define MAX_PARAMS  26

extern const char* params[];

#define paramPorLetra(letra)   (params + (letra) - 'A')

extern bool matchComando(const char* src, const char* padrao);