#include <iostream>
#include <windows.h>
using namespace std;

void printmaze();
void gotoxy(int x, int y);
void printpacman(int x, int y);
void printghost(int x, int y);
char getCharAtxy(short int x, short int y);
void clear(int x, int y, char previous);

main()
{
    int x=2;
    int y=2;
    string direction = "right";
    char previous = ' ';
    system ("cls");

    printmaze();
    printghost(x,y);
    while(1)
    {
        Sleep (200);

        if(direction=="right")
        {
            char nextlocation =  getCharAtxy(x+1, y);
            if( nextlocation == '#')
            {
                direction = "left";
            }
            else if( nextlocation == ' '  || nextlocation == '.')
            {
                clear(x, y, previous);
                x=x+1;
                previous = nextlocation;
                printghost(x,y);
            }
        }


        if(direction=="left")
        {
            char nextlocation =  getCharAtxy(x-1, y);
            if( nextlocation == '#')
            {
                direction = "right";
            }
            else if( nextlocation == ' '  || nextlocation == '.')
            {
                clear(x, y, previous);
                x=x-1;
                previous = nextlocation;
                printghost(x,y);
            }
        }      

    }




}
void printmaze()
{

    cout << "###########################" << endl;
    cout << "##                       ##" << endl;
    cout << "##                  .....##" << endl;
    cout << "##                       ##" << endl;
    cout << "##                       ##" << endl;
    cout << "##                       ##" << endl;
    cout << "##                       ##" << endl;
    cout << "##                       ##" << endl;
    cout << "##                       ##" << endl;
    cout << "##                       ##" << endl;
    cout << "##                       ##" << endl;
    cout << "##                       ##" << endl;
    cout << "###########################" << endl;
}
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void printpacman(int x, int y)
{
    gotoxy(x, y);
    cout << "P";
    Sleep(200);
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
void clear(int x, int y, char previous)
{
    gotoxy(x,y);
    cout<< previous;
}
void printghost(int x, int y)
{
    gotoxy(x,y);
    cout<<"G";
}