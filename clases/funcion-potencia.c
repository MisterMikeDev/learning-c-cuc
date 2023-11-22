#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "spanish");
    int base, exponente, resultado = 1;

    printf("POTENCIAS CON FUNCIONES\n");

    printf("Di la base:\n> ");
    scanf("%d", &base);

    printf("Di el exponente:\n> ");
    scanf("%d", &exponente);

    resultado = pow(base, exponente);

    printf("El resultado de %d elevado al %d es %d\n", base, exponente, resultado);

    return 0;
}