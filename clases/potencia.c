#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "spanish");

    printf("CALCULANDO POTENCIAS\n");

    int numero, potencia, resultado = 1;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    printf("Ingrese la potencia: ");
    scanf("%d", &potencia);

    for (int i = 0; i < potencia; i++)
    {
        resultado *= numero;
    }

    printf("%d elevado a la %d es %d\n", numero, potencia, resultado);

    return 0;
}