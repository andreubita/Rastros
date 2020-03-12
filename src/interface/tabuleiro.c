#include <stdio.h>
#include "tabuleiro.h"

const CASA tabuleiro_inicial[8][8] =
        {
                {VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, BRANCA},
                {VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO},
                {VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO},
                {VAZIO, VAZIO, VAZIO, VAZIO, PECA, VAZIO, VAZIO, VAZIO},
                {VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO},
                {VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO},
                {VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO},
                {PRETA, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO}
        };

void mostrar_tabuleiro(){

    int l, c;
    char linha = 'A';

    for (l=0; l<8; l++)
    {
        for (c=0; c<8; c++)
        {
            if (linha=='A' && c==7) printf ("2");
            else if (linha=='H' && c==0) printf ("1");
            else if (linha=='D' && c==4) printf ("*");
            else printf (".");
        }
        linha += 1;
        printf("\n");
    }

}