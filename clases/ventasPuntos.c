#include <stdio.h>
#include <locale.h>
#define SEMANA 7

void clearConsole()
{
    printf("\033[2J");
    printf("\033[0;0f");
}

int main()
{
    setlocale(LC_ALL, "spanish");

    printf("Bienvenido a tu facturación\n");

    float ventas[SEMANA];

    for (int i = 0; i < SEMANA; i++)
    {
        char *dia;
        if (i == 0)
        {
            dia = "Lunes";
        }
        else if (i == 1)
        {
            dia = "Martes";
        }
        else if (i == 2)
        {
            dia = "Miercoles";
        }
        else if (i == 3)
        {
            dia = "Jueves";
        }
        else if (i == 4)
        {
            dia = "Viernes";
        }
        else if (i == 5)
        {
            dia = "Sabado";
        }
        else if (i == 6)
        {
            dia = "Domingo";
        }
        printf("Ingresa las ventas del %s: ", dia);
        scanf("%f", &ventas[i]);
    }

    clearConsole();

    float total = 0;

    printf("===================================\n");
    printf("VENTAS DE LA SEMANA\n");

    for (int i = 0; i < SEMANA; i++)
    {
        char *dia;
        if (i == 0)
        {
            dia = "Lunes";
        }
        else if (i == 1)
        {
            dia = "Martes";
        }
        else if (i == 2)
        {
            dia = "Miercoles";
        }
        else if (i == 3)
        {
            dia = "Jueves";
        }
        else if (i == 4)
        {
            dia = "Viernes";
        }
        else if (i == 5)
        {
            dia = "Sabado";
        }
        else if (i == 6)
        {
            dia = "Domingo";
        }
        printf("El %s se vendio $%.2fMXN\n", dia, ventas[i]);
        total += ventas[i];
    }
    printf("===================================\n");

    printf("\nEl total de ventas de la semana es: $%.2fMXN\n", total);

    return 0;
}