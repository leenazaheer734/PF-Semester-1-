#include <iostream>
#include <windows.h>
using namespace std;

void printmaze();
void gotoxy(int x, int y);
void printpacman(int x, int y);
void printg(int gx, int gy);
void printv(int vx,int vy);
char getCharAtxy(short int x, short int y);
void clear(int x, int y, char previous);

main()
{
    int gx=29;
    int gy=1;
    int vx=5;
    int vy=3;
    string gdirection = "right";
    string vdirection = "down";
    char previousg = ' ';
    char previousv = ' ';
    system ("cls");

    printmaze();
    printg(gx,gy);
    printv(vx, vy);
    while(1)
    {
        Sleep (100);

        if(gdirection=="right")
        {
            char nextlocation =  getCharAtxy(gx+1, gy);
            if( nextlocation == '#' || nextlocation == '|' || nextlocation == '+')
            {
                gdirection = "left";
            }
            else if( nextlocation == ' '  || nextlocation == '.')
            {
                clear(gx, gy, previousg);
                gx=gx+1;
                previousg = nextlocation;
                printg(gx,gy);
            }
        }


        else if(gdirection=="left")
        {
            char nextlocation =  getCharAtxy(gx-1, gy);
            if( nextlocation == '#' || nextlocation == '|'  || nextlocation == '+')
            {
                gdirection = "right";
            }
            else if( nextlocation == ' '  || nextlocation == '.')
            {
                clear(gx, gy, previousg);
                gx=gx-1;
                previousg = nextlocation;
                printg(gx,gy);
            }
        }

        if(vdirection=="down")
        {
            char nextlocation =  getCharAtxy(vx, vy+1);
            if( nextlocation == '#' ||  nextlocation == '|'  || nextlocation == '+')
            {
                vdirection = "up";
            }
            else if( nextlocation == ' '  || nextlocation == '.')
            {
                clear(vx, vy, previousv);
                vy=vy+1;
                previousv = nextlocation;
                printv(vx,vy);
            }
        }       
        else if(vdirection=="up")
        {
            char nextlocation =  getCharAtxy(vx, vy-1);
            if( nextlocation == '#' ||  nextlocation == '|'  || nextlocation == '+')
            {
                vdirection = "down";
            }
            else if( nextlocation == ' '  || nextlocation == '.')
            {
                clear(vx, vy, previousv);
                vy=vy-1;
                previousv = nextlocation;
                printv(vx,vy);
            }
        }        

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
void clear(int x, int y, char previous)
{
    gotoxy(x,y);
    cout<< previous;
}
void printg(int gx, int gy)
{
    gotoxy(gx,gy);
    cout<<"G";
}
void printv(int vx, int vy)
{
    gotoxy(vx,vy);
    cout<<"v";
}