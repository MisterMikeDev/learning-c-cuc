#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "spanish");

    printf("ARRAYS Y MATRICES\n");

    int matriz[5];

    matriz[1] = 100;
    matriz[2] = 200;
    matriz[3] = 300;

    for (int i = 1; i <= 5; i++)
    {
        printf("El valor de la matriz en la posición %d es: %d\n", i, matriz[i]);
    }

    printf("ARREGLOS ALFANUMERICOS\n");

    char datosPersonales[4][50] = {
        "Nombre: Juan",
        "Edad: 20",
        "Altura: 1.70",
        "Fecha de nacimiento: 01/01/2000"};

    for (int i = 0; i < 4; i++)
    {
        printf("%s\n", datosPersonales[i]);
    }

    return 0;
}