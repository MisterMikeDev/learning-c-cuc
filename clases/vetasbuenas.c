#include <stdio.h>
#include <stdlib.h>
#define SEMANA 7

float sumaTotal(float ventas[])
{
    float result;
    for (int i = 0; i < SEMANA; i++)
    {
        result += ventas[i];
    }
    return result;
}

int main()
{
    float ventas[SEMANA];
    char diasSemana[SEMANA][20] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};
    for (int i = 0; i < SEMANA; i++)
    {
        printf("Ingresa las ventas del %s: ", diasSemana[i]);
        scanf("%f", &ventas[i]);
    }
    printf("El total de ventas de la semana es: $%.2fMXN\n", sumaTotal(ventas));

    return 0;
}