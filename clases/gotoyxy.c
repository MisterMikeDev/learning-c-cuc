#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <windows.h>

int x, y;

void gotoxy(int x, int y)
{
    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hcon, dwPos);
}

int main()
{
    system("color 14");

    gotoxy(0, 0);
    printf("%c", 201);

    for (x = 1; x <= 15; x++)
    {
        printf("%c", 205);
    }
    printf("%c", 187);

    getchar();
    return 0;
}

// #include <stdio.h>
// #include <locale.h>
// #include <string.h>
// #include <ctype.h>
// #include <math.h>
// #include <windows.h>
// #include <ncurses.h>

// void gotoxy(int x, int y);
// void setColor(int text, int background);

// int X = GetSystemMetrics(SM_CXSCREEN);
// int Y = GetSystemMetrics(SM_CYSCREEN);

// int dimention = getmaxxy(stdin, x, y);

// int main()
// {
//     system("color 17");

//     printf("X: %d\n", X);
//     printf("Y: %d\n", Y);

//     printf("X: %d\n", di);

//     gotoxy(0, 0);
//     //    setColor(0, 10);
//     printf("%c", 201);
//     int x;
//     for (x = 1; x <= 15; x++)
//     {
//         printf("%c", 205);
//     }
//     printf("%c", 187);
//     int y;
//     for (y = 1; y <= 5; y++)
//     {
//         gotoxy(0, y);
//         printf("%c", 186);
//         gotoxy(16, y);
//         printf("%c", 186);
//     }

//     gotoxy(0, 6);
//     printf("%c", 200);
//     for (x = 1; x <= 15; x++)
//     {
//         printf("%c", 205);
//     }
//     printf("%c", 188);

//     gotoxy(17, 0);
//     //    setColor(0, 12);
//     printf("%c", 201);
//     for (x = 1; x <= 15; x++)
//     {
//         printf("%c", 205);
//     }
//     printf("%c", 187);

//     for (y = 1; y <= 5; y++)
//     {
//         gotoxy(17, y);
//         printf("%c", 186);
//         gotoxy(33, y);
//         printf("%c", 186);
//     }

//     gotoxy(17, 6);
//     printf("%c", 200);
//     for (x = 1; x <= 15; x++)
//     {
//         printf("%c", 205);
//     }
//     printf("%c", 188);

//     gotoxy(0, 7);
//     //    setColor(0, 14);
//     printf("%c", 201);
//     for (x = 1; x <= 15; x++)
//     {
//         printf("%c", 205);
//     }
//     printf("%c", 187);

//     for (y = 8; y <= 12; y++)
//     {
//         gotoxy(0, y);
//         printf("%c", 186);
//         gotoxy(16, y);
//         printf("%c", 186);
//     }

//     gotoxy(0, 13);
//     printf("%c", 200);
//     for (x = 1; x <= 15; x++)
//     {
//         printf("%c", 205);
//     }
//     printf("%c", 188);

//     gotoxy(17, 7);
//     //    setColor(0, 15);
//     printf("%c", 201);
//     for (x = 1; x <= 15; x++)
//     {
//         printf("%c", 205);
//     }
//     printf("%c", 187);

//     for (y = 8; y <= 12; y++)
//     {
//         gotoxy(17, y);
//         printf("%c", 186);
//         gotoxy(33, y);
//         printf("%c", 186);
//     }

//     gotoxy(17, 13);
//     printf("%c", 200);
//     for (x = 1; x <= 15; x++)
//     {
//         printf("%c", 205);
//     }
//     printf("%c", 188);

//     //    setColor(7, 0);
//     getchar();
//     return 0;
// }

// void gotoxy(int x, int y)
// {
//     HANDLE hcon;
//     hcon = GetStdHandle(STD_OUTPUT_HANDLE);
//     COORD dwPos;
//     dwPos.X = x;
//     dwPos.Y = y;
//     SetConsoleCursorPosition(hcon, dwPos);
// }
