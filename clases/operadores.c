#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "spanish");

    int a, b;

    printf("OPERADORES DE ASIGNACIÓN\n");

    a = 8;
    b = 3;

    a *= b;
    printf("El resultado de la operación es: %d\n", a);

    a = 8;
    a += b;
    printf("El resultado de la operación es: %d\n", a);

    a = 8;
    a -= b;
    printf("El resultado de la operación es: %d\n", a);

    a = 8;
    a /= b;
    printf("El resultado de la operación es: %d\n", a);

    return 0;
}