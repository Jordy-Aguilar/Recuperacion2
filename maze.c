#include <stdio.h>
#include "maze.h"

int maze[ROWS][COLS] = {
    {0, 1, 0, 0, 0},
    {0, 1, 1, 1, 0},
    {0, 0, 0, 0, 0},
    {0, 1, 0, 1, 0},
    {1, 0, 0, 1, 0}
};

void imprimirLaberinto(int fila, int columna) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (fila == i && columna == j) {
                printf("X ");
            } else {
                printf("%d ", maze[i][j]);
            }
        }
        printf("\n");
    }
}

int movimientoValido(int fila, int columna) {
  int filaTemp = 0;
  int columnaTemp = 0;
    if (fila >= 0 && fila < ROWS && columna >= 0 && columna < COLS && maze[fila][columna] == 0) {
      filaTemp = fila;
      columnaTemp = columna;
      imprimirLaberinto(filaTemp, columnaTemp);
        return 1;
    }
      imprimirLaberinto(filaTemp, columnaTemp);

    return 0;
}
