#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **matr = malloc(10 * sizeof(int *));
    for (int i = 0; i < 10; i++)
    {
        *(matr + i) = malloc(i * sizeof(int));
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < i; j++)
        {
            *(*(matr + i) + j) = j;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d ", *(*(matr + i) + j));
        }
        printf("\n");
    }

    return 0;
}