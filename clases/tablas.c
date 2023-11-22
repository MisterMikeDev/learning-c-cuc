#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "spanish");

    int number;

    printf("TABLAS DE MULTIPLICAR\n");

    printf("Indiquela tabla de multiplicar que desea ver: ");
    scanf("%d", &number);

    for (int i = 1; i <= 10; i++)
    {
        printf("----------------\n");
        printf("| %d x %d = %d   |\n", number, i, number * i);
        printf("----------------\n");
    }

    return 0;
}