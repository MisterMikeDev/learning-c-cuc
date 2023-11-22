#include <stdio.h>
#include <locale.h>

int sumar(int num1, int num2)
{
    return num1 + num2;
}

int main()
{
    setlocale(LC_ALL, "spanish");

    printf("SUMA CON FUNCIONES PROPIAS\n");

    int suma = sumar(5, 3);

    printf("La suma de 5 y 3 es %d\n", suma);

    return 0;
}