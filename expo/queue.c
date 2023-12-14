#include <stdio.h>
#include <stdlib.h>

struct Nodo
{
    int dato;
    struct Nodo *siguiente;
};

struct Cola
{
    struct Nodo *frente;
    struct Nodo *final;
};

void inicializarCola(struct Cola *cola)
{
    cola->frente = cola->final = NULL;
}

void encolar(struct Cola *cola, int valor)
{
    struct Nodo *nuevoNodo = (struct Nodo *)malloc(sizeof(struct Nodo));
    nuevoNodo->dato = valor;
    nuevoNodo->siguiente = NULL;

    if (cola->final == NULL)
    {
        cola->frente = cola->final = nuevoNodo;
        return;
    }

    cola->final->siguiente = nuevoNodo;
    cola->final = nuevoNodo;
}

void desencolar(struct Cola *cola)
{
    if (cola->frente == NULL)
    {
        return;
    }

    struct Nodo *temp = cola->frente;
    cola->frente = cola->frente->siguiente;

    if (cola->frente == NULL)
    {
        cola->final = NULL;
    }

    free(temp);
}

void imprimirCola(struct Cola *cola)
{
    struct Nodo *actual = cola->frente;
    while (actual != NULL)
    {
        printf("%d ", actual->dato);
        actual = actual->siguiente;
    }
    printf("\n");
}

int main()
{
    struct Cola miCola;
    inicializarCola(&miCola);

    encolar(&miCola, 10);
    encolar(&miCola, 20);
    encolar(&miCola, 30);

    printf("Cola después de encolar: ");
    imprimirCola(&miCola);

    desencolar(&miCola);

    printf("Cola después de desencolar: ");
    imprimirCola(&miCola);

    return 0;
}
