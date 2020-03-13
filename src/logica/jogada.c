#include "jogada.h"

int jogar(ESTADO *estado, COORDENADA coord){
    if(jogada_valida(estado,coord) == 1) {
        estado->tab[coord.linha][coord.coluna] = PECA;
        estado->tab[estado->ultima_jogada.linha][estado->ultima_jogada.coluna] = RASTRO;
        estado->ultima_jogada = coord;
        mostrar_tabuleiro(estado);
        return 1;
    }
    return 0;
}

// TODO Reduzir numero de condiçoes
int jogada_valida(ESTADO *estado, COORDENADA coord){
    int x1 = estado->ultima_jogada.coluna, y1 = estado->ultima_jogada.linha;
    int x2 = coord.coluna, y2 = coord.linha;

    // Validar casas em volta da PECA
    if(((x1 == x2) && (((abs(y1-y2))==1))) // Cima e baixo
    || (((abs(x2-x1))==1) && ((abs(y2-y1))==1 || y2 == y1 ))) // Esquerda e Direita
     {
        if(obter_estado_casa(estado,coord) == VAZIO){
            return 1;
        }
    }
    return 0;
}
