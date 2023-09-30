#include <stdio.h>
#include <locale.h>

void clearConsole()
{
    printf("\033[2J");
    printf("\033[0;0f");
}

int main()
{
    setlocale(LC_ALL, "spanish");

    int cantidadCafes, cantidadPasteles, precioCafe, precioPastel, totalCafes, totalPasteles, total;

    printf("¿Cuantos cafés quieres?\n> ");
    scanf("%d", &cantidadCafes);

    printf("¿Cuantos patelitos quieres?\n> ");
    scanf("%d", &cantidadPasteles);

    printf("¿Cuantos vale cada café?\n> ");
    scanf("%d", &precioCafe);

    printf("¿Cuantos vale cada patelitos?\n> ");
    scanf("%d", &precioPastel);

    if (cantidadCafes == 0)
    {
        cantidadCafes = 1;
    }

    if (cantidadPasteles == 0)
    {
        cantidadPasteles = 25;
    }

    if (precioCafe == 0)
    {
        cantidadCafes = 1;
    }

    if (precioPastel == 0)
    {
        cantidadPasteles = 30;
    }

    totalCafes = cantidadCafes * precioCafe;
    totalPasteles = cantidadPasteles * precioPastel;
    total = totalCafes + totalPasteles;

    clearConsole();

    printf("\n============[TOTAL DE LA CUENTA]============\n");

    printf("\nEl precio de los café es %d por cada uno.\n", precioCafe);
    printf("El precio de los pastelitos es %d por cada uno.\n\n", precioPastel);

    printf("El total de %d cafés es de $%dMXN\n", cantidadCafes, totalCafes);
    printf("El total de %d pasteles es de $%dMXN\n", cantidadPasteles, totalPasteles);
    printf("Total de su compra es de $%dMXN\n", total);
    return 0;
}