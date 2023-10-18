#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "spanish");

    printf("Ejercicio\n");

    int precio = 287;
    int unidades = 2;
    float descuento = 0.25;
    float iva = 0.16;

    float total_sin_descuento = precio * unidades;
    float total = total_sin_descuento - (total_sin_descuento * descuento);
    float total_iva = total + (total * iva);

    printf("El total a pagar sin IVA ni descuento es: $%.2fMXN\n", total_sin_descuento);
    printf("El total a pagar sin IVA y con descuento es: $%.2fMXN\n", total);
    printf("El total a pagar con IVA y con descuento es: $%.2fMXN\n", total_iva);

    return 0;
}
