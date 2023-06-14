#include <stdio.h>
#include "maze.h"
#include "player.h"

void juegoNuevo() {
    reiniciarJuego();

    printf("Bienvenido al juego de laberinto!\n");
    imprimirLaberinto(0,0);

    while (1) {
        printf("Posicion del jugador: (%d, %d)\n", jugadorFila, jugadorColumna);
        printf("Movimientos realizados: %d\n", movimientos);

        if (verificarGanador()) {
            printf("¡Ganaste!\n");
            if (movimientos <= 8) {
                printf("Eres un Pro!\n");
            } else if (movimientos <= 15) {
                printf("Eres novato.\n");
            } else {
                printf("Eres un noob!\n");
            }
            break;
        }

        printf("Ingrese una tecla para mover al jugador (WASD): ");
        char tecla;
        scanf(" %c", &tecla);

        switch (tecla) {
            case 'W':
            case 'w':
                moverArriba();
                break;
            case 'A':
            case 'a':
                moverIzquierda();
                break;
            case 'S':
            case 's':
                moverAbajo();
                break;
            case 'D':
            case 'd':
                moverDerecha();
                break;
            default:
                printf("Tecla invalida. Intentalo nuevamente.\n");
        }

        printf("\n");
    }
}

int main() {
    int opcion;

    printf("Bienvenido al juego de laberinto!\n");

    do{
        printf("Menu:\n");
        printf("1. Juego Nuevo\n");
        printf("2. Creditos\n");
        printf("3. Salir\n");
        printf("Ingrese su opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                juegoNuevo();
                break;
            case 2:
                printf("Jordy Aguilar----ID BANNER: A00107265\n");
                break;
            case 3:
                printf("Gracias por jugar. ¡Hasta luego!\n");
                break;
            default:
                printf("Opcion invalida. Intentalo nuevamente.\n");
                break;
        }
        printf("\n");
    }while (opcion!=3);
    }

