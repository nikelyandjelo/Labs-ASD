#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    printf("*");
}

int main()
{
    int i, j, k;
    for (i = 0; i <= 5; i++)
    {
        for (j = 0; j < 80; j++)
        {
            gotoxy(j, (12 - 2 * i));
            gotoxy((j), (13 + 2 * i));
            Sleep(2);
        }

        for (k = 0; k < 80; k++)
        {
            gotoxy((79 - k), (11 - 2 * i));
            gotoxy((79 - k), (14 + 2 * i));
            Sleep(2);
        }

    }
    for (int j = 0; j < 80; j++) {
        gotoxy(j, 0);
        gotoxy(j, 25);
        Sleep(2);
    }
    return 0;
}

