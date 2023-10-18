#include <stdio.h>

int main()
{

    int Number1, Number2, Resultado;
    char Operator;

    printf("Dime el primer numero.\n");
    scanf("%d", &Number1);

    printf("Dime el segundo numero.\n");
    scanf("%d", &Number2);

    printf("Dime que operacion quieres realizar (+, -, *, /, %%).\n");
    scanf(" %c", &Operator);

    switch (Operator)
    {
    case '+':
        Resultado = Number1 + Number2;
        printf("El resultado de la operación es: %d\n", Resultado);
        break;
    case '-':
        Resultado = Number1 - Number2;
        printf("El resultado de la operación es: %d\n", Resultado);
        break;
    case '*':
        Resultado = Number1 * Number2;
        printf("El resultado de la operación es: %d\n", Resultado);
        break;
    case '/':
        Resultado = Number1 / Number2;
        printf("El resultado de la operación es: %d\n", Resultado);
        break;
    case '%':
        Resultado = Number1 % Number2;
        printf("El resultado de la operación es: %d\n", Resultado);
        break;
    default:
        printf("Error: Operador no válido.\n");
    }

    return 0;
}