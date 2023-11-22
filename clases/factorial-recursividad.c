#include <stdio.h>
#include <locale.h>

long long numberFactorial = 32;

int main()
{
    setlocale(LC_ALL, "spanish");

    printf("Factorial recursividad\n");

    int res;

    int factorial(int num)
    {
        if (num == 0)
        {
            return 1;
        }
        else
        {
            return num * factorial(num - 1);
        }
    }

    res = factorial(numberFactorial);

    printf("El factorial de %d es %d\n", numberFactorial, res);

    return 0;
}