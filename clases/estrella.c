#include <stdio.h>
#include <locale.h>

void drawStart()
{
    printf("             *             \n");
    printf("            ***            \n");
    printf("           *****           \n");
    printf("          *******          \n");
    printf("         *********         \n");
    printf("        ***********        \n");
    printf("       *************       \n");
    printf("      ***************      \n");
    printf("    *******************    \n");
    printf("    *******************    \n");
    printf("   *********************   \n");
    printf("  ***********************  \n");
    printf(" ************************* \n");
    printf("***************************\n");
    printf(" ************ ************ \n");
    printf(" ***********   *********** \n");
    printf(" **********     ********** \n");
    printf(" *********       ********* \n");
    printf(" ********         ******** \n");
    printf("  *******         *******  \n");
    printf("   ******         ******   \n");
    printf("    *****         *****    \n");
    printf("     ****         ****     \n");
    printf("      ***         ***      \n");
    printf("       **         **       \n");
    printf("        *         *        \n");

    return;
}

int main()
{
    setlocale(LC_ALL, "spanish");

    drawStart();

    return 0;
}