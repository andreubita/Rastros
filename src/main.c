#include "dados/data.h"
#include "dados/estado.h"
#include "interface/interpretador.h"

/**
\brief Função principal
*/
int main() {
    ESTADO *estado = inicializar_estado();
    mostrar_tabuleiro(estado);
    while(quit == 0){
        interpretador(estado);
    }
    return 0;
}

