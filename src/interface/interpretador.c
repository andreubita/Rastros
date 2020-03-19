#include "interpretador.h"

#define BUF_SIZE 1024

int quit = 0;
int comandos = 0;

int interpretador(ESTADO *e) {
    char linha[BUF_SIZE];
    char col[2], lin[2];

    printf("%d PL%d (%d)>", comandos, obter_jogador_atual(e), obter_numero_de_jogadas(e));

    if(fgets(linha, BUF_SIZE, stdin) == NULL)
        return 0;

    comandos++;

    if(strlen(linha) == 2 && strcmp(linha,"q\n") == 0){
        quit = 1;
    }

    if(strlen(linha) == 3 && sscanf(linha, "%[a-h]%[1-8]", col, lin) == 2){
        COORDENADA coord = {*col - 'a', *lin - '1'};
        coord.linha = 7-coord.linha;
        jogar(e, coord);
    }
    return 1;
}
