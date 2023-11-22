#include <stdio.h>
#include <locale.h>

int numberResultado = 10;
int llamadas = 0;

int main()
{
    setlocale(LC_ALL, "spanish");

    // Sucecion que tiene  que dar -> [0, 1, 3, 3, 4, 7, 10, 14, 21, 31]

    printf("Sucecion con recurcion\n");

    int sucesion(int num)
    {
        llamadas++;
        if (num == 1)
        {
            return 0;
        }
        else if (num == 2)
        {
            return 1;
        }
        else if (num == 3)
        {
            return 3;
        }
        else
        {
            return sucesion(num - 1) + sucesion(num - 3);
        }
    }

    printf("%d, ", sucesion(numberResultado - 9));
    printf("%d, ", sucesion(numberResultado - 8));
    printf("%d, ", sucesion(numberResultado - 7));
    printf("%d, ", sucesion(numberResultado - 6));
    printf("%d, ", sucesion(numberResultado - 5));
    printf("%d, ", sucesion(numberResultado - 4));
    printf("%d, ", sucesion(numberResultado - 3));
    printf("%d, ", sucesion(numberResultado - 2));
    printf("%d, ", sucesion(numberResultado - 1));
    printf("%d\n", sucesion(numberResultado));

    return 0;
}