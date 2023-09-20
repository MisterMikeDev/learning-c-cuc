#include <stdio.h>
#include <locale.h>
#define LUGARNACIMIENTO "Puerto Vallarta"
#define FECHANACIMIENTO "10 de octubre de 1990"
#define NOMBRE "Diego Emmanuel Rodriguez Ruvalcaba"

int main()
{
    setlocale(LC_ALL, "spanish");

    int edad;
    float altura, peso;
    edad = 19;
    altura = 1.80;
    peso = 86.5;

    printf("Constantes y variables\n");
    printf("Constantes: Datos que no cambian.\n\n");

    printf("DATOS PERSONALES DE \"%s\"\n\n", NOMBRE);

    printf("Lugar de nacimiento: \"%s\"\n", LUGARNACIMIENTO);

    printf("Fecha de nacimiento: \"%s\"\n", FECHANACIMIENTO);

    printf("Edad: %d años.\n", edad);
    printf("Altura: %.2f metros.\n", altura);
    printf("Peso: %.2f kilogramos.\n", peso);

    return 0;
}