#include <stdio.h>
#include <string.h>

int main()
{
    const int limit = 15;
    int count = 1;

    for (int index = 0; index < limit; index++)
    {
        int spaces = (limit - count) / 2;
        int stars = count;
        for (int i = 0; i < spaces; i++)
        {
            printf(" ");
        }
        for (int i = 0; i < stars; i++)
        {
            printf("*");
        }
        printf("\n");

        if (index >= limit / 2)
        {
            count -= 2;
        }
        else
        {
            count += 2;
        }
    }

    return 0;
}