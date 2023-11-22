#include <stdio.h>
#include <locale.h>

void binario(int numero)
{
    if (numero > 0)
    {
        binario(numero / 2);
        printf("%d", numero % 2);
    }
}

int main()
{
    setlocale(LC_ALL, "spanish");

    printf("Integer to Binario\n");

    int numero, resto = 0;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    binario(numero);

    return 0;
}