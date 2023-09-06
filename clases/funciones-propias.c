#include <stdio.h>
#include <locale.h>

void miFuncion()
{
    printf("Soy la función propia\n");
}

void miFuncion2()
{
    printf("Lorem ipsum, dolor sit amet consectetur adipisicing elit. Quas, aliquam possimus praesentium eligendi veritatis cum, hic velit mollitia error quasi earum voluptatum tempora, nobis ad. Eos commodi id praesentium at laboriosam iusto sequi numquam ipsum! Doloremque deleniti quos laudantium nihil rerum ut? Eaque quam saepe illum veniam facere perspiciatis, magni perferendis reprehenderit, porro sed eum voluptate autem nesciunt magnam! Voluptatum temporibus aspernatur quo dolores neque reiciendis, quam explicabo molestias corporis dolor omnis tempora fuga? Magnam hic provident dicta repudiandae inventore, vero expedita asperiores aspernatur autem odit quo nemo ab porro consectetur voluptate quibusdam nisi, molestias placeat repellendus. Dolor, officia ex.\n");
}

void calculate(int num1, int num2, char operator)
{
    int resultado;

    switch (operator)
    {
    case '+':
        resultado = num1 + num2;
        break;
    case '-':
        resultado = num1 - num2;
        break;
    case '*':
        resultado = num1 * num2;
        break;
    case '/':
        resultado = num1 / num2;
        break;

    default:
        printf("No se encontro el operador.\n");
        break;
    }

    printf("El resultado de la operacion es: %d\n", resultado);
}

int main()
{
    setlocale(LC_ALL, "spanish");

    // printf("Texto dentro de main()\n");

    // miFuncion();

    // miFuncion2();

    calculate(10, 5, '*');

    return 0;
}