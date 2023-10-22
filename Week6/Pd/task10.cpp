#include <iostream>
#include <windows.h>
using namespace std;

void printmaze();
void gotoxy(int x, int y);
void printpacman(int x, int y);
char getCharAtxy(short int x, short int y);
void erase(int x, int y);


main()
{
    int x = 5;
    int y = 3;
    int score = 0;
    system("cls");
    printmaze();
    printpacman(x, y);
    gotoxy(7,24);
    cout<<"Score : " << score;
    bool running = true;

    while (running)
    {
        if (GetAsyncKeyState(VK_LEFT))
        {
            char nextlocation = getCharAtxy(x - 1, y);
            if (nextlocation == ' ')
            {
                erase(x, y);
                x = x - 1;
                printpacman(x, y);
            }
            if (nextlocation == '.')
            {
                erase(x, y);
                x = x - 1;
                printpacman(x, y);
                score = score + 5;
                gotoxy(7, 24);
                cout << "Score : " << score;
            }
        }

        if (GetAsyncKeyState(VK_RIGHT))
        {
            char nextlocation = getCharAtxy(x + 1, y);
            if (nextlocation == ' ')
            {
                erase(x, y);
                x = x + 1;
                printpacman(x, y);
            }
            if (nextlocation == '.')
            {
                erase(x, y);
                x = x + 1;
                printpacman(x, y);
                score = score + 5;
                gotoxy(7, 24);
                cout << "Score : " << score;
            }
        }

        if (GetAsyncKeyState(VK_UP))
        {
            char nextlocation = getCharAtxy(x, y - 1);
            if (nextlocation == ' ')
            {
                erase(x, y);
                y = y - 1;
                printpacman(x, y);
            }
            if (nextlocation == '.')
            {
                erase(x, y);
                y = y - 1;
                printpacman(x, y);
                score = score + 5;
                gotoxy(7, 24);
                cout << "Score : " << score;
            }
        }

        if (GetAsyncKeyState(VK_DOWN))
        {
            char nextlocation = getCharAtxy(x, y + 1);
            if (nextlocation == ' ')
            {
                erase(x, y);
                y = y + 1;
                printpacman(x, y);
            }
            if (nextlocation == '.')
            {
                erase(x, y);
                y = y + 1;
                printpacman(x, y);
                score = score + 5;
                gotoxy(7, 24);
                cout << "Score : " << score;
            }
        }
        if (GetAsyncKeyState(VK_ESCAPE))
        {
            running = false;
        }
        Sleep(200);
    }
}

void printmaze()
{

    cout << "   ###################################################    " << endl;
    cout << "   ##    ...........    |+|     ................... ##    " << endl;
    cout << "   ##      +++++++++    |+|                    |+|  ##    " << endl;
    cout << "   ##     .|+|                ++++++++++  ..   |+|  ##    " << endl;
    cout << "   ##.    .|+|               |+|      |+| ..   |+|  ##      " << endl;
    cout << "   ##.    .++++++++       .  |+|++++++|+| ..   |+|  ##      " << endl;
    cout << "   ##.                 |+|.                    |+|  ##      " << endl;
    cout << "   ##.|+|     .........|+|.    |+|.....   +++++|+|  ##      " << endl;
    cout << "   ##.|+|    ++++++++++|+|.    |+|.....             ##        " << endl;
    cout << "   ##.|+|                 .    |+|.....    |+|..    ##        " << endl;
    cout << "   ##.|+|+++++++               |+|++++++   |+|..    ##        " << endl;
    cout << "   ##.        |+|         |+|...           |+|..    ##        " << endl;
    cout << "   ##.        |+|         |+|...                    ##        " << endl;
    cout << "   ##         |+|++++++   |+|...    ++++++++++++++  ##        " << endl;
    cout << "   ##  .......|+|         |+|...              .|+|  ##        " << endl;
    cout << "   ##    ++++++++         |+|...              .|+|  ##        " << endl;
    cout << "   ##                           |+|++++++++++ .|+|  ##        " << endl;
    cout << "   ##    |+|.  |+|.....         |+|.......    .|+|  ##        " << endl;
    cout << "   ##    |+|.  |+|++++++++      |+|     |+|   .|+|  ##        " << endl;
    cout << "   ##    |+|.                   |+|     |+|   .|+|  ##        " << endl;
    cout << "   ##    |+|.          +++++++++|+|     |+|   .     ##        " << endl;
    cout << "   ## ...............................               ##        " << endl;
    cout << "   ###################################################        " << endl;
}
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}
void printpacman(int x, int y)
{
    gotoxy(x, y);
    cout << "P";
}
void erase(int x, int y)
{
    gotoxy(x, y);
    cout << " ";
}
