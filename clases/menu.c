#include <stdio.h>
#include <locale.h>

void clearConsole()
{
    printf("\033[2J");
    printf("\033[0;0f");
}

int main()
{
    setlocale(LC_ALL, "spanish");

    int option;

    do
    {
        clearConsole();
        printf("Menu de selección con Do While\n");
        printf("1. Opción 1\n");
        printf("2. Opción 2\n");
        printf("3. Opción 3\n");
        printf("4. Salir\n");

        printf("> ");
        scanf("%d", &option);
        getchar();

        switch (option)
        {
        case 1:
            printf("Opción 1\n\n");
            getchar();
            break;
        case 2:
            printf("Opción 2\n\n");
            getchar();
            break;
        case 3:
            printf("Opción 3\n\n");
            getchar();
            break;
        case 4:
            printf("Saliendo...\n\n");
            getchar();
            break;
        default:
            printf("Opción inválida\n\n");
            getchar();
            break;
        }
    } while (option != 4);

    return 0;
}