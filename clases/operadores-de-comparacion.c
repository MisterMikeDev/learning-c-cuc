#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "spanish");

    int numero1, numero2;

    printf("OPERADORES DE COMPARACIÓN\n");
    printf("<, <=, >, >=, ==, !=\n\n");

    printf("Ingresa un número: ");
    scanf("%i", &numero1);

    printf("Ingresa otro número: ");
    scanf("%i", &numero2);

    if (numero1 < numero2)
    {
        printf("%i es menor que %i\n", numero1, numero2);
    }
    else if (numero1 <= numero2)
    {
        printf("%i es menor o igual que %i\n", numero1, numero2);
    }
    else if (numero1 > numero2)
    {
        printf("%i es mayor que %i\n", numero1, numero2);
    }
    else if (numero1 >= numero2)
    {
        printf("%i es mayor o igual que %i\n", numero1, numero2);
    }
    else if (numero1 == numero2)
    {
        printf("%i es igual que %i\n", numero1, numero2);
    }
    else if (numero1 != numero2)
    {
        printf("%i es diferente que %i\n", numero1, numero2);
    }

    return 0;
}