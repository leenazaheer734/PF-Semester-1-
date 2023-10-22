#include <iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
void printa();
void printw();
void printi();
void prints();


main()
{
   system("cls");
   goto(35,10);
   printa();

   gotoxy(35,11);
   printw();

  gotoxy(35,12);
  printa();
  
  gotoxy(35,13);
  printi();

  gotoxy(35,14);
  prints();



}



void gotoxy(int x, int y)
 {
   COORD coordinates;
  coordinates.X =x;
  coordinates.Y =y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
 }



void printa()
{
  cout<<" A";
  Sleep(200);
}


void printw()
{
  cout<<" W";
}



void printi()
{
  cout<<" I";
}


void prints()
{
  cout<<" S";
}