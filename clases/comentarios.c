#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "spanish");

    printf("COMENTARIOS EN EL LENGUAJE C\n\n");

    printf("Propositos de los comentarios\n\n");
    printf("1. Documentar  el código fuente.\n");
    printf("2. Desactivar lineas de código.\n\n");

    printf("Ejemplos:\n");

    // Comentario en linea

    /*
        Comentario en bloque
    */

    return 0;
}