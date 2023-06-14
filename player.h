#ifndef PLAYER_H
#define PLAYER_H

extern int jugadorFila;
extern int jugadorColumna;
extern int movimientos;

void moverJugador(int laberinto[ROWS][COLS], int filaJugador,
int columnaJugador, int movimientos);
int verificarGanador();
void reiniciarJuego();

#endif
