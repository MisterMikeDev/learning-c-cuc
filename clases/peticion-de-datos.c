#include <stdio.h>
#include <locale.h>

char nombre[100], direccion[100], alergias[100], genero[1], telefono[25], fechaNacimiento[100], grupoSanguineo[10];
float altura, peso;
int edad;

void clearConsole()
{
    printf("\033[2J");
    printf("\033[0;0f");
}

void requestName()
{
    printf("Nombre:\n> ");
    fgets(nombre, sizeof(nombre), stdin);
}

void requestAddress()
{
    printf("Direccion postal:\n> ");
    fgets(direccion, sizeof(direccion), stdin);
}

void requestGener()
{
    printf("Genero:\n> ");
    fgets(genero, sizeof(genero), stdin);
}

void requestNumber()
{
    printf("Telefono:\n> ");
    fgets(telefono, sizeof(telefono), stdin);
}

void requestAge()
{
    printf("Edad:\n> ");
    scanf("%d", &edad);
}

void requestHeight()
{
    printf("Altura:\n> ");
    scanf("%f", &altura);
}

void requestWeight()
{
    printf("Peso:\n> ");
    scanf("%f", &peso);
}

void requestAllergies()
{
    printf("Alergias:\n> ");
    fgets(alergias, sizeof(alergias), stdin);
}

void requestBloodGroup()
{
    printf("Grupo sanguineo:\n> ");
    scanf("%s", grupoSanguineo);
}

void requestBirthDate()
{
    printf("Fecha de nacimiento:\n> ");
    scanf("%s", fechaNacimiento);
}

int main()
{
    setlocale(LC_ALL, "spanish");

    requestName();

    clearConsole();

    requestAddress();

    clearConsole();

    requestGener();

    clearConsole();

    requestNumber();

    clearConsole();

    requestAge();

    clearConsole();

    requestHeight();

    clearConsole();

    requestWeight();

    clearConsole();

    requestAllergies();

    clearConsole();

    requestBloodGroup();

    clearConsole();

    requestBirthDate();

    printf("\n\n");

    clearConsole();

    printf("Datos del paciente:\n\n");

    printf("Nombre: \"%s\"\n", nombre);
    printf("Direccion postal: \"%s\"\n", direccion);
    printf("Genero: \"%s\"\n", genero);
    printf("Telefono: \"%s\"\n", telefono);
    printf("Edad: \"%d años\"\n", edad);
    printf("Altura: \"%.2f mts\"\n", altura);
    printf("Peso: \"%.2f kg\"\n", peso);
    printf("Alergias: \"%s\"\n", alergias);
    printf("Grupo sanguineo: \"%s\"\n", grupoSanguineo);
    printf("Fecha de nacimiento: \"%s\"\n", fechaNacimiento);

    return 0;
}