#include <stdio.h>
#include "maze.h"
#include "player.h"

int jugadorFila = 0;
int jugadorColumna = 0;
int movimientos = 0;

void moverArriba() {
    if (movimientoValido(jugadorFila - 1, jugadorColumna)) {
        jugadorFila--;
        movimientos++;
    } else {
        printf("Movimiento invalido. No puedes moverte hacia arriba.\n");
    }
}

void moverAbajo() {
    if (movimientoValido(jugadorFila + 1, jugadorColumna)) {
        jugadorFila++;
        movimientos++;
    } else {
        printf("Movimiento invalido. No puedes moverte hacia abajo.\n");
    }
}

void moverIzquierda() {
    if (movimientoValido(jugadorFila, jugadorColumna - 1)) {
        jugadorColumna--;
        movimientos++;
    } else {
        printf("Movimiento invalido. No puedes moverte hacia la izquierda.\n");
    }
}

void moverDerecha() {
    if (movimientoValido(jugadorFila, jugadorColumna + 1)) {
        jugadorColumna++;
        movimientos++;
    } else {
        printf("Movimiento invalido. No puedes moverte hacia la derecha.\n");
    }
}

int verificarGanador() {
    if (jugadorFila == ROWS - 1 && jugadorColumna == COLS - 1) {
        return 1;
    }
    return 0;
}

void reiniciarJuego() {
    jugadorFila = 0;
    jugadorColumna = 0;
    movimientos = 0;
}
