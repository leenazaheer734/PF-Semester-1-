#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

void gotoxy(int a, int b);
char getCharAtxy(short int x, short int y);
void printMaze();
void printTank();
void printEnemy();
void eraseEnemy();
void eraseTank();

char box = 219;
char tank1[6] = {box, box, box, '-', '-', '>'};
char tank2[6] = {'0', ' ', '0', ' ', ' ', ' '};

char enemy1[6] = {' ', ' ', ' ', '-', '-', '-'};
char enemy2[6] = {'<', '-', '-', '<', '-', '>'};
char enemy3[6] = {' ', ' ', ' ', '\\', '@', '/'};
char enemy4[6] = {' ', ' ', ' ', '*', '*', '*'};

int tankX = 2;
int tankY = 5;

int enemyX = 40;
int enemyY = 10;

void moveTankLeft();
void moveTankRight();
void moveTankUp();
void moveTankDown();
void moveEnemy();

string enemylocation = "up";

int bulletX[100];
int bulletY[100];
bool isbulletActive[100];
int bulletCount = 0;

void generateBullet();
void moveBullet();
void bulletCollisionwithEnemy();
int score = 0, timer =0;
void addScore();
void printScore();

main()
{
    system("cls");
    printMaze();
    printTank();
    printEnemy();

    while (true)
    {
        printScore();
        if (GetAsyncKeyState(VK_LEFT))
        {
            moveTankLeft();
            Sleep(200);
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            moveTankRight();
            Sleep(200);
        }
        if (GetAsyncKeyState(VK_UP))
        {
            moveTankUp();
            Sleep(200);
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            moveTankDown();
            Sleep(200);
        }
        if(GetAsyncKeyState(VK_SPACE))
        {
            generateBullet();
        }
        if (timer == 3)
        {
            moveEnemy();
            timer = 0;
        }
        moveBullet();
        bulletCollisionwithEnemy();
        timer++;
        Sleep(90);
    }
}
void printMaze()
{
    cout << " ################################################### " << endl;
    cout << " #                                                 # " << endl;
    cout << " #                                                 # " << endl;
    cout << " #                                                 # " << endl;
    cout << " #                                                 # " << endl;
    cout << " #                                                 # " << endl;
    cout << " #                                                 # " << endl;
    cout << " #                                                 # " << endl;
    cout << " #                                                 # " << endl;
    cout << " #                                                 # " << endl;
    cout << " #                                                 # " << endl;
    cout << " #                                                 # " << endl;
    cout << " #                                                 # " << endl;
    cout << " #                                                 # " << endl;
    cout << " #                                                 # " << endl;
    cout << " #                                                 # " << endl;
    cout << " #                                                 # " << endl;
    cout << " #                                                 # " << endl;
    cout << " #                                                 # " << endl;
    cout << " ################################################### " << endl;
}
void gotoxy(int a, int b) // Custom gotoxy() function
{
    COORD coordinates; // Data type of co-ordinates
    coordinates.X = a; // Assign value to X- Co-ordinate
    coordinates.Y = b; // Assign value to Y Co-ordinate

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void printTank()
{
    gotoxy(tankX, tankY);
    for (int index = 0; index < 6; index++)
    {
        cout << tank1[index];
    }
    gotoxy(tankX, tankY + 1);
    for (int index = 0; index < 6; index++)
    {
        cout << tank2[index];
    }
}
void printEnemy()
{
    gotoxy(enemyX, enemyY);
    for (int index = 0; index < 6; index++)
    {
        cout << enemy1[index];
    }
    gotoxy(enemyX, enemyY + 1);
    for (int index = 0; index < 6; index++)
    {
        cout << enemy2[index];
    }
    gotoxy(enemyX, enemyY + 2);
    for (int index = 0; index < 6; index++)
    {
        cout << enemy3[index];
    }
    gotoxy(enemyX, enemyY + 3);
    for (int index = 0; index < 6; index++)
    {
        cout << enemy4[index];
    }
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

void eraseTank()
{
    gotoxy(tankX, tankY);
    for (int index = 0; index < 6; index++)
    {
        cout << " ";
    }
    gotoxy(tankX, tankY + 1);
    for (int index = 0; index < 6; index++)
    {
        cout << " ";
    }
}
void eraseEnemy()
{
    gotoxy(enemyX, enemyY);
    for (int index = 0; index < 6; index++)
    {
        cout << " ";
    }
    gotoxy(enemyX, enemyY + 1);
    for (int index = 0; index < 6; index++)
    {
        cout << " ";
    }
    gotoxy(enemyX, enemyY + 2);
    for (int index = 0; index < 6; index++)
    {
        cout << " ";
    }
    gotoxy(enemyX, enemyY + 3);
    for (int index = 0; index < 6; index++)
    {
        cout << " ";
    }
}
void moveTankLeft()
{
    char next = getCharAtxy(tankX - 1, tankY);
    if (next == ' ')
    {
        eraseTank();
        tankX = tankX - 1;
        printTank();
    }
}
void moveTankRight()
{
    char next = getCharAtxy(tankX + 6, tankY);
    if (next == ' ')
    {
        eraseTank();
        tankX = tankX + 1;
        printTank();
    }
}
void moveTankUp()
{
    char next = getCharAtxy(tankX, tankY - 1);
    if (next == ' ')
    {
        eraseTank();
        tankY = tankY - 1;
        printTank();
    }
}
void moveTankDown()
{
    char next = getCharAtxy(tankX, tankY + 2);
    if (next == ' ')
    {
        eraseTank();
        tankY = tankY + 1;
        printTank();
    }
}
void moveEnemy()
{
    if (enemylocation == "up")
    {
        char next = getCharAtxy(enemyX, enemyY - 1);
        if (next == ' '|| next == '.')
        {
            eraseEnemy();
            enemyY = enemyY - 1;
            printEnemy();
        }
        if (next == '#')
        {
            enemylocation = "down";
        }
    }

    if (enemylocation == "down")
    {
        char next = getCharAtxy(enemyX, enemyY + 4);
        if (next == ' '|| next =='.')
        {
            eraseEnemy();
            enemyY = enemyY + 1;
            printEnemy();
        }
        if (next == '#')
        {
            enemylocation = "up";
        }
    }
}
void generateBullet()
{
    bulletX[bulletCount] = tankX + 7;
    bulletY[bulletCount] = tankY;
    isbulletActive[bulletCount] = true;
    cout << ".";
    bulletCount++;
}
void printBullet(int x, int y)
{
    gotoxy(x, y);
    cout << ".";
}
void eraseBullet(int x, int y)
{
    gotoxy(x, y);
    cout << " ";
}
void makeBulletInactive(int index)
{
    isbulletActive[index] = false;
}
void moveBullet()
{
    for (int x = 0; x < bulletCount; x++)
    {
        if (isbulletActive[x] == true)
        {
            char next = getCharAtxy(bulletX[x] + 1, bulletY[x]);
            if (next != ' ')
            {
                eraseBullet(bulletX[x], bulletY[x]);
                makeBulletInactive(x);
            }
            else
            {
                eraseBullet(bulletX[x], bulletY[x]);
                bulletX[x] = bulletX[x] + 1;
                printBullet(bulletX[x], bulletY[x]);
            }
        }
    }
}
void addScore()
{
    score++;
}
void bulletCollisionwithEnemy()
{
    for (int x = 0; x < bulletCount; x++)
    {
        if (isbulletActive[x] == true)
        {
            if (bulletX[x] + 1 == enemyX && (bulletY[x] == enemyY || bulletY[x] == enemyY + 2 || bulletY[x] == enemyY + 3))
            {
                addScore();
            }
            if (enemyX - 1 == bulletX[x] && enemyY + 1 == bulletY[x])
            {
                addScore();
            }
        }
    }
}
void printScore()
{
    gotoxy(55, 10);
    cout << "SCore: " << score;
}