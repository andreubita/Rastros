#include "estado.h"
#include <stdlib.h>

ESTADO *inicializar_estado() {
    ESTADO *e = (ESTADO *) malloc(sizeof(ESTADO));

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            e->tab[i][j] = tabuleiro_inicial[i][j];

        }
    }

    // e->jogadas init is empty

    e->jogador_atual = 1;
    e->num_jogadas = 0;

    return e;
}

int obter_jogador_atual(ESTADO *estado){
    return estado->jogador_atual;
}

int obter_numero_de_jogadas(ESTADO *estado){
    return estado->num_jogadas;
}

CASA obter_estado_casa(ESTADO *e, COORDENADA c){
    return e->tab[c.coluna][c.linha];
}

COORDENADA obter_coordenada_peca(ESTADO *e){
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(e->tab[i][j] == PECA){
                COORDENADA coord = {
                        .coluna = j+1,
                        .linha = i+1
                };
                return coord;
            }
        }
    }
}