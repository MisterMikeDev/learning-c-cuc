#include <stdio.h>
#include <locale.h>

int numberFibonacci = 5;
int llamadas = 0;

int main()
{
    setlocale(LC_ALL, "spanish");

    printf("Fibbonaci con recurcion\n");

    int fibonacci(int num)
    {
        llamadas++;
        if (num == 0 || num == 1)
        {
            return num;
        }
        else
        {
            return fibonacci(num - 1) + fibonacci(num - 2);
        }
    }

    printf("El fibonacci de %d es %d\n", numberFibonacci, fibonacci(numberFibonacci));
    printf("Llamadas: %d\n", llamadas);

    return 0;
}