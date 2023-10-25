#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "spanish");

    printf("BUCLES EN LENGUAJE\n");
    printf("While, Do While, y For\n\n");

    printf("Blucle While - Mientras\n");
    printf("Contador de incremento\n\n");

    int contadorIncremento = 0;
    while (contadorIncremento <= 10)
    {
        printf("Contador: %d\n", contadorIncremento);
        contadorIncremento++;
    }

    printf("\nContador en decremento\n\n");

    int contadorDecremento = 10;
    while (contadorDecremento >= 0)
    {
        printf("Contador: %d\n", contadorDecremento);
        contadorDecremento--;
    }

    printf("\nBucle for - Para\n");
    printf("Contador de incremento\n\n");

    for (int i = 0; i <= 10; i++)
    {
        printf("Contador: %d\n", i);
    }

    printf("\nContador en decremento\n\n");

    for (int i = 10; i >= 0; i--)
    {
        printf("Contador: %d\n", i);
    }

    printf("\nBucle Do While - Hacer mientras\n");

    int contadorIncrementoDoWhile = 0;
    do
    {
        printf("Contador: %d\n", contadorIncrementoDoWhile);
        contadorIncrementoDoWhile++;
    } while (contadorIncrementoDoWhile <= 10);

    printf("\nContador en decremento\n\n");
    int contadorDecrementoDoWhile = 10;
    do
    {
        printf("Contador: %d\n", contadorIncrementoDoWhile);
        contadorIncrementoDoWhile--;
    } while (contadorIncrementoDoWhile >= 0);

    return 0;
}