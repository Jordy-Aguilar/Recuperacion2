#ifndef MAZE_H
#define MAZE_H

#define ROWS 5
#define COLS 5

extern int maze[ROWS][COLS];

void imprimirLaberinto(int fila, int columna);
int movimientoValido(int fila, int columna);

#endif
