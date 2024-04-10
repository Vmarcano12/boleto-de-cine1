#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Datos de la persona
    char nombre[] = "Vladimir";
    char apellido[] = "Marcano";
    char cedula[] = "31.076.755";

    // Datos de la función
    char sala[] = "Sala 1";
    char puesto[] = "A5";
    char hora_funcion[] = "20:00";
    char pelicula[] = "Titanic";

    // Crear el archivo de texto
    FILE *file = fopen("boleto_cine.txt", "w");
    if (file == NULL) {
        printf("Error al abrir el archivo.");
        return 1;
    }

    fprintf(file, "******************************\n");
    fprintf(file, "Cine XYZ - Boleto de Cine\n");
    fprintf(file, "******************************\n\n");

    fprintf(file, "Nombre: %s\n", nombre);
    fprintf(file, "Apellido: %s\n", apellido);
    fprintf(file, "Cedula: %s\n\n", cedula);

    fprintf(file, "Sala: %s\n", sala);
    fprintf(file, "Puesto: %s\n", puesto);
    fprintf(file, "Hora de la función: %s\n", hora_funcion);
    fprintf(file, "Película: %s\n\n", pelicula);

    fprintf(file, "******************************\n");
    fprintf(file, "¡Disfruta tu película!\n");
    fprintf(file, "******************************\n");

    fclose(file);
    return 0;
}
