#include <stdio.h>
#include <locale.h>

// Primera variable
char domicilio[100];

void putCharLearn()
{
    printf("Función putchar()\n");
    printf("Escribe un único caracter en la salida estándar\n\n");

    putchar('L');
    putchar(32);
    putchar('O');
    putchar('\n');
    putchar('L');
}

void putsLearn()
{
    printf("Función puts()\n");
    printf("Imprime una cadena de caracteres en la salida estándar y produce un salto de línea al final\n\n");

    printf("Ejemplo:\n\n");

    puts("Hola");
    puts("Adiós");
}

void getsLearn()
{
    printf("Función gets()\n");
    printf("Toma la cadenade caracteres estándar y la almacena en una variable string.\n\n");

    printf("Ejemplo:\n\n");

    puts("Ingresa tu domicilio:");
    fgets(domicilio, sizeof(domicilio), stdin);

    printf("El domicilio proporcionado es:\n");
    puts(domicilio);
}

void printfLearn()
{
    printf("Función printf()\n");
    printf("Imprime datos de modo general en un formato de salida estándar\n\n");

    printf("Ejemplo:\n\n");

    printf("Cadena");
    printf("Segunda");

    printf("Cadena\n");
    printf("Segunda\n");

    printf("Primera cadena"
           "Segunda cadena");

    printf("Esto es \"extraño\"");

    printf("C\\Documents\n");
}

int main()
{
    // Definicion del idioma local
    setlocale(LC_ALL, "spanish");

    putCharLearn();

    printf("\n");

    putsLearn();

    printf("\n");

    getsLearn();

    printf("\n");

    printfLearn();

    return 0;
}
