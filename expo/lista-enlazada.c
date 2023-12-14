#include <stdio.h>
#include <stdlib.h>

/**
 * Se crea el struct que va a contener los datos y el puntero al siguiente nodo
 */
struct Nodo
{
    int dato;
    struct Nodo *siguiente;
};

/**
 * Se hace una funcion para poder crear un nodo y retornarlo
 */
struct Nodo *crearNodo(int valor)
{
    struct Nodo *nuevoNodo = (struct Nodo *)malloc(sizeof(struct Nodo));
    nuevoNodo->dato = valor;
    nuevoNodo->siguiente = NULL;
    return nuevoNodo;
}

/**
 * Se hace una funcion para poder agregar un nodo al principio de la lista
 */
void agregarAlPrincipio(struct Nodo **cabeza, int valor)
{
    struct Nodo *nuevoNodo = crearNodo(valor);
    nuevoNodo->siguiente = *cabeza;
    *cabeza = nuevoNodo;
}

/**
 * Se hace una funcion para poder agregar un nodo al final de la lista
 */
void agregarAlFinal(struct Nodo **cabeza, int valor)
{
    struct Nodo *nuevoNodo = crearNodo(valor);
    struct Nodo *ultimo = *cabeza;

    if (*cabeza == NULL)
    {
        *cabeza = nuevoNodo;
        return;
    }

    while (ultimo->siguiente != NULL)
    {
        ultimo = ultimo->siguiente;
    }

    ultimo->siguiente = nuevoNodo;
}

/**
 * Se hace una funcion para poder eliminar un nodo al principio de la lista
 */
void eliminarDelPrincipio(struct Nodo **cabeza)
{
    if (*cabeza == NULL)
    {
        return;
    }

    struct Nodo *temp = *cabeza;
    *cabeza = (*cabeza)->siguiente;
    free(temp);
}

/**
 * Se hace una funcion para poder eliminar un nodo al final de la lista
 */
void eliminarDelFinal(struct Nodo **cabeza)
{
    if (*cabeza == NULL)
    {
        return;
    }

    if ((*cabeza)->siguiente == NULL)
    {
        free(*cabeza);
        *cabeza = NULL;
        return;
    }

    struct Nodo *temp = *cabeza;
    while (temp->siguiente->siguiente != NULL)
    {
        temp = temp->siguiente;
    }

    free(temp->siguiente);
    temp->siguiente = NULL;
}

/**
 * Se hace una funcion para poder imprimir la lista
 */
void imprimirLista(struct Nodo *cabeza)
{
    while (cabeza != NULL)
    {
        printf("%d -> ", cabeza->dato);
        cabeza = cabeza->siguiente;
    }
    printf("NULL\n");
}

/**
 * Se usan las funciones para poder crear una lista y hacer pruebas
 */
int main()
{
    struct Nodo *miLista = NULL;

    agregarAlFinal(&miLista, 10);
    agregarAlFinal(&miLista, 20);
    agregarAlPrincipio(&miLista, 5);

    imprimirLista(miLista);

    eliminarDelFinal(&miLista);

    imprimirLista(miLista);

    eliminarDelPrincipio(&miLista);

    imprimirLista(miLista);

    return 0;
}
