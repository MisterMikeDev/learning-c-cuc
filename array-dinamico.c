#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 10

typedef struct
{
    int *arr;
    int elemNum;
    int maxSize;
} dynArray;

void arrayInit(dynArray **arr_ptr)
{
    dynArray *container;
    container = (dynArray *)malloc(sizeof(dynArray));
    if (!container)
    {
        printf("Memory allocation failed\n");
        exit(0);
    }
    container->elemNum = 0;
    container->maxSize = MAXSIZE;
    container->arr = (int *)malloc(MAXSIZE * sizeof(int));

    if (!container->arr)
    {
        printf("Memory Allocation Failed\n");
        exit(0);
    }
    *arr_ptr = container;
}

void addToDynArray(dynArray *new_arr, int data)
{
    if (new_arr->elemNum >= new_arr->maxSize - 1)
    {
        new_arr->maxSize <<= 1;
        new_arr->arr = realloc(new_arr->arr, (new_arr->maxSize) * sizeof(int));
    }
    new_arr->arr[new_arr->elemNum] = data;
    new_arr->elemNum += 1;
}

int main()
{

    dynArray *arr;
    arrayInit(&arr);

    for (int i = 0; i < 1000000; i++)
    {
        addToDynArray(arr, i);
    }

    for (int i = 0; i < arr->elemNum; i++)
    {
        printf("%d ", arr->arr[i]);
    }
    printf("\n");

    return 0;
}