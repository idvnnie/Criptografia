#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_HOMOFONOS 4 // Cantidad máxima de sustitutos por letra
#define ALFABETO 26

// Mapa de sustitución homofónica: cada letra tiene varios posibles números
int mapa[ALFABETO][MAX_HOMOFONOS] = {
    {10, 11, 12, 13}, // A
    {20, 21, 22, 0},  // B
    {30, 31, 0, 0},   // C
    {40, 41, 42, 43}, // D
    {50, 51, 0, 0},   // E
    {60, 0, 0, 0},    // F
    {70, 71, 72, 0},  // G
    {80, 0, 0, 0},    // H
    {90, 91, 92, 93}, // I
    {100, 0, 0, 0},   // J
    {110, 111, 0, 0}, // K
    {120, 121, 0, 0}, // L
    {130, 131, 132, 0}, // M
    {140, 141, 0, 0}, // N
    {150, 0, 0, 0},   // O
    {160, 161, 0, 0}, // P
    {170, 0, 0, 0},   // Q
    {180, 181, 182, 0}, // R
    {190, 191, 0, 0}, // S
    {200, 201, 202, 203}, // T
    {210, 0, 0, 0},   // U
    {220, 0, 0, 0},   // V
    {230, 231, 0, 0}, // W
    {240, 0, 0, 0},   // X
    {250, 251, 252, 0}, // Y
    {260, 261, 0, 0}  // Z
};

// Devuelve un número aleatorio de los disponibles para una letra
int cifrar_letra(char letra) {
    if (letra < 'A' || letra > 'Z') return -1; // No es letra válida
    int index = letra - 'A';

    // Contamos cuántos sustitutos hay para esta letra
    int opciones = 0;
    for (int i = 0; i < MAX_HOMOFONOS; i++) {
        if (mapa[index][i] != 0)
            opciones++;
    }

    // Seleccionamos aleatoriamente una de las opciones disponibles
    int seleccion = rand() % opciones;
    return mapa[index][seleccion];
}

int main() {
    char mensaje[100];
    printf("Ingresa el mensaje en MAYÚSCULAS (sin acentos):\n");
    fgets(mensaje, sizeof(mensaje), stdin);

    // Semilla aleatoria
    srand(time(NULL));

    printf("\nMensaje cifrado:\n");
    for (int i = 0; i < strlen(mensaje); i++) {
        if (mensaje[i] >= 'A' && mensaje[i] <= 'Z') {
            int cifra = cifrar_letra(mensaje[i]);
            printf("%d ", cifra);
        }
        // Puedes agregar espacio para conservar la separación de palabras
        else if (mensaje[i] == ' ') {
            printf("/ "); // Usamos / como separador de palabras
        }
    }

    printf("\n");
    return 0;
}
