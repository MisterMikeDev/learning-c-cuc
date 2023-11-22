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

    int number, factorial = 1;

    printf("CALCULAR EL FACTORIAL\n");

    printf("Ingrese un número: ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        factorial *= i;
    }

    printf("El factorial de %d es %d\n", number, factorial);

    return 0;
}