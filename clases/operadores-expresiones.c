#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "spanish");

    printf("OPERADORES Y EXPRESIONES\n");

    int a, b, c, resultado, resultado2, total, pastelito, cafe, precio, presio2;

    a = 10;
    printf("El valor a es: %d\n", a);

    a = 15;
    printf("El nuevo valor de a es: %d\n", a);

    a = 30;
    printf("Por ultimo, el valor de a es: %d\n", a);

    a = 100;
    printf("El valor de a es: %d\n", a);

    a = b = c = 10;
    printf("El valor de a es: %d\n", a);
    printf("El valor de b es: %d\n", b);
    printf("El valor de c es: %d\n", c);

    printf("\n\nOPERADORES ARITMETICOS\n");
    printf("Donde a=8 y b=4;\n");

    a = 8;
    b = 4;

    resultado = a + b;
    printf("El resultado de %d+%d=%d\n", a, b, resultado);

    resultado = a - b;
    printf("El resultado de %d-%d=%d\n", a, b, resultado);

    resultado = a * b;
    printf("El resultado de %d*%d=%d\n", a, b, resultado);

    resultado = a / b;
    printf("El resultado de %d/%d=%d\n", a, b, resultado);

    resultado = a % b;
    printf("El resultado de %d%%%d=%d\n", a, b, resultado);

    pastelito = 17;
    precio = 25;

    resultado = pastelito * precio;

    printf("El total es: $%dMXN\n", resultado);

    cafe = 17;
    presio2 = 30;

    resultado2 = cafe * presio2;

    printf("El presio de %d cafes es: $%dMXN\n", cafe, resultado2);

    total = resultado + resultado2;

    printf("El total de la cuenta es: $%dMXN\n", total);
    return 0;
}