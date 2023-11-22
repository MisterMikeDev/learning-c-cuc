#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define SEMANA 7

int main()
{
    setlocale(LC_ALL, "spanish");
    float ventas[SEMANA] = {15, 200, 50, 30, 0, 0, 0};
    float total = 0;

    printf("=========================\n");
    printf("VENTAS DE LA SEMANA\n");

    for (int i = 0; i < SEMANA; i++)
    {
        total += ventas[i];
        printf("El día %d se vendieron $%.2fMXN\n", i + 1, ventas[i]);
    }

    printf("=========================\n");

    printf("\nEl total de ventas de la semana es: $%.2fMXN\n", 0);

    return 0;
}