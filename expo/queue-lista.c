#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int dato;
    struct Node *siguiente;
};

struct Queue
{
    struct Node *frente;
    struct Node *final;
};

void createQueue(struct Queue *queue)
{
    queue->frente = queue->final = NULL;
}

void push(struct Queue *queue, int valor)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->dato = valor;
    newNode->siguiente = NULL;

    if (queue->final == NULL)
    {
        queue->frente = queue->final = newNode;
        return;
    }

    queue->final->siguiente = newNode;
    queue->final = newNode;
}

void pop(struct Queue *queue)
{
    if (queue->frente == NULL)
    {
        return;
    }

    struct Node *temp = queue->frente;
    queue->frente = queue->frente->siguiente;

    if (queue->frente == NULL)
    {
        queue->final = NULL;
    }

    free(temp);
}

void printQueue(struct Queue *queue)
{
    struct Node *actual = queue->frente;
    while (actual != NULL)
    {
        printf("%d ", actual->dato);
        actual = actual->siguiente;
    }
    printf("\n");
}

int main()
{
    struct Queue miQueue;
    createQueue(&miQueue);

    push(&miQueue, 10);
    push(&miQueue, 20);
    push(&miQueue, 30);

    printf("Queue después de push: ");
    printQueue(&miQueue);

    pop(&miQueue);

    printf("Queue después de pop: ");
    printQueue(&miQueue);

    return 0;
}