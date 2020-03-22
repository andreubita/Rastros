#include <stdio.h>
#include "tabuleiro.h"

/**
\brief Recebe o Estado e imprime o tabuleiro para esse Estado.
*/
void mostrar_tabuleiro(ESTADO *e){
    int linha = 8;

    for(int i = 0; i < 8; i++){
        printf("%d | ", linha);
        for(int j = 0; j < 8; j++){
            CASA cs = e->tab[i][j];
            if(cs == POS1) putchar('1');
            else if(cs == POS2) putchar('2');
            else if(cs == RASTRO) putchar('#');
            else if(cs == PECA) putchar('*');
            else if(cs == VAZIO) putchar('.');
            /*switch (e->tab[i][j]){
                case POS1:
                    putchar('1');
                    break;
                case POS2:
                    putchar('2');
                    break;
                case RASTRO:
                    putchar('#');
                    break;
                case PECA:
                    putchar('*');
                    break;
                case VAZIO:
                    putchar('.');
                    break;
            }*/
        }
        putchar('\n');
        linha--;
    }

    printf("  | ABCDEFGH\n");
}
