#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int MAX_NUM = 10;
    int MIN_NUM = 1;
    int num;

    srand(time(NULL));

    printf("Piensa en un numero\n");
    scanf("%d", &num);

    int randomNumber = rand() % MAX_NUM + MIN_NUM;

    if (num == randomNumber)
    {
        printf("Has ganado\n");
    }
    else
    {
        printf("Has perdido, el numero era %d\n", randomNumber);
    }

    return 0;
}