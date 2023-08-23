#include <stdio.h>

int main()
{
    printf("Carácteres del español\n");
    printf("Vocales acentuadas:\n\n");

    printf("- árbol\n");
    printf("- teléfono\n");
    printf("- índice\n");
    printf("- computación\n");
    printf("- último\n");

    printf("\n- ¿Cómo?\n");
    printf("- ¡Chispas!\n");

    printf("\n-------------------[Metodo del maestro (Da error para mi)]--------------------------\n\n");

    printf("Car%ccteres del espa%col\n", 160, 164);
    printf("Vocales acentuadas:\n\n");

    printf("- %crbol\n", 160);
    printf("- tel%cfono\n", 130);
    printf("- %cndice\n", 214);
    printf("- computaci%cn\n", 162);
    printf("- %cltimo\n", 163);

    printf("\n- %cC%cmo?\n", 166, 162);
    printf("- %cChispas!\n", 173);

    return 0;
}