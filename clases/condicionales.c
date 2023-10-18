#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "spanish");

    char genero;
    int clima, dia;

    printf("OPERADORES CONDICIONALES\n");
    printf("If, Else, Else If y Switch\n\n");

    /*
    Las estructuras de control se dividen en tres grandes catergorias en  funcion del flujo de ejecución:
    - Secuenciales
    - Selectivas
    - Repetitivas
    */

    // printf("Selecciona tu género:\n");
    // printf("m. Masculino\n");
    // printf("f. Femenino\n");
    // printf("> ");

    // scanf("%c", &genero);

    // if (genero == 'm')
    // {
    //     printf("Hola caballero 🎩\n");
    // }
    // else if (genero == 'f')
    // {
    //     printf("Eres señorita 🌸\n");
    // }
    // else
    // {
    //     printf("No seleccionaste una opción válida\n");
    // }

    // printf("\n¿Como está el clima?\n");
    // printf("1. Lluvioso\n");
    // printf("2. Soleado\n");
    // printf("> ");

    // scanf("%d", &clima);

    // if (clima == 1)
    // {
    //     printf("Lleva paraguas ☔\n");
    // }
    // else if (clima == 2)
    // {
    //     printf("Lleva lentes de sol 😎\n");
    // }
    // else
    // {
    //     printf("No seleccionaste una opción válida\n");
    // }

    // printf("\nCONDICIONAL  ELSE IF (sino)\n\n");
    // printf("\nIngresa tu edad: \n");

    // scanf("%d", &edad);

    // if (edad < 12)
    // {
    //     printf("Vete a mimir\n");
    // }
    // else if (edad < 18)
    // {
    //     printf("Hola jovenazo\n");
    // }
    // else if (edad >= 18 && edad < 60)
    // {
    //     printf("¿La de chambear no te la sabes o que?\n");
    // }
    // else
    // {
    //     printf("Vete por tu pension focil\n");
    // }

    printf("\nOPERADOR SWITCH\n\n");

    printf("Seleeccione un día  de la semana: \n");
    printf("1. Lunes\n");
    printf("2. Martes\n");
    printf("3. Miercoles\n");
    printf("4. Jueves\n");
    printf("5. Viernes\n");
    printf("6. Sabado\n");
    printf("7. Domingo\n");
    printf("> ");

    scanf("%d", &dia);

    switch (dia)
    {
    case 1:
        printf("Hoy es Lunes xenofobia\n");
        break;
    case 2:
        printf("Hoy es Martes de homofobia\n");
        break;
    case 3:
        printf("Hoy es Miercoles de misoginia\n");
        break;
    case 4:
        printf("Hoy es Jueves de racismo\n");
        break;
    case 5:
        printf("Hoy es Viernes de clasismo\n");
        break;
    case 6:
        printf("Hoy es Sabado de machismo\n");
        break;
    case 7:
        printf("Hoy es Domingo de patriarcado\n");
        break;
    default:
        printf("Quieres romper el romper el programa o que pendejo\n");
        break;
    }

    return 0;
}